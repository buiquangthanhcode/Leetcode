class Solution {
public:
int longestPalindrome(string s) 
{
    if(s.length()==1)   return s.length(); 
    map<int,int> m ;
    for(auto x:s)
    {
        m[x-'a']++;
    }
    int length=0;
    int checkOdd=0;
    for(auto x:m)
    {
        if(x.second>=2)
        {
            length+=(x.second/2);
        }
         if(x.second%2!=0)
        {
            checkOdd=1;
        }
    }
   
    int result=length*2;
    if(checkOdd==0)
        return result;
    else 
        return (result+1);
    
   return 0; 
}
};