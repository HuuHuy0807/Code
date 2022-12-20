#include <iostream>
#include "bits/stdc++.h"
 
using namespace std;
int main(){
	int n,k=0,a[101];
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i];
	  sort(a+1, a+n+1);
	     for (int i=1;i<=n;i++)
	        if (k<=a[i]) k++;
	    cout<<k;	        	
}