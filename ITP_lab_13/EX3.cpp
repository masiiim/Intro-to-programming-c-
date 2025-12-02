#include<iostream>
using namespace std;

bool subsequence(string s1, string s2){

    if (s1.empty())
        return true;
  if (s2.empty())
        return false;

if(s1[0]==s2[0]){

    return subsequence(s1.substr(1),s2.substr(1));
}

return subsequence(s1,s2.substr(1));

}

int main(){
string s1;
string s2;

cout<<"INPUT: ";
cin>>s1>>s2;

 bool result = subsequence(s1, s2);

if(result){
    cout<<"YES! is a subsequence.";
}else{

cout<<"NO! is not a subsequence.";

}





}