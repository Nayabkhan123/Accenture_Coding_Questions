#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the Max Limit and Min limit of Numbers"<<endl;
    int min,max;
    cin>>max>>min;
    for(int i=min;i<=max;i++){
        int j=i;
        int num=0;
        while(j){
            int rem=j%10;
            num=num*10+rem;
            j=j/10;
        }
        if(num==i) cout<<num<<" ";
    }
}