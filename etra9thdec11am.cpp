// virtual function  and polymorphism 
#include<iostream>
using namespace std;

class base {
    public:
    virtual void print(){
        cout<<"virtual function base class";
    }
    void show(){
        cout<<"non virtual func base class";
    }
};
class derived : public base{
    public:
      void print(){
          cout<<"print function of derived class ";
      }
      void show(){
          cout<<"show derived class";
      }
};
int main()
{
    base *bptr;   
    /* if we defineobjects while writin  program  or at compile time called static binding and when we define
       object on run time or dynamically it is called dynamic binding  (we make pointer for class in this case)
    */
   derived d;
   bptr = &d;
   //late binding oprator(->)
   // calling virtual function
    bptr->print();
    
    bptr->show();
    // calling non virtual funcction
    return 0;
}