#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sodao(int n) {
	int ndao=0, songuyen;
	while (n!=0) {
		songuyen=n%10;
		ndao= (ndao*10) + songuyen;
		n=n/10;
	} return ndao;
}
bool sodoixung(int n) {
	if(n==sodao(n))
	  return true;
	else
	  return false;  
	}
	
int main () {
	int n;cin>>n;
    if(sodoixung(n))
      cout<<"YES";
    else 
      cout<<"NO";
    return 0;    
}