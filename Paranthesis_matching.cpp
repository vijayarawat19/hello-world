#include<iostream>
#include<stack>
using namespace std;
bool isavalid(string expression)
     {
         stack<char>s;
         int i;
         char ch;
         for(i=0;i<expression.length();i++){
             ch = expression[i];
             if(ch=='('|| ch=='{' || ch=='['){
                 s.push(ch);
             }
             else{
                 if(!s.empty()){
                     char top =s.top();
                     if(ch==')'&& top=='('|| ch==']'&&top=='['|| ch=='}'&& ch=='{'){
                         s.pop();
                         cout<<"String matched successfully";
                     }
                     else{
                         return false;
                         }
                 }
                 else{
                     return false;
                 }
             }
         }
     
         if(s.empty()){
             return true;
             
         }
         else{
             return false;
         }
     }
int main(){    
 string expression = "({{{[]}}})({{[]}})";
 isavalid(expression);
 
     
 }
