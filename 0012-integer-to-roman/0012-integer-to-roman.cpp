class Solution {
public:
    string intToRoman(int num) {
        vector<pair<string,int>>mp;

        mp.push_back(make_pair("M",1000));
        mp.push_back(make_pair("CM",900));
        mp.push_back(make_pair("D",500));
        mp.push_back(make_pair("CD",400));
        mp.push_back(make_pair("C",100));
        mp.push_back(make_pair("XC",90));
        mp.push_back(make_pair("L",50));
        mp.push_back(make_pair("XL",40));
        mp.push_back(make_pair("X",10));
        mp.push_back(make_pair("IX",9));
        mp.push_back(make_pair("V",5));
        mp.push_back(make_pair("IV",4));
        mp.push_back(make_pair("I",1));
        
        string res = "";
        for(auto i:mp)
        {
            int n = num/i.second;
            if (n > 0)
            {
                while(n--)
                {
                    res += i.first;
                }
                num = num%i.second;
            }
        }
        
        return res;
    }
};