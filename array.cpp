#include<iostream>
using namespace std;
int main()
{
    // int arr[3]={1,2,4};
    // // int *c=arr;
    // cout<<*(arr+2);
    // cout<<int (c)<<endl;
    // cout<<int(&arr[0]);
    // cout<<arr[0];

    // cout<<(arr+2);

    int arr[4];
    *(arr)=10;
    *(arr+1)=20;
    *(arr+2)=30;
    *(arr+3)=40;
for (int i = 0; i < 4; i++)
{
    /* code */
    cout<<*(arr+i)<<endl;
}

    return 0;
}