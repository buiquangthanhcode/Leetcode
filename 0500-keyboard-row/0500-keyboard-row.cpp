class Solution {
public:
   bool check(string s )
{
     cout<<endl;
      int a[26]={0};
      for(int j=0;j<s.length();j++)
          {
               if(s[j]=='q'||s[j]=='w'||s[j]=='e'||s[j]=='r'||s[j]=='t'||s[j]=='y'||s[j]=='u'||s[j]=='i'||s[j]=='o'||s[j]=='p'||s[j]=='Q'||s[j]=='W'||s[j]=='E'||s[j]=='R'||s[j]=='T'||s[j]=='Y'||s[j]=='U'||s[j]=='I'||s[j]=='O'||s[j]=='P')
               {
                    if(s[j]-'a'<0)
                    {
                         s[j]=s[j]+32;
                    }
                    a[s[j]-'a']=1;
               }
               if(s[j]=='a'||s[j]=='s'||s[j]=='d'||s[j]=='f'||s[j]=='g'||s[j]=='h'||s[j]=='j'||s[j]=='k'||s[j]=='l'||s[j]=='A'||s[j]=='S'||s[j]=='D'||s[j]=='F'||s[j]=='G'||s[j]=='H'||s[j]=='J'||s[j]=='K'||s[j]=='L')
               {
                    if(s[j]-'a'<0)
                    {
                         s[j]=s[j]+32;
                    }
                    a[s[j]-'a']=2;
               }
                if(s[j]=='z'||s[j]=='x'||s[j]=='c'||s[j]=='v'||s[j]=='b'||s[j]=='n'||s[j]=='m'||s[j]=='Z'||s[j]=='X'||s[j]=='C'||s[j]=='V'||s[j]=='B'||s[j]=='N'||s[j]=='M')
               {
                    if(s[j]-'a'<0)
                    {
                         s[j]=s[j]+32;
                    }
                    a[s[j]-'a']=3;
               }
          }
          
          
         set<int>st;
         for(int i=0;i<26;i++)
         {
          st.insert(a[i]);
         }
       if(st.size()==2)
          return true;
     return false;
     
}
vector<string> findWords(vector<string>& words)
{
     string first_row="qwertyuiop";
     string second_row="asdfghjkl";
     string third_row="zxcvbnm";
     vector<string> t;
    
        for(int i=0;i<words.size();i++)
        {
          if(check(words[i]))
               t.push_back(words[i]);
         
        }

        return t;
}
};