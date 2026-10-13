class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int j=0;j<nums.size();j++){
            nums[j]=abs(nums[j]);
        }
        sort(nums.begin(),nums.end());
        int i=(nums.size()/2)-1;
        long long ans=0;
        int k=nums.size()-1;
        while(i>=0){
            ans+=(long long)((nums[k]*nums[k])-(nums[i]*nums[i]));
            i--;
            k--;
        }
        if(k==(nums.size()/2)){
            ans+=nums[k]*nums[k];
        }
        return ans;
    }
};