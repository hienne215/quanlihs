#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void inDongSao(int n,int m) {
 for(int i=0;i<n;i++) {
 	for (int j=0;j<n;j++) {
	  if(j%2==0) 
	   cout<<"* ";
	  else
	   cout<<"+ "; 
	 }
     cout<<endl;
    }
  }   

int main () {
	int n;cin>>n;
	int m;cin>>m;
	inDongSao(n,m);
	return 0;
}