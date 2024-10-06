#include <iostream>
using namespace std;
void swap_with_pointer(long *num1, long *num2){
	long temp = *num1;
	*num1= *num2;
	*num2= temp; 
}
main (){
   
  long  a,b;
  cout<<"Nhap gia tri a,b";
  cin>>a>>b;
  swap_with_pointer(&a, &b);
  cout << a<< "|"<<b;   	
	
	
}