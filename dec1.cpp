// //task for operator overloading
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
//         complex operator +(complex c){
//                 complex temp;
//                 temp.a= a+c.a;
//                 temp.b= b+c.b;
//                 return (temp);
//         }
// };
// int main(){
//     complex c1,c2,c3;
//     c1.setdata(8,9);
//     c2.setdata(9,5);
//     c3=c1.operator+(c2); 
//     c3.showdata();
//     return 0;
// }
//task for operator overloading
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
        complex operator *(complex c){
                complex temp;
                temp.a= a*c.a;
                temp.b= b*c.b;
                return (temp);
        }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(8,9);
    c2.setdata(9,5);
    c3=c1.operator*(c2); 
    c3.showdata();
    return 0;
}