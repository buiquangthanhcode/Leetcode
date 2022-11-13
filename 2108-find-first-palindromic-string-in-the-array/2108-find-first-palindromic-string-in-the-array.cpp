class Solution {
public:
    bool checkPlindrome(string s )
    {
            int left=0; 
            int right=s.length()-1;
            while(left<=right)
            {
                    if(s[left]==s[right])
                    {
                            left++;
                            right--;
                    }
                    if(s[left]!=s[right])
                         return false; 
            }
           return true; 
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x:words)
        {
                if(x.length()==1) return x; 
                if(checkPlindrome(x))
                        return x;
        }
            return "";
    }
};