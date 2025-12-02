#include<iostream>
using namespace std;

int factorial(int num){

if(num==0){ return 1;}
if (num ==1){ return 1;}

return (num*factorial(num-1));


}
int main(){

cout<<"Enter a number: ";
int number;
cin>>number;
cout<<number<<"!= "<<factorial(number);

}