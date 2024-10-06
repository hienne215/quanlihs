#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
float tbc(int n,int a[] ) {
	int tong=0;
	for(int i=0 ;i<n;i++) {
	 tong+=a[i];
	} return (float) tong/n;
}
int main() {
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++){
      cin >> a[i]; 
    }
    cout << fixed << setprecision(2) << tbc(n,a);
}