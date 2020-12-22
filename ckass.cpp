// #include <iostream>
// using namespace std;
// class set
// {
//     int m, n;

// public:
//     void input(void);
//     void display(void);
//     int largest(void);
// };
// int set::largest(void)
// {
//     if (m > n)
//         return m;
//     else
//         return n;
// }
// void set::input(void)
// {
//     cout <<"input values of m and n :";
//     cin >> m >> n;
// }
// void set::display(void)
// {
//     cout <<"largestvalue =" << largest() <<"\n";
// }
// main()
// {
//     set A;
//     A.input();
//     A.display();
//     return 0;
// }
c
// #include <iostream>
// using namespace std;
// class part
// {

//     private:
//         int modelnum, partnum;
//         float cost;

//     public:
//         void setpart(int mn, int pn, float e)
//         {
//             modelnum = mn;
//             partnum = pn;
//             cost = e;
//         }
//         void showpart()
//         {
//             cout << endl <<"model :"<< modelnum << endl;
//             cout <<"num :"<< partnum << endl;
//             cout <<"cost :"<<"$"<< cost;
//         }
// };
// main()
// {
//     part p1, p2;
//     p1.setpart(644, 73, 217.55);
//     p2.setpart(567, 89, 789.55);
//     p1.showpart();
//     p2.showpart();
//     return 0;
// }
// output:- model:644
// num:73
// cost: $217550003
// model: 567
// num:89
// cost: $759.549988

// #include <iostream>
// #include <conio.h>
// using namespace std;

// class abc
// {
//     private:
//         char nm[ ];

//     public:
//         abc()
//         {
//             cout <<"enter your name :";
//             cin >> nm;
//         }
//         void display()
//         {
//             cout << nm;
//         }
// };
// int main()
// {
//     abc d;
//     d.display();
//     getch();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class integer
// {
//     int m, n;

// public:
//     integer(int, int);
//     void display(void)
//     {
//         cout <<"m = :"<< m;
//         cout <<"n ="<< n;
//     }
// };
// integer ::integer(int x, int y) // constructor defined
// {
//     m = x;
//     n = y;
// }
// int main()
// {
//     integer int1(0, 100); // implicit call
//     integer int2 = int1;
//     cout <<" \nobjectl "<< endl;
//     int1.display();
//     cout <<" \n object2 "<< endl;
//     int2.display();
// }

// #include <iostream>
// #include <conio.h>
// #include<string.h>
// using namespace std;
// class abc
// {
// private:
//     char nm[30];
//     int age;

// public:
//     abc(){

//     } // default
//     abc(char x[], int y);
//     void get()
//     {
//         cout <<"enter your name :";
//         cin >> nm;
//         cout <<" enter your age :";
//         cin >> age;
//     }
//     void display()
//     {
//         cout << nm << endl;
//         cout<<age<<endl;
//     }
// };
// abc :: abc(char x[], int y)
// {
//     strcpy(nm, x);
//     age = y;
// }
// main()
// {
//     abc l;
//     abc m("computer", 43);
//     l.get();
//     l.display();
//     m.display();
//     return 0;
// // }

// #include <iostream>
// #include <conio.h>
// using namespace std;
// class sum
// {
//     private:
//         int a;
//         int b;
//         int c;
//         float d;
//         double e;

//     public:
//         sum()
//         {
//             cout <<"enter a"<<endl;
//             cin >> a;
//             cout <<"enter b"<<endl;
//             cin >> b;
//             cout <<"sum = "<< a + b << endl;
//         }
//         sum(int a, int b);
//         sum(int a, float d, double c);
// };
// sum ::sum(int x, int y)
// {
//     a = x;
//     b = y;
//     cout <<"sum = "<< a + b << endl;
// }
// sum ::sum(int p, float q, double r)
// {
//     a = p;
//     b = q;
//     e = r;
//     cout <<"sum = "<< a + b + e << endl;
// }
// main()
// {
//     sum l;
//     sum m(20, 50);
//     sum n(3, 3.22, 4.55);
//     return 0;
// }

#include <iostream>
using namespace std;
class code
{
    int id;
    public :
        code() {

        }               //constructor
        code(int a) {
             id = a;
         } //constructor
        code(code &x)
        {
            id = x.id;
        }
        void display()
        {
            cout << id<<endl;
        }
};
int main()
{
    code A(100);
    code B(A);
    code C = A;
    code D;
    D = A;
    cout <<" \n id of A :"<<endl;
    A.display();
    cout <<"\nid of B :"<<endl;
    B.display();
    cout <<"\n id of C :"<<endl;
    C.display();
    cout <<" \n id of D :";
    D.display();
}