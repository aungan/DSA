#include<iostream>
using namespace std;

class Stack
{
    private:
    int top;
    int arr[5];

    public:
    Stack()
    {
       top = -1;
       for (int i = 0; i < 5; i++)
       {
           arr[i] = 0;
       }
       
    }
    bool isEmpty()
    {
        if(top==-1)
        return true;
        else
        return false;
        
    }
    bool isFull()
    {
        if(top == 4)
        return true;
        else 
        return false;
    }
    void push(int val)
    {
        if(isFull())
        {
            cout << "stack overflow condition "<< endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<< "stack underflow condition "<<endl;
        }
        else
        {
            int temp = arr[top];
            arr[top] = 0;
            top--;
            return temp;
        }
    }
    int count()
    {
        return top+1;
    }

    int peek(int pos)
    {
        if(isEmpty())
        {
            cout << "stack is empty " << endl;
            return 0;
        }
        else{
            return arr[pos];
        }
    } 
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "item changed at position " << pos << endl;
    }  
    void display()
    {
        for (int i = 4; i >= 0 ; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s1;
    int opt , position, value;

    do
    {
        cout << "enter the operation required. click 0 to exit"<< endl;
        cout << "1 - push()"<< endl;
        cout << "2 - pop()"<<endl;
        cout << "3 - isEmpty()"<< endl;
        cout << "4 - isFull"<< endl;
        cout << "5 - peak()"<<endl;
        cout << "6 - count"<< endl;
        cout << "7 - change"<<endl;
        cout << "8 - display"<< endl;

        cin >> opt;
        switch (opt)
        {
        case 0 :
            break;
        case 1:
            cout << "enter the value to be pushed"<<endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << s1.pop();
            break;
        case 3:
            if(s1.isEmpty())
            cout << "stack is empty"<<endl;
            else
            cout << "stack is not empty"<< endl;
            break;
        case 4:
            if(s1.isFull())
            cout << "stack is full";
            else 
            cout << " stack is not full";
            break;
        case 5 : 
            cout << "enter the index value to get the element of the stack " << endl;
            cin >> position;
            cout << " the value at the given position is   "<< s1.peek(position) << endl;
            break;
        case 6 :
            cout << "the number of elements in the stack are  " << s1.count() << endl;
            break ;
        case 7 :
            cout << " enter the position " << endl;
            cin >> position;
            cout << "enter the new value to be entered" << endl;
            cin >> value;
            s1.change(position , value);
            break ;
        case 8 :
            cout << " the elements in the stack are as follows  " << endl;
            s1.display();
            break; 
            
        default:
            cout << "invalid input received " << endl;
            break;
        }

    } while (opt !=0);
}