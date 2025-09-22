
#include <iostream>
using namespace std;

int main() {
    int x,maths,phy,urdu,cs,eng;
    cout<<"Input maths marks: "<<endl;
    cin>>maths;
      cout<<"Input physics marks: "<<endl;
    cin>>phy;
      cout<<"Input urdu marks: "<<endl;
    cin>>urdu;
      cout<<"Input Computer Science marks: "<<endl;
    cin>>cs;
      cout<<"Input English marks: "<<endl;
    cin>>eng;

   x = (maths+phy+urdu+cs+eng)/5;
    
   

 
    if (x >=90 && x<= 100) {
            cout << "A." << endl; 
    }
    else if (x >=80 && x<= 89) {
        
            cout << "B." << endl;
            }
    else if (x >=70 && x<= 79) {
            cout << "C." << endl;
        }
else if (x >=60 && x<= 69) {
             cout << "C." << endl;
        }
    
else {
       cout << "F." << endl;
    }

    return 0;
}