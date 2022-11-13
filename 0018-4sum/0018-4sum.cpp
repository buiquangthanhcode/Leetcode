class Solution {
public:
   vector<vector<int>> fourSum(vector<int>& nums, int target) 
{
     
    vector<vector<int>>rs;
         if(target==-294967296||target==294967296) return rs;
    set<tuple<int,int,int,int>>m;
    sort(nums.begin(),nums.end());
    int left=0 ; int right=nums.size()-1;
    long long sum=0;
       if(nums.size()<4)
            return rs;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {

            
             left=j+1 ; right=nums.size()-1; sum=target-(nums[i]+nums[j]);
             

        while(left<right)
        {
            int cur=nums[left]+nums[right];
            if(sum==cur)
            {
                vector<int>vt={nums[i],nums[j],nums[left],nums[right]};
                sort(vt.begin(),vt.end());
                m.insert(tuple<int,int,int,int>(vt[0],vt[1],vt[2],vt[3]));
                left++;
                right--;
            }
            else if(cur<sum) left++;
            else right--;
        }
        }
        
            
    }
    for(auto x:m)
    {
        rs.push_back({get<0>(x),get<1>(x),get<2>(x),get<3>(x)});
    }
    return rs;
}
};