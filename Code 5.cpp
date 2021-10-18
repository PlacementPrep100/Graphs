#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define ll long long
#define mod 1000000007LL
#define pb push_back
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"
#define inf 1LL<<60
void solve(){
   int t;
   cin>>t;
   while(t--)
   {
      ll n,m,k;
      cin>>n>>m>>k;
      bool ok=1;
      if(m<n-1)
      {
         ok=0;
         cout<<"NO\n";

      }
      else if(m>((n*(n-1LL))/2))
      {
         ok=0;
         cout<<"NO\n";
        // dbg('a');
      }
      else if(n==1 )
      {
         if(!(k>1))
         ok=0;
      if(ok)
      {
         cout<<"YES\n";
      }
      else
         cout<<"NO\n";
         //dbg('c');
      }
      else if( m<((n*(n-1LL))/2))
      {
         if(!(k>3))
            ok=0;
         if(ok)
      {
         cout<<"YES\n";
      }
      else
         cout<<"NO\n";
      //   dbg('d');
      }
      else if(!(k>2))
      {
         cout<<"NO\n";
      }
      else
      {
         cout<<"YES\n";
      }




      /*
       5
       8 2 0 1 1
       1 2 3 4 5


       0 1 1 2 8
       8 2 1 1 0
       1 2
       1 2
       1 4
       1 5

       4
       1 2 3 4
       1 2 3 4

       4 3 2 1
       4 3
       4 3
       4 3
       1 3YES
YES
YES
NO
NO
NO
NO
NO
NO
NO
NO
NO










      */




   }
}
int main() {

   solve();
   return 0;
}
