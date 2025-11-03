#include<iostream>
#include<string>
using namespace std;
int countwords(string line){
    int count=1;
    for(int i=0; i<line.length(); i++){
        if(line[i] ==' '){
            count++;
        }
    }
    return count;
}
int main(){
    string line;
    cout<<"Enter a line: ";
    getline(cin,line);

    int wordcount=countwords(line);
    cout<<"Total words are: "<<wordcount;
}