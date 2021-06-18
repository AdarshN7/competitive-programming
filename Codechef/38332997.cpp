#include<bits/stdc++.h>
#include<iostream> 
#include<vector> 
#include<algorithm> 
#include<iomanip> 
#include<stack> 
#include<unordered_map>
#include<queue> 
#include<deque>
#include<map> 
#include<climits>
#include<set> 
#include<string> 
#include<math.h>
//#include<bits/stdc++.h> 
using namespace std; 

#define lld long long int 
#define eb emplace_back
//to insert pair use eb
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define v vector

# define rec2(i,a,n) for(lld i=a;i<n;i++) 
#define rec(i,n) for(lld i=0;i<n;i++)
#define rev(i,a,n) for(lld i=n-1;i>=a;i--)

//for 10^k use 1ek 
#define inf 1e18
#define pi 3.1415926535897932384626

const double EPS = 1e-6;
const long long int X =1e9+7; 
const long long int Y=998244353; 

void google(int i)
{  cout<<"Case #"<<i<<": "; }

//floating precision functions 
//floor() for low 
//ceil() for above 
// trunc() removes decimal digits
//round() used to round off 
void prec(double n,lld d) 
{ 
 cout<<fixed<<setprecision(d)<<n<<endl; 
}

//prime[i]==1 if it is prime 
lld prime[1000001]; 
void sieve(lld n) 
{ rec(i,n+1) 
    prime[i]=1; 
   for(lld i=2;i*i<=n;i++) 
     { if(prime[i]!=1) 
          continue; 
         for(lld j=i*i;j<=n;j=j+i) 
          if(prime[j]==1)
           prime[j]=i; 
      }
}

lld gcd(lld a,lld b)
{
    if(a==0)
     return b; 
    return gcd(b%a,a); 
}

//fermat a^(m-2)%mod
lld bin(lld a,lld n,lld m)
{  lld res=1; 
 while(n) 
  { if(n%2) 
      { res=(res*a)%m; 
         n--; 
      } 
     a=(a*a)%m; 
     n/=2; 
  }
  return res; 
}

void bfs(lld s,v<lld> g[],lld n)
{ 
   bool vis[n]; 
   rec(i,n) 
    vis[i]=false; 
    
   vis[s]=true; 
   deque<lld> q; 
   q.pb(s); 
   
   while(!q.empty()) 
   {  
      s=q.front(); 
     q.pop_front(); 
      
     for(lld i=0;i<g[s].size();i++) 
      {  
        if(!vis[g[s][i]])
         { vis[g[s][i]]=true; 
            q.pb(g[s][i]); 
         }
      }
   }
}

void dfs(lld u,v<lld> g[],bool *vis)
{ 

   vis[u]=true; 
   for(lld i=0;i<g[u].size();i++) 
     if(!vis[g[u][i]])
          dfs(g[u][i],g,vis); 
       
} 

void create(v<lld> *g,lld n,lld m) 
{  
   rec(i,m) 
    { lld x,y; 
      cin>>x>>y; 
      g[x-1].pb(y-1); 
      g[y-1].pb(x-1); 
    } 
}
void contest(lld t); 
int main()
{   
   ios_base::sync_with_stdio(false); 
   cin.tie(0);
     #ifdef PUNEET_GOEL
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif
    //sieve(1e6); 
    lld T=1; 
    
    rec(t,T) 
    {
      contest(t); 
    }
	return 0;
}

void contest(lld t)
{ 
lld n; 
cin>>n; 
  string a; 
  cin>>a; 
  lld cnt=0; 
  rec(i,a.length())
    if(a[i]=='V') 
      cnt++; 
  if(cnt>(n-cnt)) 
   cout<<"Virat"; 
   else if((n-cnt)>cnt) 
   cout<<"Harshit"; 
   else 
   cout<<"Friendship"; 
   cout<<endl; 
}