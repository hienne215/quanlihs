#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool sohoanhao(long long tong, int n ) {
	if (tong==n*2) {
		return true;}
	 else {
		return false;}
}
int main () {
	int n;
	cin>>n;
	long long tong=0;
	
	for (int i=1; i<= sqrt(n);i++) {
		if (n%i == 0) {
			tong += i;
			if (n/i!=i) {
				tong +=n/i;
			
			}
	}
} if (sohoanhao(tong,n)==1) cout <<"YES";
else
cout <<"NO";	

}
