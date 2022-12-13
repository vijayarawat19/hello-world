#include<iostream>
#include<stack>
using namespace std;
//Reverse string using stack
int main()
{
    string str= "Vijaya";
     stack<char> s;
     int i,size;
     char ch,c;
     
    cout<<"Enter the size of string";
    cin>>size;
    cout<<"Enter String";
    //pushing string as stack elements.
    for(i=0;i<size;i++)
     {
         cin>>c;
         s.push(c);
     }
     
     /*for(i=0;i<str.length();i++)
     {
         char ch = str[i];
         s.push(ch);
     }*/
     string rev;
     while(!s.empty())
     {
        //cout<<"He";
        ch=s.top();
        rev.push_back(ch);
        s.pop();
        
     }
     cout<<"Answer is "<<rev;
}
