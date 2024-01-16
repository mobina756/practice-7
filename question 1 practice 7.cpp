#include <iostream>
using namespace std;
int main() {
	int n,m; 
	long long result=1;
	cout<<"enter the base (m):";
	cin>>m;
	cout<<"enter the exponent(n):";
	cin>>n;
	if(n<0) {
		cout<<"exponent should be a non-negetive integer,"<<endl;
	} else{ 
	for( int i=0; i<n;i++) {
	result*=m;
	} 
	cout<<m<<"raised to the power of"<<n<<"is:"<<result<<endl;
} 
return 0;
}