using namespace std;
#include <bits/stdc++.h>
#include <map>
#include<stdio.h>
#include<string.h>
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define eps 1e-9
typedef long long ll;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define FOR(i, a,b) for(int i= a; i< b ; i++)
#define FORD(i, b,a) for(int i= b; i > a ; i--)
#define DEBUG(x) cout<<#x<<" = "<<x<<"\n";
#define MAXN  100000000000000000

int main() {
    int n, t; 
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int mx = -1, mn = 100;
        while(n--){
            int x;
            scanf("%d", &x);
            mn = min(mn , x);
            mx = max(mx , x);
        }
        printf("%d\n", 2*(mx - mn));
    }
}