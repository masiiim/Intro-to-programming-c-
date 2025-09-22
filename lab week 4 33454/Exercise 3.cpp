#include <iostream>
using namespace std;
int main()
{
    double cal,fat,calfat;
    cout<<"Number of calories and fat grams: ";
    cin>>cal>>fat;
    calfat = fat*9 ;
    double percnt= ((calfat/cal)*100);

    if ((cal<=0)||(fat<=0))
    {
        cout<<"Invalid Input.";
    }
    else if (calfat>cal)
    {
        cout<<"Invalid Input.";
    }
    else
    {
        cout<<"There are "<<percnt<<" percent fat calories. ";
    }
}