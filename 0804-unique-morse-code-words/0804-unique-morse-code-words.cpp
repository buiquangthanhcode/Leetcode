class Solution {
public:
    string convert(string str)
{
      vector<string>a={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

     string result="";
     for(int i=0;i<str.length();i++)
     {
          int index=str[i]-'a';
          result+=a[index];
     }
     return result;
}
int uniqueMorseRepresentations(vector<string>& words) {
        
     set<string>s;
     for(int i=0;i<words.size();i++)
     {
          
          s.insert(convert(words[i]));
     }
     return s.size();
}
};