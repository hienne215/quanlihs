#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int tongcacchuso(int n) {
	int sum = 0;
	while (n!=0 ){
		int r= n%10;
		sum += r;
		n/=10; 
	}
   return sum;	
}
int main() {
	int n;
	cin>>n;
	cout<<"tong la"<<tongcacchuso(n);
	
	
}