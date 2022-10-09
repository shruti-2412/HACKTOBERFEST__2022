#include<bits/stdc++.h>
using namespace std;

priority_queue<int> pq;

void Knapsack(vector<int> wt, vector<int> val, int W, int idx, int profit){
    if (idx >= wt.size() || W == 0)
    {   
        // cout<<"profit - "<<profit<<endl;
        pq.push(profit);
        return;
    }

    for (int i = idx; i < wt.size(); i++)
    {
        if (wt[i] <= W)
        {
            Knapsack(wt,val, W - wt[i], idx + 1, profit + val[i]); // yes
            Knapsack(wt,val, W , idx + 1, profit); // no
        }
        else
        {
            Knapsack(wt,val, W , idx + 1, profit); // no
        }

        return;
    }
}

int main(){
    
    vector<int> wt = {1,3,4,5};
    vector<int> val = {1,4,5,7};

    int W = 7;
    int profit = 0;
    int idx = 0;
    Knapsack(wt, val, W, idx, profit);

    cout<<"Maximum profit - "<<pq.top()<<endl;
    return 0;
}