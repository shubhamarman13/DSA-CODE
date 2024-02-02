#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int Element)
{
    int low, mid, high;
    low = 0;
    int flag = 0;
    high = size - 1;
    while (low <= high)
    {
        flag += 1;
        mid = ((low + high) / 2);

        if (arr[mid] == Element)
        {
            cout << "Element is found at index number " << mid + 1 << "th" << endl;
            cout << flag;
            return 0;
        }
        if (arr[mid] < Element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Element doesnt found in the Array\n";
}
int main()
{
    int size = 6;
    int arr[size] = {10, 20, 30, 40, 50, 60};
    int Element = 60;
    binarySearch(arr, size, Element);
    return 0;
}