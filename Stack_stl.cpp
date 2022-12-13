#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);

    s.pop();
    s.pop();
    s.pop();
    cout<<"Printing top element "<<s.top();
    cout<<endl;
    if(s.empty())
    {
        cout<<"Stack is empty";
    }
    else{
        cout<<"Satck is not empty";
    }
    
}
