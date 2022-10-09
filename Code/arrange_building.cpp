#include<bits/stdc++.h>
using namespace std;

// Using Variables 
int main(){
    int n;
    cin>> n;

    int czeroes = 1;// dp0[1] = 1;
    int cones = 1;// dp1[1] = 1;

    
    int nzeroes = 0;
    int nones = 0;
    
    for (int i = 0; i < n-1; i++)
    {
        nones = cones + czeroes;
        nzeroes = cones;

        czeroes = nzeroes;
        cones = nones;
    }
    
    long total = czeroes + cones;
    cout<<total* total;
    return 0;
}