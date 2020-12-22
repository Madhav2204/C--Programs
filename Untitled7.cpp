#include<iostream>
using namespace std;

int main()
{
	int z=24;
	int p=66;
	
	int *adr=&z;
	
	
	int* const&adr_ref=adr;
	
	
	*adr_ref=200;
	cout<<*adr;
	return 0;
}
