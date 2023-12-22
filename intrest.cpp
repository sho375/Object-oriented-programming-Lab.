#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int p,i,n,an_rate,pay;
	cout<<"p"<<endl
	<<"n"<<endl
	<<"an_rate"<<endl
	<<"pay"<<endl;
	cin>>p>>n>>an_rate;
	i=an_rate/12;
	p=i*p/(1-pow(1+i,-n));
	cout<<"result"<<pay;
	return 0;
}