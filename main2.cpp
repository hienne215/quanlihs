#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool so_nguyen_to (long long n){
	  if (n<2) return false;
	  for (int i=2; i<=sqrt(n);i++){
	  	
	  	if (n%i ==0) return false;
	  } return true;
}
   int main(){
   	int a; cin>> a;
   	if (so_nguyen_to(a)) cout <<"Yes";
   	else cout<< "NO";
   	return 0;
   }