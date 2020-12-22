#include<iostream>
using namespace std;

int main()
{
	int x=25;
	int *ctr_x=&x;
	int *&ctr_ref=ctr_x;
	cout<< *ctr_ref;
	return 0;
	
}
