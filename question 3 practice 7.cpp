#include <iostream>
int main() { 
int n;
std::cout << "enter a positive integer:";
std::cin>>n;
int sum=0;
for(int i =1;i<=n;i++) { 
if(n%i==0) { 
sum+=i;
}
} 
std::cout<<"the sum of all divisors of"<<n<<"is:"<<sum<<std::endl;
return 0;
}