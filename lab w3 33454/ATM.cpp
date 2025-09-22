
#include <iostream>
using namespace std;

int main() {
    double balance=200000;
    int x;
    cout<< " 1. Deposit money \n 2. Withdraw money (only if sufficient balance)  \n 3. Check balance";
    cout<<"\n Enter choice(1,2,3)"<<endl;
    cin>>x;
    
    if(x==1)
    {
        cout<<"Enter amount: ";
        double add;
        cin>>add;
        balance+=add;
    }
    else if (x==2)
    {
        cout<<"Enter amount: ";
        double sub;
        cin>>sub;
        if(sub>balance)
        {
            cout<<"insufficient balance";
        }
        else
        {
        balance-=sub;
        }
    }
    else
    {
        cout<<"Your Balance is: "<<balance;
    }

    return 0;
}