#include<iostream>
using namespace std;




int main (){

double w=0.0,b=0.0,y,x=3,error;

for(int i=1; i<1000; i++){

y = w*x + b;
error=14-y;
w=w+0.01*error*x;
b=b+0.01*error;

if(i%100==0){
    cout<<"Step:"<<i<<" Prediction: "<<y<<" Error: "<<error << endl;
}


}

cout<<"Final prediction:"<<y<<" Target:14 b:"<<b<<" w:"<<w;






}