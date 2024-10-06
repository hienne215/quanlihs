#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void uocso(int n) {
	for(int i=1; i<=n; i++) 
	{
	if (n%i==0 ) 
	{ cout <<i<<" " ;
	}
	}
	
}

int main () {
	int n; cin>>n;
	uocso(n);
	
	
}