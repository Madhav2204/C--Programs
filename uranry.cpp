#include <iostream>
using namespace std;
class Complex
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
        cout << "a=" << a <<endl<< "b=" << b<<endl;
    }

    Complex operator-()

    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return (temp);
    }
};
int main()
{
    Complex c1, c2;
    c1.setdata(30, -40); // set data from this function
    c2 = c1.operator-();   // operator of negation
    c2.showdata(); // function to display data
    return 0;
}
