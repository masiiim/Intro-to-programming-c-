#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter sides: ";
    cin>>a>>b>>c;

    if ((a==b)&&(b==c))
    {
        cout<<"It is a equaletral triangle.";
    
    }
    else if ((a==b)||(b==c)||(a==c))
    {
        cout<<"It is a isosceles triangle.";
    }
    else
    {
        cout<<"It is a scalene triangle.";
    }
}