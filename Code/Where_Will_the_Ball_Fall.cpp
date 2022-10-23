class Solution {
public:
    vector<int> findBall(vector<vector<int>>& vi)
    {    
        vector<int>ds ;
      for(int k=0;k<vi[0].size();k++)
      {
          int x=-1 ;
          int i=0,j=k ;
          
             while(i>=0 && i<vi.size() && j>=0 && j<vi[0].size())
              {
                  if(vi[i][j]==1)
                  {
                      if(j+1<vi[0].size() && vi[i][j] == vi[i][j+1])
                      {
                          i=i+1 ;
                          j=j+1 ;
                      }
                      else 
                      {
                          break ;
                      }
                  }
                  else 
                  {
                      if(j-1>=0 && vi[i][j]==vi[i][j-1])
                      {
                          i=i+1 ;j=j-1 ;
                      }
                      else
                      {
                          break  ;
                      }
                  }
               }
          if(i==vi.size())
          ds.push_back(j) ;
          
          else 
              ds.push_back(x) ;
      }
        return ds ;
    }
    
};
