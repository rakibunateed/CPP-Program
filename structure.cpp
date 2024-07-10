#include<bits/stdc++.h>
using namespace std;
typedef struct employee
{
    
    int Id; 
    char favChar; 
    float salary; 
}ep;

int main(){
ep harry;
    harry.Id = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.Id<<endl; 
    cout<<"The value is "<<harry.favChar<<endl; 
    cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}