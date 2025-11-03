#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

void randomn(int arr[],int a,int b){

    srand(time(0));
    for(int i=0; i<a; i++){
    arr[i]= rand() % b;
    }}

void stats(int arr[],int a){

 double sum = 0;

    
    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }
    double mean = sum / a;

    
    double variance = 0;
    for (int i = 0; i < a; i++) {
        variance += (arr[i] - mean) * (arr[i] - mean);
    }
    variance /= a;

    double stdDev = sqrt(variance);

    cout << "\nMean: " << mean;
    cout << "\nStandard Deviation: " << stdDev << endl;
}
int main()
{
    int a, b;
    cout << "Enter how many numbers: ";
    cin >> a;
    cout << "Enter upper limit: ";
    cin >> b;
    
    int arr[100]; 
    randomn(arr, a, b);

    cout << "\nGenerated numbers: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    stats(arr, a);

    return 0;
}


