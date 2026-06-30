class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX,diff=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    int v=nums[i]+nums[j]+nums[k];
                    if(diff>abs(v-target)){
                        diff=abs(v-target);
                        ans=v;
                    }
                    
                }
            }
        }
        return ans;
    }
};