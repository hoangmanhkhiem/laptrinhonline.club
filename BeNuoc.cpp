//Tichpx
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long a,b,c,a2=0,a3=0,a5=0,b2=0,b3=0,b5=0;
    cin >> a >> b;
    c=__gcd(a,b);
    a/=c;
    b/=c;
    while(a%2==0) {a/=2;a2++;}
    while(a%3==0) {a/=3;a3++;}
    while(a%5==0) {a/=5;a5++;}
    while(b%2==0) {b/=2;b2++;}
    while(b%3==0) {b/=3;b3++;}
    while(b%5==0) {b/=5;b5++;}
    if(a!=1 || b!=1) cout<<-1;
    else cout << max(a2,b2)-min(a2,b2)+max(a3,b3)-min(a3,b3)+max(a5,b5)-min(a5,b5);
    return 0;
}