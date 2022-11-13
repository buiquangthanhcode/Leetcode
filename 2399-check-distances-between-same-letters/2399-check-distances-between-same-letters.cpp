class Solution {
public:
int dista(string s,char next_char,int index )
{
     int dis=0;
     for(int j=index+1;j<s.length();j++)
               {
                    if(s[j]==next_char)
                    {
                         return dis;

                    }
                    dis++;

               }
     return dis;
}
bool checkDistances(string s, vector<int>& distance) {
     
     int a[26]={0};
     vector<int>temp=distance;
     
     for(int i=0;i<s.length();i++)
     {
          char next_char=s[i];
          a[s[i]-'a']++;
          if(a[s[i]-'a']<=1)
          {
               int dis= dista(s,next_char,i);
          
               temp[s[i]-'a']=dis;

          }
           
     }
     for(int i=0;i<temp.size();i++)
     {
          if(temp[i]!=distance[i])
          {
               return false;
          }
     }
    
      return true;  
}
};