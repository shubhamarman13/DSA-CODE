#include <stdio.h>
#include <iostream>

using namespace std;
#define size 4
#define TOP -1
int arr[size];
int top = TOP;

int push(int val)
{
    if (top == size - 1)
    {
        cout << "stack overflow";
    }
    else
    {
        top++;
        arr[top] = val;
    }
}
void pop()
{
    if(top== -1)
    {
        cout<<"stack underflow-- Empty Stack\n";
    }
    else
    {
        top--;
        arr[top];
    }
}

void display()
{
    if (top==-1)
    {
        cout<<"Stack is Empty\n";
    }
    else
    {
    for (int i = top; i>=0; i--)
            {
                cout << endl
                     << "| "<<arr[i] <<" |"<< endl;
            }
}}
int main()
{
    while (1)
    {
        int input;
        cout << "\n**************************\n";
        cout << "1 : push()" << endl;
        cout << "2: Display()" << endl;
        cout << "3 :pop()" << endl;
        cout << "\n**************************\n";
        cout<<"Enter Choice:  ";
    
        cin >> input;
        switch (input)
        {
        case 1:
            int val1;
            cout << "Enter the elempt to push";
            cin >> val1;
            push(val1);
            break;
        case 2:
            display();
            break;
            case 3:
            pop();
            break;
        default:
            cout<<"Wrong input";
            break;
        }
    }

    // push(1);
    // push(2);
    // push(3);
    // push(4);
    // push(5);

    return 0;
}
