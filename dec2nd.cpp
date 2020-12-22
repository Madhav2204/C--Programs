//overiding

// #include<iostream>
// using namespace std;

// class A {
//     public:
//     void display(){
//         cout<<"hello base class"<<endl;
//     }
//     void show(){
//         cout<<"show()";
//     }
// };

// class B : public A {
//     void display(){
//         cout<<"Hello derived class";
//     }

// };
// int main()
// {
//     B o;
//     A &a =o;
//     a.display();
//     a.show();   
//     return 0;
// }// it will call function of base class A and in inherited class display function is not overidden

/*
#include<iostream>
using namespace std;

class A {
    public:
    void virtual  display(){
        cout<<"hello base class"<<endl;
    }
    void show(){
        cout<<"show()";
    }
};

class B : public A {
    void display(){
        cout<<"Hello derived class";
    }

};
int main()
{
    B o;
    A &a =o;
    a.display();
    a.show();   
    return 0;
}*/
// getdata and setdata 
// derived class show data virtual



// #include<iostream>
// using namespace std;

// class Base{
//     public:
//     int value ;
//     public:
//     void setdata(int i){
//         value = i;
//     }
//     void virtual getdata(){
//         cout<< "Assigned value is "<<value<<endl;
//     }
// };

// class Derived : public Base {
//     int a;
//     public:
//     void getdata(){
//         cout<<"Assigned value in derived class"<<endl;
//     }

// };
// int main()
// {
//     Derived D;
//     Base &b = D;
//     b.setdata(55);
//     b.getdata();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//     public:
//     void virtual  display(){
//         cout<<"hello base class"<<endl;
//     }
//     void show(){
//         cout<<"show()";
//     }
// };

// class B : public A {
//     void display(){
//         cout<<"Hello derived class";
//     }

// };
// int main()
// {
//     B o;
//     A &a =o;
//     a.display();
//     a.show();   
//     return 0;
// }

#include <iostream> 
  
/* fstream header file for ifstream, ofstream,  
  fstream classes */
#include <fstream> 
  
using namespace std; 
  
// Driver Code 
int main() 
{ 
    // Creation of ofstream class object 
    ofstream fout; 
  
    string line; 
  
    // by default ios::out mode, automatically deletes 
    // the content of file. To append the content, open in ios:app 
    // fout.open("sample.txt", ios::app) 
    fout.open("sample.txt"); 
  
    // Execute a loop If file successfully opened 
    while (fout) { 
  
        // Read a Line from standard input 
        getline(cin, line); 
  
        // Press -1 to exit 
        if (line == "-1") 
            break; 
  
        // Write line in file 
        fout << line << endl; 
    } 
  
    // Close the File 
    fout.close(); 
  
    // Creation of ifstream class object to read the file 
    ifstream fin; 
  
    // by default open mode = ios::in mode 
    fin.open("sample.txt"); 
  
    // Execute a loop until EOF (End of File) 
    while (fin) { 
  
        // Read a Line from File 
        getline(fin, line); 
  
        // Print line in Console 
        cout << line << endl; 
    } 
  
    // Close the file 
    fin.close(); 
  
    return 0; 
} 
