#include<iostream>
using namespace std;

void get_min_max(int arr[],int size, int *min ,int *max)
{
    for (int i = 1; i < size; i++)
    {
        if ((*min)>arr[i])
        {
            *min= arr[i];
        }
        if ((*max)<arr[i])
        {
            *max= arr[i];
        }
        
    }
    
}
int main()
{
    int arr[5]={2,44,5,-3,56};
    int min=arr[0];
    int max=arr[0];
    get_min_max(arr,5,&min,&max);
    cout<<"Min is : "<<min<<endl;
    cout<<"Max is : "<<max<<endl;


}
