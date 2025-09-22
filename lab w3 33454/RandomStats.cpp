#include <iostream>
#include <ctime>    
#include <algorithm> 

using namespace std;

int main() {
    
    srand(time(0));
  double n1  = (double) rand()/RAND_MAX;
  cout<<n1<<endl;
  double n2  = (double) rand()/RAND_MAX;
  cout<<n2<<endl;
  double n3 = (double) rand()/RAND_MAX;
  cout<<n3<<endl;
  double n4  = (double) rand()/RAND_MAX;
  cout<<n4<<endl;
  double n5  = (double) rand()/RAND_MAX;
  cout<<n5<<endl;
  
  cout<<"Average: "<<(n1+n2+n3+n4+n5)/5<<endl;
  cout<<"Maximum: "<<max({n1,n2,n3,n4,n5})<<endl;
  cout<<"Minimum: "<<min({n1,n2,n3,n4,n5});
  
    return 0;
}
