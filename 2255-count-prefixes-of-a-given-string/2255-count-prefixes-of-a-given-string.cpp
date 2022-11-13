class Solution {
public:
  int countPrefixes(vector<string>& words, string s)
{
    int count=0;
        for(int i=0;i<words.size();i++)
        {
                int index=0;
                int length=words[i].length();
                int len=0;
                while(index<length)
                {
                    
                    if(words[i][index]==s[index])
                    {
                        len++;
                    }
                    index++;
                }
                if(len==length)
                    count++;
                
              }

              return count ; 
        }
      

};