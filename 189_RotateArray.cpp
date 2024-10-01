// space O(n) time O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            // if(i+k>)
            int a=(i+k)%n;
            cout<<"a is "<<a<<" "<<nums[a]<<" ";
            ans[a]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};

//space O(1) time O(n*k) GIVES TLE
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int temp=nums[0];
        int temp2=0;
        for(int i=0;i<k;i++){
            temp=nums[0];
            for(int j=0;j<n;j++){
                int a = (j+1)%n;
                temp2=nums[a];
                nums[a]=temp;
                temp=temp2;
            }
        }
    }
};
// space O(1) time O(n)
class Solution {
public:
    void reverse(vector<int>&nums,int start,int end){
        for(int i=start;i<((start+end)/2)+1;i++){
            swap(nums[i],nums[end-i+start]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(nums.size()==1 || k==0) return;
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
};
// simplest😊
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};