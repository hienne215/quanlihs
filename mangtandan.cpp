#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool tangDan(int a[], int n) {
	for(int i=0;i<n-1;i++) {
       if(a[i]>=a[i+1]) 
          return false;	
   }
		   return true;    
}
int main() {
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++){
      cin >> a[i]; 
   } 
   if (tangDan(a,n)) {
   	cout<<"YES ";
   } else {
   	cout<<"NO ";
   }
}
