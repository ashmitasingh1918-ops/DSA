#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cout<<"enter size of ther array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int>myset;
    myset.insert(arr.begin(),arr.end());
    int maxLength =0;

    for(int i :myset){
        if(myset.find(i-1) == myset.end() ){
            int current =i;
            int length=1;
            
            while(myset.find(current+1) != myset.end()){
                current++;
                length++;
            }
            maxLength=max(maxLength,length);
        }
    }
    
    cout<<maxLength<<"\n";
}

