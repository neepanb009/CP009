#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 1; i < n; i++)
#define fr(j, n) for (lli j = 1; j < n; j++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;

using lli = long long int;
using ld = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli n;
    cin >> n;
    lli a,b;
    if (n== 1)
    {
        cout << "-1" << endl;
        
    }
    else
    {
        cout<<n-n%2<<" "<<2<<endl;
    }

    return 0;
}