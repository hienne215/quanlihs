#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n;cin>>n;
	int cnt;
	for (int i=1;i<=(sqrt(n));i++)
	if (n%i==0) {
		cnt+=2;
	}
	if (pow(int(sqrt(n)),2)==n)  
	  cnt-=1;
	  cout<<cnt;  
}