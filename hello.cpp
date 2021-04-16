#include<iostream>
using namespace std;

float add(float n1, int n2){
	float c;
	c = n1*(n2*n2);
	return c;
} 

void sub(){
	int n1,n2,c;
	cout<<"\n Enter two num";
	cin>>n1>>n2;
	c = n1 - n2;
	cout<<"\n"<<c;
}


int main()
{
	
	cout<<add(3.14, 5);
	
}
