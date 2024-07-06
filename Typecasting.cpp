#include<iostream>
using namespace std;
int main()
{
    int a = 6;
    float b = 4.5f;
    cout<<"The value of a is: "<< float(a)<<endl;
    cout<<"The value of b is: "<< int(b)<<endl;
    cout<<endl;

    cout<<"The expression is: "<< a+b<<endl;
    cout<<"The value is: "<< a+int(b)<<endl;

    //Rule of typecasting == long double>>double>>float>>long>>int>>short>>char

    
    return 0;
}
