#include<iostream>
using namespace std;

class Integer{
    int a,b;
    public:
       void setdata(int x, int y){
           a=x;
           b=y;
       }
        void showdata(){
            cout << "\na="<<a<<"\nb="<<b;

        }
        Integer operator -(Integer c){
                Integer temp;
                temp.a= a-c.a;
                temp.b= b-c.b;
                return (temp);
        }
};
int main(){
    Integer c1,c2,c3;
    c1.setdata(60,90);
    c2.setdata(50,50);
    c3=c1.operator-(c2); 
    c3.showdata();
    return 0;
}


