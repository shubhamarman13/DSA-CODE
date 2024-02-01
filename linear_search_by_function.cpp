#include<iostream>
using namespace std;

int linearSearch(int arr[], int length, int element)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i]==element)
        {
            cout<<"Element found at "<<i+1<<"th position";
            return 0;
        }
        
    }
    cout<<"Element doesnot found in the array ";
    return 0;
    
}

int main()
{
    int length, Element;
    cout<<"Enter the number of elements \n";
    cin>>length;
    cout<<"Enter the Elements\n";
int arr[length];
// inisializing the array 
for (int  i = 0; i <length; i++)
{
    cin>>arr[i];
}
cout<<"Enter the Element to find in the array \n";
cin>>Element;
linearSearch(arr,length,Element);


}