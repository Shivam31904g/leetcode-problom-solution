class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int a=nums[0],b=nums[1],c=nums[2];
        int p=nums[nums.size()-1]*nums[nums.size()-2];
        return max(p*a,a*b*c);
        
        
    }
};