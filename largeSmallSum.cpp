#include<bits/stdc++.h>
using namespace std;
int largeSmallSum(vector<int>arr,int n){
    if(n<4) return 0;
    vector<int>even,odd;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    return even[even.size()-2] + odd[1];
}
int main(){
    //3 2 1 7 5 4
    vector<int>arr = {1, 8, 0, 2, 3, 5, 6};
    cout<< largeSmallSum(arr,arr.size());
}