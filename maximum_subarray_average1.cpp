#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of ther array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for first window 
    int k;
    cout<<"enter window size : ";
    cin>>k;
    double windowSum =0;
    for(int i=0;i<k;i++){
        windowSum +=arr[i];

    }
    double maxSum = windowSum;
    for(int i=k;i<n;i++){
        windowSum = windowSum -arr[i-k]+arr[i];
        maxSum=max(maxSum,windowSum);
    }
    double answer =maxSum/k;
    cout<<answer<<"\n";

}