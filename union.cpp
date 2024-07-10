#include<bits/stdc++.h>
using namespace std;
typedef union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
}mn;

int main(){
        mn m1;
        m1.rice = 55;
        cout<<m1.rice<<endl;;
        return 0;
}