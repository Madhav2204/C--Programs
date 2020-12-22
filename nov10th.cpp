/*
que1 wap to demostrate  primitive  to class
classs area
rectantangle 
*/
#include <iostream>
using namespace std;

class A
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
        cout << "a=" << a <<endl;
        cout<< "b=" << b<<endl;;
    }friend void B(A c);
};
void B(A c)
{
    cout << "product of a and b is :" << c.a * c.b;
}

int main()
{

    A c1;
    c1.setdata(20, 10);
    c1.showdata();
    B(c1);

    return 0;
}

// class area
// {

// public:
//     int length, breadth;
//     area()
//     {
//         length = 0;
//         breadth = 0;
//     }
//     area(int len)
//     {
//         length = len;
//         breadth = 0;
//     }
//     void setdata()
//     {
//         cout << "Enter the value of length and breadth" << endl;
//         cin >> length;
//         cin >> breadth;
//     }
//     void getdata()
//     {
//         cout << "length :" << length << endl
//              << "breadth :" << breadth << endl;
//     }
// };
// int main()
// {
//     area ar;
//     int x = 20;
//     ar = x;
//     ar.setdata();
//     ar.getdata();

//     return 0;
// }

/*
que2demostrate class to primive type by considering
area 
l b
getdata and setdata#include <iostream>
using namespace std;*/
// que2

// #include<iostream>
// using namespace std;

// class area
// {
// private:
//     int length, breadth;

// public:
//     void setdata(int len, int brd)
//     {
//         length= len;
//         breadth = brd;
//     }
//     void getdata()
//     {
//         cout << "Length :"<< length <<endl<< "breadth:" << breadth<<endl;
//     }
//     operator int()// casting operator
//     {
//         return (length*breadth);
//     }
// };
// int main()
// {
//     area rect;
//     rect.setdata(45,87);
//     rect.getdata();
//     int ar;
//     ar = rect;
//     cout<<"ar : "<< ar <<endl;
//     return 0;
// }
