class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans=0;
        int cou=0;
        int i=0,j=0,k=0;
        while(k<nums.size()){
            if(nums[j]==target){
                cou++;
            }
            if(cou>(abs(i-j)+1)/2){
                ans++;
            }
            if(nums[i]==target){
                cou--;
            }
            i++;
            j++;
            if(j==nums.size()){
                cou=0;
                k++;
                i=0;
                j=k;
                int t=0;
                while(t<k){
                    if(nums[t]==target){
                        cou++;
                    }
                    t++;
                }
            }
        }
        return ans;
    }
};