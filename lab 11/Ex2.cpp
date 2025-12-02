#include<iostream>
using namespace std;
float* sumarray(float* a,int b){
     float sum = 0;
    for (int i = 0; i < b; i++) {
        sum += a[i];
    }

    float* result = new float;   
    *result = sum;
    return result;


}
int main(){

float arr[4]={1.5,2.0,3.3,0.9};
cout<<*sumarray(arr,4);


}