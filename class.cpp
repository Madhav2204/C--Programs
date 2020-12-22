#include<iostream>
using namespace std;
class person
{
char name[30];
int age;
public:
void getdata(void);
void display(void);
};
void person ::getdata()
{
cout<<"enter name"<<endl;
cin >> name ;
cout<<"enter age"<<endl;
cin>>age;
}
void person ::display()
{
cout<<"name:"<<name<<endl;
cout<<"age:"<<age<<endl;
}
int main()
{
person p;
p.getdata();
p.display();
return 0;
}