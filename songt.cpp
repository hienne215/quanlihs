#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void dayso(int n) {
	if (n < 0) {
		n *= -1;
	} 

	int i = 2;
	while (n != 1) {
		if (n % i == 0) {
			cout << i;
			if (n != i) {
				cout << " ";
			}
			else {
				cout << endl;
			}
			n /= i;
		}
		else {
			i++;
		}
	} 
}
int main () {
	int n; cin>>n;
	dayso(n);
}