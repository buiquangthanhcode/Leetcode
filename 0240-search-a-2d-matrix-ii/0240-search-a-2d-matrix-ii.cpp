class Solution {
public:
  int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int mid = (l + r)/2;
        
        while(l <= r){
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) l = mid + 1;
            else if(nums[mid] > target) r = mid - 1;
            mid = (l + r)/2;
        }
        return -1;
    }
bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int r =matrix.size();
    int c =matrix[0].size();
    if(matrix.size()==1)
        {
            if(search(matrix[0],target)!=-1)
                return true;
        }
        for(int i=0;i<matrix.size();i++)
        {
            
              
                if((target >= matrix[i][0]))
                {
                  
                         if(search(matrix[i],target)!=-1)
                             return true; 
                   
                  
                   
                }
                else 
                {
                   
                    break;
                }
            
        }
        return false;
}
};