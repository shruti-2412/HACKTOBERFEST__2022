#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m,k;
   cin>>n>>m>>k;
   int arr[n][m];
   for (int i = 0; i <n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           cin>>arr[i][j];
       }
   }
   bool found=false;
   int r=0,c=n-1;
   while (r<m && c>=0)
   {
       if (arr[r][c]==k)
       {
           cout<<r<<" "<<c;
           found=true;
       }
       arr[r][c]>k?c--:r++;
   }
   if (found)
   {
       cout<<"found"<<endl;
   }
   else{
       cout<<"not found"<<endl;
   }
   
   
    return 0;
}