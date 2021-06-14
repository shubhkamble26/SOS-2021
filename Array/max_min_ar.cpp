#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_elem=INT_MIN;
    int min_elem=INT_MAX;

    for(auto x:arr){
        max_elem=max(max_elem,x);
        min_elem=min(min_elem,x);
    }

    cout<<"Max Elem: "<<max_elem<<endl;
    cout<<"Min Elem: "<<min_elem<<endl;
    
    return 0;
}