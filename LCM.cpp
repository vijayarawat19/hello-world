//LCM of 2 numbers
#include<iostream>
using namespace std;
 int main()
 {
        int n1,n2,l;
        n1=5;
        n2=6;
        if(n1>n2){
            l=n1;
        }
        else{
            l=n2;
        }
        while(1){
            if(l%n1==0 && l%n2==0)
            {
               cout<<l;
               break;
            }
            else
            {
               l++;
            }
        }
 }
