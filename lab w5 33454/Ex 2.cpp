#include<iostream>
using namespace std;
int main()
{
    int num;
    int count=0;
    
    while(true) {
    	cin >> num;
    	while(num>0) {
        	cout<<" CL1002 exam is in week 09"<<endl;
        	num--;
        }
        if (num<0)
        {
            cout<<"Program ends.";
            cout<<"Total messages displayed: "<<count;
            break;
        }
    }
}