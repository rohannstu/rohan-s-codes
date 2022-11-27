//all is well
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb(x) push_back(x)
#define ppb pop_back()
#define nl "\n"
#define vec(a) vector<ll>a
#define yes     cout<<"YES"<<nl; 
#define no      cout<<"NO"<<nl; 
#define f(i, f, l) for (ll i = f; i < l; i++)
#define input(a)   for(ll i=0; i<n; i++) cin>>a[i]; 
#define output(a)  for(ll i=0; i<n; i++) cout<<a[i]<<" "; 
ll gcd(ll a, ll b){return __gcd(a, b);}
ll lcm(ll a, ll b) { return a * (b / __gcd(a, b)); }
bool isprime(ll n){if (n <= 1) return false;for (ll i = 2; i < n; i++)
if (n % i == 0)return false;
return true;}
bool perfectsqr(ll n){ ll v;   v=sqrt(n); if(v*v==n) { return true; } else { return false; }}
bool decending(int a,int b){ return a>b; }
ll sqr_sum(ll n) { return (n * (n + 1) * (2 * n + 1)) / 6; }
const int N=1e5+10;
const int M=1e9+7; 
const int MAX=1e7+10;  
ll mod(ll x){return ((x%M + M)%M);}
ll add(ll a, ll b){return mod(mod(a)+mod(b));}
ll mul(ll a, ll b){ return mod(mod(a)*mod(b));}
//bit manipulation 
int countsetbits(ll n){ll cnt=0;  while(n){cnt+=(n&1);  n=n>>1;  }return cnt; }
int getBit(int n,int pos){ return ((n&(1<<pos))!=0); }
int setBit(int n,int pos){ return (n | (1<<pos)); }
int clearBit(int n,int pos){ int mask=~(1<<pos); return (n&mask); }
/*--------------------------------------------------------------------------*/
int Pow(int a, int b){if(b==0) return 1;int ret = Pow(a,b/2);ret *= ret; if(b&1) ret *= a; return ret; }
#define debug(x) cout<<":["<<x<<"XE]"<<endl;
#define debug2(x,y) cout<<":["<<x<<" "<<y<<"XE]"<<endl;
/*----------------------------------------------------------------------*/
void solve() 
{
    ll n; cin>>n; cout<<n<<endl; 
        
}



signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);  
    ll tc; cin >> tc;  
    cin.ignore();
    for (ll i = 1; i <= tc; i++)
    {
        //cout << "Case " << i << ": ";
        solve(); 
    }
    //solve();
}
