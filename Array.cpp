#include<bits/stdc++.h>
using namespace std;

int main(){
int mark[] = {23,25,6,4};
mark[2] = 55;

//for loop
for (int i = 0; i < 4; i++)
{
    cout<<"The value of marks "<<i<<" is "<<mark[i]<<endl;
}
cout<<endl;
//while loop
int j = 0;
while (j<4)
{
    cout<<"The value of marks "<<j<<" is "<<mark[j]<<endl;
    j++;
}
cout<<endl;
int k =0;
do
{
    
    cout<<"The value of marks "<<k<<" is "<<mark[k]<<endl;
    k++;
} while (k<4);



    return 0;
}