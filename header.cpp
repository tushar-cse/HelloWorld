/*****************************************************
*   Tushar Roy, Dept. of CSE                         *
*   Bangladesh University of Business & Technology   *
*   E-mail : tushar.tusher@gmail.com                 *
*****************************************************/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <cctype>
#include <bitset>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <list>
#include <deque>
#include <stack>
#include <limits>
#include <memory>
#include <cfloat>
#include <sstream>
#include <utility>
#include <numeric>
#include <iterator>
#include <algorithm>
using namespace std;

#define sc scanf
#define pf printf
#define pb push_back
#define pob pop_back
#define PI 2*acos(0.0)
#define NL printf("\n")
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define fr0(i,n) for(i=0;i<n;i++)
#define frp(i,a,b) for(i=a;i<=b;i++)
#define frn(i,a,b) for(i=a;i>=b;i--)
#define CLR(a) memset(a,0,sizeof(a))
#define mem(a,b) memset(a,b,sizeof(a))
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)

template<class T>T POW(T b,T p) { if(!p) return 1; T res=(POW(b,p/2)); res=(res*res); if(p&1) res=(res*b); return res; }
template<class T>T bigmod(T b,T p,T m) { if(!p) return 1; T res=(bigmod(b,p/2,m))%m; res=(res*res)%m; if(p&1) res=(res*b)%m; return res%m; }
template<class T>T modinv(T b,T m) { return bigmod(b,m-2,m); }
double dist(double x1, double y1, double x2, double y2) { return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)); }

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> pii;
const LL INF = 1<<30;
const LL MOD = 1000000007;
const int MAX = 1000005;
const int sz = 100005;

int main()
{
    LL n;
    cin >> n;
    cout << n << endl;
    return 0;
}
