#include <iostream>
void calculater_remainder_and_quotient(int m,int n,int&quotient,int&remainder) {
	quotient=0;
	remainder=0;
	if (n==0) { 
	std::cout<<"error:division by zero"<<std::endl;
	} else {
		while(m>=n) { 
		m-=n;
		quotient+=1;
		}
		remainder=m;
	}
	}
int main() { 
int n,m;
std::cout<<"enter a positive integer for n:";
std::cin>>n;
std::cout<<"enter a positive integer for m:";
std::cin>>m;
int quotient,remainder;
calculater_remainder_and_quotient(m,n,quotient,remainder) ;
std::cout<<"quotient:"<<quotient<<std::endl;
std::cout<<"remainder:"<<remainder<<std::endl;
return 0;
}