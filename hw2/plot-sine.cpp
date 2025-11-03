#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int W = 80;   
    int H = 20;   
    double ymin = -1.0, ymax = 1.0;

    
    char arr[H + 1][W + 1];

    
    for (int i = 0; i <= H; ++i)
        for (int j = 0; j <= W; ++j)
            arr[i][j] = ' ';

    
    double xmin, xmax;
    cout << "Enter xmin: ";
    cin >> xmin;
    cout << "Enter xmax: ";
    cin >> xmax;

    
    int xaxis = (int)((0 - ymin) / (ymax - ymin) * H); 
    int yaxis = (int)((0 - xmin) / (xmax - xmin) * W);  

    if (xaxis >= 0 && xaxis <= H)
        for (int j = 0; j <= W; ++j)
         arr[xaxis][j] = '-';

    if (yaxis >= 0 && yaxis <= W)
        for (int i = 0; i <= H; ++i)
         arr[i][yaxis] = '|';

    
    for (int j = 0; j <= W; ++j) {
        double x = xmin + j * (xmax - xmin) / W;
        double y = sin(x);
        int gy = (int)((y - ymin) / (ymax - ymin) * H);
        gy = H - gy;  

        if (gy >= 0 && gy <= H)
         arr[gy][j] = '*';
    }

    
    for (int i = 0; i <= H; ++i) {
        for (int j = 0; j <= W; ++j)
            cout << arr[i][j];
        cout << '\n';
    }

    return 0;
}
