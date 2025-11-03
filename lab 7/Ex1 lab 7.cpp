#include<iostream>
using namespace std;
int main()
{
    int size,sum=0;
    cout <<"Enter size of array: ";
    cin >>size;

    int arr[size];

    cout<<"Enter elements: ";
    for(int i=0 ; i<size ; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    double avg = (double)sum/size;

    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<avg;






}