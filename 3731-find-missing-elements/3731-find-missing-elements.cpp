class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int i=0,mi=INT_MAX,ma=0;
        while(i<nums.size()){
            mi=min(mi,nums[i]);
            ma=max(ma,nums[i]);
            i++;
        }
        vector<int> co(ma+1,0);
        i=0;
        while(i<nums.size()){
            co[nums[i]]++;
            i++;
        }
        i=mi;
        vector<int> ans;
        while(i<=ma){
            if(co[i]==0){
                ans.push_back(i);
            }
            i++;
        }
        return ans;

    }
};