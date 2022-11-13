class Solution {
public:
    bool isSubsequence(string s, string t)
    {
      
        int left_s=0, right_s=s.length();
        if (s.length() > t.length()) return false;
        else if (s.length() == 0 || s == "") return true;
     
        else
        {
            for (int i = 0; i < t.length(); i++)
            {

                if (t[i] != s[left_s])
                {
                    continue;
                }
                else
                {
                    left_s++;
                    if (left_s == right_s)
                    {

                        return true;
                    }


                }


            }
            return false;
        }
       
        
    }
};