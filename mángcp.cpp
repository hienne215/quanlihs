#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
bool ktscp ( int n ) {
    int cann = (int) sqrt(n) ;
    return cann * cann == n ;
}
//int stn(int a[], int n) {
//	int dem = 0;
//	for(int i=0;i<n;i++) {
//		if (stn(a[i])) 
//		    dem++;
//	} 
//	return dem;
//}
int main () {
	int n;cin>>n;
	int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i]; 
   } 
    for(int i=0; i<n; i++) {
   	if (ktscp(a[i])) 
   		cout<<a[i]<<" ";
	   }
    return 0;
} 