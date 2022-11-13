class Solution {
public:
vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2)
{
        for(auto x:items2)
            items1.push_back(x);
        vector<vector<int>>vt;
        vector<int>temp;
        sort(items1.begin(),items1.end());
        int i=0;
        for( i=0;i<items1.size()-1;i++)
        {
            if(items1[i][0] == items1[i+1][0])
            {
                  temp={items1[i][0] ,items1[i][1]+items1[i+1][1]};
                  i++;
            }
             
            else 
            {
               temp={items1[i][0] ,items1[i][1]};
            }
            vt.push_back(temp);
        }
        if(items1[--i][0]!=items1[items1.size()-1][0])
            vt.push_back({items1[items1.size()-1][0],items1[items1.size()-1][1]});
    
    return vt; 
}
};