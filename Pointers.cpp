#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 3;
    int *b= &a;

    // & ---> (Address of) operator

    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;
    cout<<endl;

    // * ---> (Value of) Dereference operator
    cout<<"The value address of a is: "<<a<<endl;
    cout<<"The value address of a is: "<<*b<<endl;

    return 0;
}