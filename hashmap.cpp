
//frequency counting 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"insert value of n ";
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    unordered_map<int,int> mp;

    for(int x : arr){
        mp[x]++;
    }

    for(auto it : mp){
        cout << it.first << " -> "
             << it.second << endl;
    }
}

//