class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& vs,vector<vector<int>>& vi) 
    {
       map<int,int>mp ;
        for(int i=0;i<vs.size();i++)
        {
            mp.insert(make_pair(vs[i][0],vs[i][1])) ;
        }
        for(int i=0;i<vi.size();i++) 
        {
            if(mp.find(vi[i][0])!=mp.end())
            {
                mp[vi[i][0]]+=vi[i][1] ;
            }
            else 
            {
                mp.insert(make_pair(vi[i][0],vi[i][1])) ;
            }
        }
        vector<vector<int>>ret ;   
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            int x=it->first ;
            int y=it->second ;
            ret.push_back({x,y}) ;
        }
        return ret ;
    }
};
