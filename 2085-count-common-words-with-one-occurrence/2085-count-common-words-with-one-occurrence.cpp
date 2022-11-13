class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>mp1;
        map<string,int>mp2;
        for(auto a:words1){
            mp1[a]++;
        }
         for(auto a:words2){
            mp2[a]++;
        }
        vector<pair<string,int>>p1;
        vector<pair<string,int>>p2;
        for(auto it:mp1){
            p1.push_back({it.first,it.second});
        }
         for(auto it:mp2){
            p2.push_back({it.first,it.second});
        }
        int ctr=0;
        for(int i=0;i<p1.size();i++){
            for(int j=0;j<p2.size();j++){
                if(p1[i].first == p2[j].first){
                    if(p1[i].second==1 && p2[j].second==1){
                        ctr++;
                        break;
                    }
                }
            }
        }
        
        return ctr;
    }
};