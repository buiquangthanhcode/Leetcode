class Solution {
public:
    int search(vector<int>& nums, int target)
{
    int mid =nums.size()/2; 
    int n =nums.size();
    int left=0;
    if(nums.size()==1 && target==nums[0]) return 0; 
    if(nums[mid]>target)
    {
        int index_mid=mid ;
        while(index_mid>=0)
        {
            if(nums[index_mid]==target) 
                return index_mid; 
                index_mid--;
        }
    }
    else if(nums[mid]<target)
    {
        int index_mid =mid; 
        while(index_mid<n )
        {
            if(nums[index_mid]==target) 
                return index_mid; 
            index_mid++;
        }
    }
    else 
    {
        return mid ;
    }
    return -1; 
}
};