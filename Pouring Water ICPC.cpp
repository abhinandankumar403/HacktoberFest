#include <bits/stdc++.h>
#define GREEN "\033[32m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"
#define all(x) begin(x),end(x)
#define sz(x) (int)(x).size()
using namespace std;
#ifdef BCDBG
#define tcT template<typename T
tcT,typename U> ostream& operator<<(ostream& os,const pair<T,U>& p) {return os<<"("<<p.first<<", "<<p.second<<")";}
tcT,typename U=typename enable_if<!is_same<T,string>::value,typename T::value_type>::type> ostream& operator<<(ostream &os,const T &v)
{os<<"\n{";string sep;for(const U &x:v)os<<sep<<x,sep=", ";return os<<'}';}
void debug_help() {cout<<RESET<<endl;}
tcT,typename... U> void debug_help(T t,U... u) {cout<<t;if(sizeof...(u))cout<<", ";debug_help(u...);}
int debug_dms[10],debug_md;
void debug_fill() {}
tcT,typename... U> void debug_fill(T t,U... u) {debug_dms[debug_md++]=t;debug_fill(u...);}
tcT> void debug_arr(T x,int d) {cout<<x;}
tcT> void debug_arr(T* arr,int d)
{cout<<"\n{";string sep;for(int i=0;i<debug_dms[d];i++)cout<<sep,sep=", ",debug_arr(arr[i],d+1);cout<<'}';if(d==0)cout<<RESET<<endl;}
#define dbg(...) cout<<MAGENTA<<__LINE__<<" ["<<#__VA_ARGS__<<"]: "<<GREEN,debug_help(__VA_ARGS__)
#define dba(arr,...) cout<<MAGENTA<<__LINE__<<" ["<<#arr<<"]: "<<GREEN,debug_md=0,debug_fill(__VA_ARGS__),debug_arr(arr,0)
#else
#define dbg(...)
#define dba(arr,...)
#endif
typedef long long ll;
typedef unsigned long long ull;
const char df = '\n';
int go(int A, int B, int c) {
  int ct = 1, a = A, b = 0;
  while (a != c && b != c) {
    if (a == 0) {
      a = A;
      ct++;
    } else if (b == B) {
      b = 0;
      ct++;
    } else {
      int m = min(B - b, a);
      a -= m;
      b += m;
      ct++;
    }
  }
  return ct;
}
void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (c % __gcd(a, b) || (c > a && c > b)) {
    cout << -1 << df;
    return;
  }
  cout << min(go(a, b, c), go(b, a, c)) << df;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  for (int i = 1; i <= tt; i++) {
    solve();
  }
  return 0;
}
Python
import math