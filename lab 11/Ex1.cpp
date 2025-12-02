#include<iostream>
using namespace std;
void swap(int* &a,int* &b){
int* temp=a;
a=b;
b=temp;

}
int main(){

int a=5,b=10;

int *p = &a;
int *q = &b;

cout<<*p<<" "<<*q<<"\n";
cout<<p<<" "<<q<<"\n";

swap(p,q);

cout<<*p<<" "<<*q<<"\n";
cout<<p<<" "<<q<<"\n";




}