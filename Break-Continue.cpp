#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"break statement"<<endl;
    for (int i = 0; i <= 4; i++)
    {
        cout<<i<<endl;
        if (i==2)
        {
            break;
        }
        
    }
    cout<<endl;
    

    cout<<"continue statement"<<endl;
    for (int i = 0; i <= 4; i++)
    {
        cout<<i<<endl;
        if (i==2)
        {
            continue;
        }
        
    }
    cout<<endl;
    
    return 0;
}