//all is well
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
#define input(a)   for(LLI i=0; i<n; i++) cin>>a[i]; 
#define output(a)  for(LLI i=0; i<n; i++) cout<<a[i]<<" "; 
LLI gcd(LLI a, LLI b){return __gcd(a, b);}
LLI lcm(LLI a, LLI b) { return a * (b / __gcd(a, b)); }
bool isprime(LLI n){if (n <= 1) return false;for (LLI i = 2; i < n; i++)
if (n % i == 0)return false;
return true;}
bool perfectsqr(LLI n){ LLI v;   v=sqrt(n); if(v*v==n) { return true; } else { return false; }}
bool decending(int a,int b){ return a>b; }
LLI sqr_sum(LLI n) { return (n * (n + 1) * (2 * n + 1)) / 6; }
const int N=1e5+10;
const int M=1e9+7; 
const int MAX=1e7+10;  
LLI mod(LLI x){return ((x%M + M)%M);}
LLI add(LLI a, LLI b){return mod(mod(a)+mod(b));}
LLI mul(LLI a, LLI b){ return mod(mod(a)*mod(b));}
//bit manipulation 
int countsetbits(LLI n){LLI cnt=0;  while(n){cnt+=(n&1);  n=n>>1;  }return cnt; }
int pow(int a, int b){if(b==0) return 1;int ret = pow(a,b/2);ret *= ret; if(b&1) ret *= a; return ret; }
#define debug(x) cout<<":["<<x<<"XE]"<<endl;
#define debug2(x,y) cout<<":["<<x<<" "<<y<<"XE]"<<endl;
/*----------------------------------------------------------------------*/
void solve() 
{
   

}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);  
    LLI tc; cin >> tc;  
    cin.ignore();
    for (LLI i = 1; i <= tc; i++)
    {
        //cout << "Case " << i << ": ";
        solve(); 
    }
    //solve();
}
