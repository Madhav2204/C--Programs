// generic programming 
//template specialization in continue  
#include<iostream>
using namespace std;
template<class T> // template declaration
class ct // class declaration
{
    T a,b; //data members
    public : 
        ct(T x, T y)
        {
            a = x;
            b = y;
        }
        T getmax(); // declaration of member function
};
template<class T>
T ct <T>:: getmax(){
    T temp;
    temp = a>b?a:b;
    return temp;
};
int main()
{   
    ct<int>obj(100, 75);
    cout<< obj.getmax()<<endl;
    ct<float>obj1(100.2, 45.5);
    cout<<obj1.getmax();
    
    return 0;
}
// class template program
// template<class T> // template declaration
// class ct // class declaration
// {
//     T a,b; //data members
//     public : 
//         ct(T x, T y)
//         {
//             a = x;
//             b = y;
//         }
//         T getmax(); // declaration of member function
// };
// template<class T>
// T ct <T>:: getmax(){
//     T temp;
//     temp = a>b?a:b;
//     return temp;
// };
// int main()
// {   
//     ct<int>obj(100, 75);
//     cout<< obj.getmax()<<endl;
//     ct<float>obj1(100.2, 45.5);
//     cout<<obj1.getmax();
    
//     return 0;
// }