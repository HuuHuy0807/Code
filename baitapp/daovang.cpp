#include <iostream>
#include <math.h>
 
using namespace std;
 
int a[1001][1001],f[1001][1001];
 
int main()
{
	int n,m;
	 cin>>n>>m;
   for (int i=1;i<=n;i++)
      for (int j=1;j<=n;j++)
	  {
	  	cin>>a[i][j];
	  	f[i][j]=0;
	  	f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a[i][j];
		  }	
//Optimize 
int ans=0;
	for (int i=m;i<=n;i++)
	   for (int j=m;j<=n;j++)
	      ans=max(ans,f[i][j]-f[i][j-m]-f[i-m][j]+f[i-m][j-m]);
	cout<<ans;
}