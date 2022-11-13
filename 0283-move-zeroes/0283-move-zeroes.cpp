class Solution {
public:
    // 0  0 1 
    void moveZeroes(vector<int>& nums)
    {
        
        int count = 0;
        for (auto x : nums)
            if (x == 0)
                count++;
            
        
        std::vector<int>::iterator pend;
        pend = std::remove(nums.begin(), nums.end(), 0);
        nums.clear();
        for (auto p = nums.begin(); p != pend; ++p)
            nums.push_back(*p);
        while (count--)
            nums.push_back(0);
    }
};