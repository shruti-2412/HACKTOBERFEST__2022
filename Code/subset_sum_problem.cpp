#include<bits/stdc++.h>
using namespace std;

// k-> sum and n -> size
bool t[102][1002];

bool SubsetSum(vector<int> arr, int k ,int n){
   
   for (int j = 0; j < k+1; j++)
   {
        t[0][j] = false;
   }
   
   for (int i = 0; i < n+1; i++)
   {
      t[i][0] = true;
   }
   
    
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < k+1; j++)
        {
            if (arr[i-1] <= j)
            {
                t[i][j] = t[i- 1][j- arr[i-1]] || t[i-1][j];
            }
            else
            {
                t[i][j] = t[i-1][j]; // no
            }
        }
    }
    return t[n][k];
}

int main(){

    vector<int> arr = {4,2,7,1,3};
    cout<<SubsetSum(arr, 0, 5);
    return 0;
}