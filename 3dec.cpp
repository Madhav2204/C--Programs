//generic prgramming 
// function template

#include<iostream>
using namespace std;
template<class x>
x big(x a, x b)
{
    if(a>b){
        return(a);
 }
    else
    {
        return(b);
    }
    
}
int main()
{   
    cout<<big(4, 5)<<endl;
    cout<<big(4.6,6.5);
    return 0;
}