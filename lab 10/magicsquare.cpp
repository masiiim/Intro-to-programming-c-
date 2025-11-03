#include<iostream>
using namespace std;
bool magic(int arr[3][3]){

    int sum1=arr[0][0]+arr[1][1]+arr[2][2];
    int sum2=arr[0][2]+arr[1][1]+arr[2][0];

    if(sum1!=sum2){
        return false;
    }
   

for(int i=0; i<3; i++){

    int rsum=0;
    int csum=0;

    for(int j=0; j<3; j++){
        
        rsum += arr[i][j];
        csum += arr[j][i];
        
    }

    if(rsum!=sum1||csum!=sum1){
        return false;
    }
}

return true;

}

int main() {
    int arr[3][3];

    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    if (magic(arr))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}