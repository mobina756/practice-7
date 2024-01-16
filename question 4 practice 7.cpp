#include <iostream>
using namespace std;
int gcd (int a,int b) { 
if (b==0) 
return a;
return gcd(b,a%b); 
} 
int main() { 
int n,m;
cout<<"enter two positive integers:";
cin>>n>>m;
cout<<"gcd of"<<n<<"and"<<m<<"is:"<< gcd(n,m) <<endl;
return 0 ;

}