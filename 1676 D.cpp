
//this is codeforces problem;
/*
  problem link: https://codeforces.com/contest/1676/problem/D
  rating      : 1000
  
  *** solution apporach;
  --> Just Bruth forces;
  --> if you see this solution then you can understand How I thought!..
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n+1][m+1];
        for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
            cin >> a[i][j];
          }
        }

         long long mx=INT_MIN;
         for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
            long long sum=0;
            
            {//lower right cheak//
             int x=i, y=j;
              while(x < n&& y < m){
               sum+=a[x][y];
               x++,y++;
              }
            }

            {//upper left cheak//
             int x=i, y=j;
              while(--x >= 0 && --y >= 0){
               sum+=a[x][y];
              }
            }

            {//Upper right cheak//
             int x=i, y=j;
              while(--x >= 0 && ++y < m){
               sum+=a[x][y];
              }
            }

            {//lower left cheak//
             int x=i, y=j;
              while(++x < n && --y >= 0){
               sum+=a[x][y];
              }
            }
            
            mx=max(mx, sum);
          }
        }
        cout<< mx <<'\n';
    }
    return 0;
}
