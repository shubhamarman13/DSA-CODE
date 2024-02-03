#include<iostream>
using namespace std;
// in this program we have an array of size 5 and a 3 function one function named as get_max() for finding the max in the array one function named as get_min() to find the minimum in the array and in the last we have a single function named minmax() which finds the both max and the minium of the array 
int get_max(int arr[],int size)
{
int max=arr[0];
for (int  i = 1; i < size; i++)
{
    if (max<arr[i])
    {
        max=arr[i];
    }
    
}
return max;

}

int get_min(int arr[],int size)
{
    int min=arr[0];

    for (int i = 1; i <size; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
    
}
void minmax(int arr[],int size)
{
    int min,max;

     min=arr[0];
     max=arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    cout<<"Min is : "<<min<<endl;
    cout<<"Max is : "<<max<<endl;
    
    
}
int main()
{
    int arr[5]={1,2,-3,44,100};
    // int x=get_min(arr,5);
    cout<<"Min is "<<get_min(arr,5)<<endl; // only for finding the min of the array we  have get_min() function
    // int y= get_max(arr,5);
    cout<<"Max is "<<get_max(arr,5)<<endl;// only for finding the max of the array we  have get_max() function
    minmax(arr,5); // for  finding the both by using a single function we have a function  named as minmax() function 
    return 0;

}