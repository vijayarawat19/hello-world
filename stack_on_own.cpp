#include<iostream>
using namespace std;
 class Stack{
     public:
      int top;
      int size;
      int *arr;
    
    Stack(int size){
          this->size= size;
          arr= new int[size];
          top=-1;
      }
     void push(int element){
         if(top<size)
         {
             top++;
             //cout<<top;
             
             arr[top]=element;
             //cout<<"Stack";
             
         }
         else{
             cout<<"Stack Overflow";
         }
     }
     void pop()
     {
         if(top>=0)
         {
             top--;
         }
         else{
             cout<<"Stack already empty";
         }
     }
     void empty()
     {
         if(top==-1)
         {
             cout<<"Stack is empty";
         }
         else{
             cout<<"Stack is not empty";
         }
     }
     void peek()
     {
         if(top>-1)
         {
             cout<<arr[top];
         }
         else{
             cout<<"Stack empty";
         }
     }
 };
 int main()
 {
     Stack st(5);
     st.push(10);
     st.peek();
     st.push(11);
     st.push(12);
     st.push(13);
     st.pop();
     st.peek();
     st.empty();
     st.empty();
     st.pop();
     st.peek();
     st.empty();
     st.pop();
     st.peek();
     st.empty();
     st.pop();
     st.peek();
     st.empty();
     
 }
