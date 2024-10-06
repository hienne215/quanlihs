#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int UCLN(int a, int b) {
	while(b!=0) {
		int r=a%b;
		a=b;
		b=r;
	} 
	return a;
}
int uccm(int a[],int n) {
	int uccm=UCLN(a[0],a[1]);
	for(int i=1;i<n;i++) {
	uccm=UCLN(uccm,a[i]);	
	} return uccm;
}
int main () {
	int n;cin>>n;
	int a[n];
	for (int i = 0; i < n; i++) {
      cin >> a[i]; 
   } 
   cout<<(uccm(a,n));
}
