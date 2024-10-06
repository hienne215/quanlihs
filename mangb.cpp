#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void maxVaViTri(int n, int a[]) {
     int max=a[0] ;
     int viTri=0;
     for (int i=1;i<n;i++) {
     	if (max<a[i]) {
     	   max=a[i];
     	   viTri=i;
		 }
	 } 
	 cout<<max<<" "<< viTri;
}   
void minVaViTri(int n, int a[]) {
     int min=a[0] ;
     int viTri=0;
     for (int i=1;i<n;i++) {
     	if (min>a[i]) {
     	   min=a[i];
     	   viTri=i;
		 }
	 } 
	 cout<<min<<" "<< viTri;
}   
int main () {
	 int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++){
      cin >> a[i]; 
    } 
    maxVaViTri(n,a);
    cout<<"\n";
    minVaViTri(n,a);
}