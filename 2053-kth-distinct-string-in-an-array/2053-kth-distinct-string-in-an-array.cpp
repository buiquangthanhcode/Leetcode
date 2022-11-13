class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m ; 
            map<int ,int > m_value; 
        for(auto x:arr)
        {
                m[x]++;
                
        }
            int index=0;
        for(int i=0;i<arr.size();i++)
        {
                if(m[arr[i]]==1)
                {
                  if(index==(k-1))
                  {
                          return arr[i];
                  }
                        index++;
                }
        }
          return "";
    }
};