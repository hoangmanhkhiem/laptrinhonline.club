#include<bits/stdc++.h>
using namespace std;
long long dem=0;
void TRY(int *a,int l,int r){
 if(l==r) return;
 TRY(a,l,(l+r)/2);
 TRY(a,(l+r)/2+1,r);
 int m=(l+r)/2,b[r+5],c[r+5],k=l,t=m+1;
 for(int i=l;i<=m;i++) b[i]=a[i];
 for(int i=m+1;i<=r;i++) c[i]=a[i];
 b[m+1]=c[r+1]=INT_MAX;
 for(int i=l;i<=r;i++){
  if(b[k]>c[t]) dem+=m-k+1,a[i]=c[t++];
  else a[i]=b[k++];
 }
}
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int n; cin>>n ; int a[n+5];
 for(int i=1;i<=n;i++) cin>>a[i];
 TRY(a,1,n);
 cout<<dem;
}