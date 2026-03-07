
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int largest = nums[0];
    int second_largest =nums[0];
    for(int i:nums){
        if(i>largest){
            second_largest=largest;
            largest =i;
            
        }
        if(i > second_largest && i < largest){
            second_largest=i;
        }
    }
    cout<<second_largest;

    return 0;
}