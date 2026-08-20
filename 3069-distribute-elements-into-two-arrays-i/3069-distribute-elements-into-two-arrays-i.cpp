class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a1,a2;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        int i=2;
        while(i<nums.size()){
            if(a1.back()>a2.back()){
                a1.push_back(nums[i]);
            }
            else{
                a2.push_back(nums[i]);
            }
            i++;
        }
        i=0;
        while(i<a1.size()){
            nums[i]=a1[i];
            i++;
        }
        while(i-a1.size()<a2.size()){
            nums[i]=a2[i-a1.size()];
            i++;
        }
        return nums;
    }
};