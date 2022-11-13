class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int sum1,sum2,ans=0;
        unordered_map<int,int> m1,m2;
        
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                sum1=nums1[i]+nums2[j];
                m1[sum1]++;
            }
        }
        
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                sum2=nums3[i]+nums4[j];
                m2[sum2]++;
            }
        }
        
        for(auto& ele:m1){
            int target=-1*ele.first;
            if(m2[target]>0)
                ans+=(ele.second*m2[target]);      // all possible cases.
                                                   // if m1 have 3 with frequency 2 and m2 have -3 with frequency 4 then total case= 2*4=8
        }
        return ans;
    }

};