#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"First no is: "<<num1<<" Second no is: "<<num2<< endl;
    
    while(num1!=num2){
      
        num1=num1>>2;
        num2=num2*num2;
        cout<<"First no is: "<<num1<<" Second no is: "<<num2<< endl;
        if(num1==0){
            cout<<"These numbers will never be equal.";
            return 0;
        }
            else if(num1==num2){
                cout<<"First no is: "<<num1<<" Second no is: "<<num2<< endl;
               
                
            }
            
        }
    }