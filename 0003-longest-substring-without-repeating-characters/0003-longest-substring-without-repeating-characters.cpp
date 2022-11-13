class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
	set<char>set;
	int i = 0, j = 0, _max = 0;
	while (i < s.length())
	{
		char c = s.at(i);
		while (set.find(c) != set.end())
		{
			set.erase(s.at(j));
			++j;
		}
		set.insert(c);
		_max = max(_max, i - j + 1);

		++i;

	}
        return _max;
    }
};