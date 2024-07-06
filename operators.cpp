#include<iostream>
using namespace std;
int main()
{
    int a =5,b=6;
    cout<<"Operator in c++: "<<endl;

    //Arithmetic Operators
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl;

    //Comparison Operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"The value of logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical and operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical and operator !(a==b) is: "<<!(a==b) <<endl;
    cout<<endl;
    


    
    return 0;
}
