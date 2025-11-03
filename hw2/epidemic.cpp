#include <iostream>
#include <ctime>
using namespace std;

const int MAX = 100;

int main() {
    srand(time(0));

    int W, H, I;
    double p, w;
    cout << "Enter grid width and height: ";
    cin >> W >> H;
    cout << "Enter initial number of infected individuals: ";
    cin >> I;
    cout << "Enter infection probability p (0..1): ";
    cin >> p;
    cout << "Enter worsening probability w (0..1): ";
    cin >> w;

    int grid[MAX][MAX] = {0};
    int days = 30;

    
    for (int k = 0; k < I; ++k) {
        int x = rand() % H;
        int y = rand() % W;
        grid[x][y] = 1 + rand() % 9;
    }


    for (int day = 0; day < days; ++day) {
        int newGrid[MAX][MAX];
        for (int i = 0; i < H; ++i)
            for (int j = 0; j < W; ++j)
                newGrid[i][j] = grid[i][j];

        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {

                if (grid[i][j] == 0) {
                    bool nearInfected = false;
                    if (i > 0 && grid[i-1][j] > 0 && grid[i-1][j] < 10) nearInfected = true;
                    if (i < H-1 && grid[i+1][j] > 0 && grid[i+1][j] < 10) nearInfected = true;
                    if (j > 0 && grid[i][j-1] > 0 && grid[i][j-1] < 10) nearInfected = true;
                    if (j < W-1 && grid[i][j+1] > 0 && grid[i][j+1] < 10) nearInfected = true;

                    if (nearInfected && ((double)rand() / RAND_MAX) < p)
                        newGrid[i][j] = 1 + rand() % 9;
                }

                else if (grid[i][j] > 0 && grid[i][j] < 10) {
                    if (((double)rand() / RAND_MAX) < w)
                        newGrid[i][j]++;
                    else
                        newGrid[i][j]--;

                    if (newGrid[i][j] > 9) newGrid[i][j] = 10;
                    if (newGrid[i][j] <= 0) newGrid[i][j] = -1;
                }
            }
        }

        for (int i = 0; i < H; ++i)
            for (int j = 0; j < W; ++j)
                grid[i][j] = newGrid[i][j];
    }

    cout << "\nFinal grid state:\n";
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == 0) cout << ".";
            else if (grid[i][j] == -1) cout << "R";
            else if (grid[i][j] == 10) cout << "X";
            else cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
