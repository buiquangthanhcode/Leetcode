class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int a[26]={0};
        int b[26]={0};
        if(s.length()<t.length())return false;
    for(int i=0;i<s.length();i++)
    {
        b[s[i]-'a']++;
    }
       for(int i=0;i<t.length();i++)
       {
           a[t[i]-'a']++;
       }
    int i=0;
        int count=0;
        for(i=0;i<s.length();i++)
        {
            if(b[s[i]-'a']==a[s[i]-'a']) 
            {
                count++;
            }
            else 
                break;
        }
        if(count==s.length()) return true;
        return false;
        
    }
};