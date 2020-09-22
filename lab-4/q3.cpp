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

    int t;
    cin>>t;
    while(t--){
        string s,s2;
        cin>>s;
        s2 = string(s.rbegin(),s.rend());
        int ans1=0,ans2=0;
        bool flag = true;
        for(int i =1; i<s.length();i++){
            ans1 = abs(s[i]-s[i-1]);
            ans2 = abs(s2[i]-s2[i-1]);
            if(ans1 != ans2){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Funny";
            nl
        }else{
            cout<<"Not Funny";
            nl
        }
    }
    return 0;
}