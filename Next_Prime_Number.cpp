#include <iostream>
using namespace std;
int flag =0;
int isPrime(int n)
{
   //cout<<n;
    for(int i=2;i<=n/2;i++)
    {
    	//cout<<"h";
        if(n%i==0)
        {
             flag=1;
             //cout<<flag;
             //continue;
             return 1;
             break;
            
        }
    }  
    return 0;
}
int main()
{
    int num;
    cout<<"Number";
    cin>>num;
    int n=num;
    //cout<<n;
	while(true)
    {
        //cout<<n;
		n++;
		flag=isPrime(n);
        if(flag==0)
        {
            //n++;
			cout<<n;
            break;
        }
        
    }
return 0;  
}
