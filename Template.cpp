#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(),x.end()
#define MOD 1000000007
#define N 1000000
#define deb(x) cout<< #x <<" = "<<x    
bool prime[N+1];
void SieveOfEratosthenes()
{
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=N;p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p;i<=N;i=i+p)
            {
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<=N;i++)
    {
        if(prime[i]==true)
        cout<<i<<" ";
    }
}
ll int power(ll int x,ll int y)
{
    int res = 1;
    x=x%MOD; 
    if(x==0) return 0; 
    while(y>0)
    {
        if(y&1)
            res=(res*x)%MOD;
 
        y=y/2;
        x=(x*x)%MOD;
    }
    return res;
}
void solve()
{
 int z=222;
 
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }
}
