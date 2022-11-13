class Solution {
public:
int maxArea(vector<int>& height)
{
	
	int left = 0;
	int right = height.size() - 1;
	vector<int>vt;
	int t=0;
	int _max=0;
	// 1  2 1 
	
		while (left < right)
		{
			t = (right - left) * min(height[left], height[right]);
			_max = max(_max, t);
	
			if (height[left] < height[right])
			{
				++left;
			}
			else if (height[left] > height[right]) --right;
			else
			{
				++left;
				--right;
			}
		}
		

	
	
	return _max; 
}
};