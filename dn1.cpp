#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int soUoc(int n) {
	int dem=0;
    for (int i=1;i<=n;i++) 
	if (n%i==0) {
		dem++; 
	}	
	return dem;
}
int main () {
	int n;cin>>n;
	cout<<(soUoc(n));	
	return 0;
}