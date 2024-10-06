#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//int  lonn(int a[],int n) {
//	int lonn=a[0];
//	for (int i=1;i<n;i++) {
//		if (lonn<a[i]) {
//			lonn=a[i];
//		}
//	} return lonn;
//}
int nhon(int a[], int n ) {
	int nhon=a[0] ;
	for(int i=1; i<n;i++) {
		nhon=min(nhon,a[i]);
	} 
	return nhon;
}
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	} 
	cout<<(nhon(a,n));
	return 0;
} 