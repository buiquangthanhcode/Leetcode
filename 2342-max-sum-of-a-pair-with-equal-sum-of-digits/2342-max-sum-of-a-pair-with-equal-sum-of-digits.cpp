class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
         sort ( nums.begin(), nums.end() );
         vector<int> ans;
        
        
        for ( int i=0;i<nums.size();i++ )
        {
            int sum = 0;
            int val = nums[i];
            while ( val!= 0 )
            {
                sum += val % 10;
                val = val /10;
            }
            ans.push_back(sum);
        }
        
        unordered_map<int,int> umap;

        int sum = -1;

        for ( int i=0;i<ans.size();i++ )
        {
            if ( umap.find(ans[i]) != umap.end()  )
            {
                auto it = umap.find(ans[i]);
                 sum = max (nums[i] + nums[it->second], sum );
            }
            umap[ans[i]] = i;
        }
      
        return sum;
        
    }
};