#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int mx=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>mx && (i==n-1 | a[i]>a[i+1])){
            count++;
        }
        mx=max(mx,a[i]);
    }

    cout<<count;
    
    return 0;
}