#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
     if (age<1)
    {
        cout<<"You don't exist in this world."<<endl;
    }
    else if (age<18)
    {
        cout<<"Your are a kid you cannot enter in the party."<<endl;
    }
    else if (age==18)
    {
        cout<<"You are a boy and you can enter in the party."<<endl;
    }
    
    else{
        cout<<"You are a man and you can enter in the party."<<endl;
    }
    
    
    
    
    return 0;
}
