class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        //3,1,2,4
        int current = 0;
        int i = 0;
        vector<int>temp;
        for (auto x : nums)
        {
            if (x % 2 != 0)
            {
                temp.push_back(x);
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                nums[current] = nums[i];
                current++;
            }
        }
       
        while (current<nums.size())
        {
            nums[current] = temp[i];
            current++;
            i++;
        }
        return nums;
    }
};