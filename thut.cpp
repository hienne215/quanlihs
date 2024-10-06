#include<bits/stdc++.h>
using namespace std;
int main() { 
int a, b, c; 
 cout << "Nhap 3 so a, b, c : "; cin >> a >> b >> c; 

 cout << "MAX = " << (a>b ? (a>c ? a : c) : (b>c ? b : c)); 
 cout << "MIN = " << (a<b ? (a<c ? a : c) : (b<c ? b : c)); 

}