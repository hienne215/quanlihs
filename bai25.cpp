#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,tong,hieu,tich;
	double thuong;
	cout<<"Nhap so nguyen a";
	cin>>a;
	cout<<"Nhap so nguyen b";
	cin>>b;
	tong= a+b;
	hieu=a-b;
	tich=a*b;
	thuong=(double)a/b;
	cout<<"Tong la "<<tong<<endl;
	cout<<"Hieu la "<<hieu<<endl;
	cout<<"Tich la "<<tich<<endl;
	cout<<"Thuong la "<<setprecision(2)<<fixed<<thuong<<endl;
	return 0;
}