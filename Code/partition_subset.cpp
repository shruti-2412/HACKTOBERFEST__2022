#include<iostream>
using namespace std;

int main(){
    
    int n;  // no of peoples
    cin>>n;

    int k;  // no of teams
    cin>>k;

    int dp[k+1][n+1] ={0};

    for (int t = 1; t < k+1; t++)
    {
        for (int p = 1; p < n+1; p++)
        {   
            if (p < t)
            {
                dp[t][p] =0;   
            }
            else if (t == p)
            {
                dp[t][p] =1;
            }
            else{
                dp[t][p] = dp[t-1][p-1] + t*(dp[t][p-1]);
            } 
        }
        
    }

    cout<<dp[k][n];
    return 0;
}