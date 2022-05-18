//10 s√-1m(W)l(2.71..) (11)(2.71..)(√-1)(nitrogen)(9.8)// 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define Ld long double
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb(x) push_back(x)
#define ppb pop_back()
#define nl "\n"
#define vec(a) vector<LLI>a
#define yes     cout<<"YES"<<nl; 
#define no      cout<<"NO"<<nl; 
#define f(i, f, l) for (LLI i = f; i < l; i++)
LLI gcd(LLI a, LLI b){return __gcd(a, b);}
LLI lcm(LLI a, LLI b) { return a * (b / __gcd(a, b)); }
bool isprime(LLI n){if (n <= 1) return false;for (LLI i = 2; i < n; i++)
 if (n % i == 0)return false;
return true;}
bool decending(int a,int b){ return a>b; }
LLI sqr_sum(LLI n) { return (n * (n + 1) * (2 * n + 1)) / 6; }
const int N=1e5+10;
const int M=1e9+7; 
const int Val=1e6;  
LLI mod(LLI x){return ((x%M + M)%M);}
LLI add(LLI a, LLI b){return mod(mod(a)+mod(b));}
LLI mul(LLI a, LLI b){ return mod(mod(a)*mod(b));}
/*----------------------------------------------------------------------*/
void solve() 
{ 
  string s="abcdefghijklmnopqrstuvwxyz"; 
  string h;  cin>>h;  LLI cnt=0,cnt1=0;  
  if(sz(h)==1){
       for(LLI i=0; i<sz(s); i++){
     if(h[0]==s[i]) cnt1=i+1;    }

    cout<<"Bob"<<" "<<cnt1-cnt<<nl; 
  } 
  else{
  if(sz(h)%2){
       for(LLI i=0; i<sz(h)-1; i++){
    for(LLI j=0; j<sz(s); j++){
        if(h[i]==s[j])  {cnt+=(j+1); break; } 
    }
    }
   for(LLI i=0; i<sz(s); i++){
     if(h[sz(h)-1]==s[i]) {cnt1=i+1; break;     }
     
  }
}
  else{
         for(LLI i=0; i<sz(h); i++){
    for(LLI j=0; j<sz(s); j++){
        if(h[i]==s[j])  {cnt+=(j+1); break; } 
    }
    }

  }
  if(cnt>cnt1) cout<<"Alice"<<" "<<cnt-cnt1<<nl; 
  else cout<<"Bob"<<" "<<cnt1-cnt<<nl; 

}
  
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    LLI tc; cin >> tc;  
    // cin.ignore();
    for (LLI i = 1; i <= tc; i++)
    {
         //cout << "Case #" << i << ": ";
        solve();
    }
    // solve();
}
    