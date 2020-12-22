// lab thursday 1st oct.

//program-1

//#include <iostream>
//using namespace std;
//
//int add(int a, int b)
//{
//   return a + b;
//}
//
//float add(float a, float b, float c)
//{
//   return a + b + c;
//}
//
//int main(void)
//{
//   int additionInt;
//   float additionFloat;
//   additionInt = add(200, 90);
//   additionFloat = add(81.76, 100, 10.65);
//
//   cout << "The addition of intergers : " << additionInt << endl;
//   cout << "The addtion of floats : " << additionFloat;
//   return 0;
//}

#include <iostream>
using namespace std;

class book
{
public:
   int bookid;
   int pages;
   float cost;
   void setDetails();
   void getDetails();
};
void book ::setDetails()
{
   cout << "enter bookid=";
   cin >> bookid;
   cout << "enter pages=";
   cin >> pages;
   cout << "enter cost=";
   cin >> cost;
}
void book ::getDetails()
{
   cout << "The book id is : " << bookid << endl;
   cout << "The number of pages is :" << pages << endl;
   cout << "The cost of book is :" << cost << endl;
}

int main()
{

   book b1, b2;
   b1.setDetails();
   b2.setDetails();
   b1.getDetails();
   b2.getDetails();
   return 0;
}
