class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int>temp = heights;
        int count = 0;
        sort(temp.begin(), temp.end());
        int left = 0;
        int right = heights.size() - 1;
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != temp[i]) count++;
        }
        return count;
    }
};