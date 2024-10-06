#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int ktscp ( int N ) {
    int canN = (int) sqrt(N) ;
    return canN * canN == N ;
}
int main() {
    int N;
    cin>>N;
    if (ktscp(N)) cout<<"YES";
    else cout <<"NO";
    return 0;
    
}