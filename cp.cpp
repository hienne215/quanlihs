#include<bits/stdc++.h>
using namespace std;
int cp(int n) {
	int can =int(sqrt(n));
	if (can*can==n) {
		return 1;
	} 
	else {
		return 0;
	}
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
int n;cin>>n;
if (cp(n)) {
	cout<<"YES";
}
else {
	cout<<"NO";
  } 
}