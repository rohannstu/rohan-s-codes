//10 sā-1m(W)l(2.71..) (11)(2.71..)(ā-1)(nitrogen)(9.8)// 
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
const int MAX=1e7+10;  
LLI mod(LLI x){return ((x%M + M)%M);}
LLI add(LLI a, LLI b){return mod(mod(a)+mod(b));}
LLI mul(LLI a, LLI b){ return mod(mod(a)*mod(b));}
/*----------------------------------------------------------------------*/

void solve() 
{
    LLI n,m,p; cin>>n>>m; 
    LLI  a[n+1];  map<LLI,LLI>mp; LLI sum=0; 
    for(LLI i=1; i<=n; i++) { cin>>a[i];   sum+=a[i];   }
    for(LLI i=1; i<=n; i++) {mp[i]=a[i];  } 
    LLI cur=0;  

    while(m--){
        LLI t,x,i;   
        cin>>t; 
        if(t==2){
          cin>>x; 
          sum=n*x; 
          cur=x;  //1 2 3 4 5 
          mp.clear();    
        }
        else{
           cin>>i>>x; 
           if(!mp[i]) mp[i]=cur; 
           sum-=mp[i]; 
           sum+=x; mp[i]=x; 
         
        }
        cout<<sum<<nl; 
    }
}


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
   // LLI tc; cin >> tc;  
    // cin.ignore();
   // for (LLI i = 1; i <= tc; i++)
    //{
         //cout << "Case #" << i << ": ";
        //solve(); 
    //}
 solve();
}
