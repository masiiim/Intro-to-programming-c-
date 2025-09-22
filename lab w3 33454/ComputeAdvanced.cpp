
#include <iostream>
using namespace std;
int main() {
    int a,b,sum,product;
    cout<<"INPUT: ";
    cin>>a>>b; 
    
    sum=a+b;
    product=a*b;
    cout<<"SUM= "<<sum<<endl;
    
    cout<<"PRODUCT= "<<product<<endl; 
    
    if(sum%product==0){
        cout<<"divisible"<<endl; 
        
    }
    else
    {
         cout<<"Not divisible"<<endl; 
         
    }

    return 0;
}