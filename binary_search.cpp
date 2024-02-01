#include<iostream>
using namespace std;

int BinarySearch(int arr[], int length, int Element)
{
    int low,mid,high;
    low=0;
    high=length-1;
    while (low<=high)
    {
     mid=((low+high)/2);
     if (arr[mid]==Element)
     {
        cout<<"Element found at  "<<mid+1<<"th position";
        return  0;
     }
     if (arr[mid]<Element)
     {
        low=mid+1;
     }
     else
     {
        high=mid-1;
     }
     
     
    }
    cout<<"Element not found ";
    return 0;
    
    
}
int main()
{
    int length,Element;
    cout<<"Enter the no of  Elements\n";
    cin>>length;
    int arr[length];
    cout<<"Enter the Elements\n";
    for (int i = 0; i < length; i++)
    {
        cin>>arr[i];
    }
cout<<"Enter the Element to find \n";
cin>>Element;
BinarySearch(arr, length,Element);
    
}