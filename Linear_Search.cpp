#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    int num =0;
    cout<<"Enter the 6 elements of the array \n";
    for (int  i = 0; i < 6; i++)
    {
    cin>>arr[i];
    }
    cout<<"Enter the Element to find in the array ";
    cin>>num;
    for (int  i = 0; i < 6; i++)
    {
    if(arr[i]==num)
    {
        cout<<"Element found at "<<i+1<<"th position"<<endl;
        break;

    }

   if (i==5)
   {
        if (arr[i]!=num)
        {
            cout<<"The Element doesnot exist in the array ";
        }
        
   }
   
    
    
}}