
/* with operator overloading*/
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
       void setdata(int x, int y){
           a=x;
           b=y;
       }
        void showdata(){
            cout << "\na="<<a<<"\nb="<<b;

        }
        complex operator +(complex c){
                complex temp;
                temp.a= a+c.a;
                temp.b= b+c.b;
                return (temp);
        }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(7,8);
    c3=c1.operator+(c2);   // we can also do  :  -->     c3=c1+c2 ;
    c3.showdata();
    return 0;
}

/* without operator overloading*/
// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:
//        void setdata(int x, int y){
//            a=x;
//            b=y;
//        }
//         void showdata(){
//             cout << "\na="<<a<<"\nb="<<b;

//         }
//         complex add(complex c){
//                 complex temp;
//                 temp.a= a+c.a;
//                 temp.b= b+c.b;
//                 return (temp);
//         }
// };
// int main(){
//     complex c1,c2,c3;
//     c1.setdata(3,4);
//     c2.setdata(7,8);
//     c3=c1.add(c2);
//     c3.showdata();
//     return 0;
//}