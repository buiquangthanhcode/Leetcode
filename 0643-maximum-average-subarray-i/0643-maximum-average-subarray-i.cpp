class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum= accumulate(begin(nums), begin(nums)+k,0);
        int maxsum = sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]; sum-=nums[i-k];
            if(sum>maxsum) maxsum=sum;
        }
        return maxsum/(double)k;
    }
};