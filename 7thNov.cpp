// //Program for type conversion Primitive to class
// #include <iostream>
// using namespace std;

// class complex
// {
// private:
//     int a, b;

// public:
//     complex()
//     {
//     }
//     complex(int k)
//     {
//         a = k;
//         b = 0;
//     }
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << "a :" << a << "b :" << b;
//     }
// };
// int main()
// {
//     complex c1;
//     int x = 5;
//     c1 = x;
//     c1.showdata();

//     return 0;
// }


//Program for type conversion- class to primitive
#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a :"<< a  <<endl<< "b :" << b<<endl;
    }
    operator int()// casting operator
    {
        return (a);
    }
};
int main()
{
    complex c1;
    c1.setdata(3,4);
    c1.showdata();
    int x;
    x=c1;
    cout<<"x:"<<x;
    return 0;
}