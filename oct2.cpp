//
//#include<iostream>
//
//using namespace std;
//
//class book{
//	public:
//	       int bookid=555987;
//	       int pages;
//	       float cost=456;
//	
//void setDetails(){
//	cout<<"bookid="<<bookid;
//	cout<<"cost="<<cost;
//}
//void getDetails(){
//		cout<<"enter bookid";
//		cin>>bookid;
//		cin>>cost;
//		
//}
//};
//
//int main()
//{
//	book b1;
//	b1.getDetails();
//	b1.setDetails();
//	return 0;
//}




#include<iostream>

using namespace std;

class book{
	public:
	    int bookid;
	    int pages;
	    float cost;
	
        void setDetails(void){
	       cin>>bookid;
	       cin>>pages;
	       cin>>cost;
}
void getDetails(void){
		cout<<"enter bookid"<<bookid<<endl;
		cout<<"pages="<<pages<<endl;
		cout<<"cost="<<cost<<endl;
}
};

int main()
{
	book b1,b2;
		b1.setDetails();
	    b1.getDetails();
        b2.setDetails();
	    b2.getDetails();
	return 0;
}







































