#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool sochan(int n) {
	if (n%2==0) {
		return true;
	}
	else
	return false;
}


int main() {
	int n;
	cin>>n;
	if (sochan(n)) cout <<"Yes";
	else
	cout<<"no";
	return 0;
	
	
	
}