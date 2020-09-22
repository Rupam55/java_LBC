#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// getline(cin, str); 

ll inf = 1e18;
ll mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin>>s1>>s2;

    map<char,int>mp1;
    map<char,int>mp2;
    for(auto it : s1)
        mp1[it]++;
    
    for(auto it : s2)
        mp2[it]++;

    

    for(auto it : mp1){
        int mini = min(mp2[it.first],it.second);
        mp2[it.first]-=mini;
        mp1[it.first]-=mini; 
    }
    int ans;
    for(auto it : mp1){
        ans+=it.second;
    }
    for(auto it : mp2){
        ans+=it.second;
    }
    cout<<ans;
    return 0;
}