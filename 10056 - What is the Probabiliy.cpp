/*
//Author : Rezwanul Islam Maruf
//AUST ,CSE
//25-th batch..
*/

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <string>
#include <string.h>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <list>
#include <cstdlib>
#include <sstream>

#define FOR(i,j,n) for(i=j;i<=n;i++)
#define REP(i,n) for(i=0;i<n;i++)
#define init(i,a,n) for(i=0;i<n;i++)a[i]=i
#define inf 9999999
#define ms0(a) memset(a,0,sizeof(a))
#define msn(a,n) memset(a,n,sizeof(a))
#define i64  long long
#define u64 unsigned long long
#define DB double
#define LD long double
#define eps 1e-10
#define SQR(x) ((x)*(x))
#define pb push_back
#define all(x) sort(x.begin(),x.end())
#define II ({int a; scanf(" %d", &a); a;})
#define SS(s) scanf("%s",&s)
#define DD ({DB a; scanf(" %lf", &a); a;})
#define LL  ({i64  a; scanf(" %lld", &a); a;})
#define LU  ({u64  a; scanf(" %llu", &a); a;})
#define CS printf("Case %d: ",cs++)
#define PI 3.1415926535897932384626433832795
#define NP next_permutation
#define PP prev_permutation
#define mp make_pair
#define PII pair <int , int>


#define FRD freopen("in.txt", "r", stdin)
#define FWR freopen("out.txt", "w", stdout)



int aComp(const void * a, const void * b){return (*(int*)a-*(int*)b );}
int dComp(const void * a, const void * b){return (*(int*)b-*(int*)a );}
//qsort (array,size, sizeof(int), aComp);


//Debugger
#define debug_matrix(mat,row,col)for(int i=0;i<row;i++){for(int j=0;j<col;j++) cout<<mat[i][j]<<" ";cout<<endl;}
#define debug_val(x) cout<<x<<endl
#define debug_arr(x,n){for(int i=0;i<=n;i++){if(i)cout<<" ";cout<<x[i];}cout<<endl;}
//

using namespace std;

int main()
{
  int t=II,n,k;
  DB p,ans;
  while(t--)
  {
      n=II,p=DD,k=II;
      (p==0) ? ans=0 : ans=p*pow(1-p,k-1)/(1-pow(1-p,n));
      printf("%.4lf\n",ans);
  }
  return 0;
}
