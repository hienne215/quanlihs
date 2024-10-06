#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool check(int n)
{
    if(n % 2 == 0)
        return 1;
    else return 0;  
}
 
void demChanLe(int n, int a[]){
    int demChan = 0, demLe = 0;
    for(int i=0;i<n;i++)
    {
        if(check(a[i]) ==1 )
            demChan++;
        else demLe++;
    }
    cout<<demChan<<"\n";
    cout<<demLe;
}
int main() {
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++){
      cin >> a[i]; 
   }
    demChanLe(n,a);
}