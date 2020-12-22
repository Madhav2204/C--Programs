// thrusday oops 4:00 to 4:45 pm - 19/09/2020


#include<iostream>
using namespace std;
namespace myspace
{
	int num; // varialble declaration 
	void function_1();     // function declaration 
	class space
	{
		public:
			void function_2()  // member function of class gj
			{
				cout<<"hey kamal\n";
			}
	};
void function_1()
{
	cout<<"I am rohan";
	
}
	
}

//using namespace myspace; or 
using namespace myspace;
int main()
{
	num=5;  //(object resolution operator) this for declaration of namespace
	space obj;
	obj.function_2();
	function_1();
	
}




