class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i=0,ma=0;
        while(i<nums.size()){
            ma=max(ma,nums[i]);
            i++;
        }
        vector<int> co(ma+1,0);
        i=0;
        while(i<nums.size()){
            co[nums[i]]++;
            i++;
        }
        if(target>ma){
            return {};
        }
        i=0;
        int ind=0;
        while(i<target){
            ind+=co[i];
            i++;
        }
        int val=co[target];
        vector<int> ans;
        i=0;
        while(i<val){
            ans.push_back(ind);
            ind++;
            i++;
        }
        return ans;

    }
};