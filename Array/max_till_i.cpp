#include<iostream>
using namespace std;

int main(){
    int arr[8]={2,5,8,3,24,39,7,32};
    int maxNo=INT_MIN;
    for(int i=0;i<8;i++){
        maxNo=max(maxNo,arr[i]);
        arr[i]=maxNo;
    }

    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}