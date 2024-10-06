#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool ngTo(int n) {
	
    if (n<2) {
        return false;
     } 
     int i;
     for(i=2; i<=sqrt(n);i++ ) {
         if (n%i==0 ) { 
         return false;   
         }
    else
      return true;     
}
    
}
bool snto(int n) {
	while (n!=0) {
		if (ngTo(n%10)==0) return false;
		n/=10;
	}
		return true;
	 }
	     
	
int main() {
    int a, b;
    cin>>a;cin>>b;
        int i;
        for(i = a; i <= b; i++) {
            if(ngTo(i)&&snto(i)) {
			
            cout<<i<<" ";
}
}
    return 0;
}
