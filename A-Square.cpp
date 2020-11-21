#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
 
typedef long long int ll;
typedef unsigned long long int ull;
        
#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
#define inf 1e9
 
#define fo(n, i) for(ll i=0; i<n; i++)
 
#define vi vector <int>
#define pp pair <int, int>
#define mi map <int,int>
#define vi vector <int>
#define sti stack <int>
#define qui queue <int>
#define stc stack <char>
#define quc queue <char>
#define pb push_back
#define mp make_pair
#define in insert
#define f first
#define s second
 
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
using namespace std;

ll hcf(ll a, ll b) 
{ 
    while (a != b) { 
        if (a > b)         
            a = a - b;         
        else        
            b = b - a;         
    } 
    return a;
}

bool isPowerOfTwo(int n) 
{ 
    return (ceil(log2(n)) == floor(log2(n))); 
}

void solve()
{
    int n, a, b, c, d;
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c >> d;
        if(a==c && b+d==c)
            cout << "YES\n";
        else if(b==c && a+d==c)
            cout << "YES\n";
        else if(a==d && b+c==d)
            cout << "YES\n";
        else if(b==d && a+c==d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r",stdin);
    freopen("Output.txt", "w",stdout);
#endif
    
    fast;
    solve();
    return 0;
}
