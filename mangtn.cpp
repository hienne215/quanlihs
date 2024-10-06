#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool tn(int n) {
   int rev = 0, tmp = n;
   while (n != 0) {
      rev = rev * 10 + n % 10;
      n /= 10;
   }
   return rev == tmp;
}
int soThuanNghich(int a[], int n) {
   int dem = 0;
   for (int i = 0; i < n; i++) {
      if (tn(a[i])) 
         dem++;
   }
   return dem;
}

int main() {
   int n; 
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i]; 
   }
   cout << soThuanNghich(a, n) << endl;
   for (int i = 0; i < n; i++) {
   	if (tn(a[i])) 
   	cout<<a[i] <<" ";
   }
   return 0;
}