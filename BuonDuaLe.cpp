#include<bits/stdc++.h>
using namespace std;
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int n, m, k, x, d;
 long long res = 0;
 cin >> n >> m >> k;
 queue<int> q;
 for(int i = 0; i < n + m - 1; i++){
  d = k;
  if(i < n){
   cin >> x;
   q.push(x);
  }
  else q.push(0);
  while(q.size() > m) q.pop();
  while(q.size() && d){
   if(q.front() <= d){
    res += q.front();
    d -= q.front();
    q.pop();
   }
   else{
    res += d;
    q.front() -= d;
    d = 0;
   }
  }
 }
 cout << res;
}