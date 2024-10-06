#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int UCLN(int a,int b) {
		while (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		} return a;
	}
int BCNN(int a,int b) {
	int kq=UCLN(a,b);
	return a*b /kq;
}	
int main() {
	int a;cin>>a;
	int b;cin>>b;
		cout <<UCLN(a,b)<< endl;
		cout <<BCNN(a,b)<< endl;
}