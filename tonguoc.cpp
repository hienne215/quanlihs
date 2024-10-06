#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int tonguoc(int n) {
	int sum=0;
	for (int i=1; i<=sqrt(n); i++) {
		if(n%i==0) {
			sum+=i;
			if(n/i!=i) {
				sum +=n/i;
			}
					}
	} return sum;
	
}
int main () {
	int n;cin>>n;
	cout<<tonguoc(n);
	return 0;
}