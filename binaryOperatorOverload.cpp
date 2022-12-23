#include<iostream>
using namespace std;
class binaryOverload
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    binaryOverload operator+(binaryOverload bi)
    {
         binaryOverload u;
         u.a=a+bi.a;
         u.b=b+bi.b;
         return u;
    }
};
int main()
{
    binaryOverload b1,b2,b3,b4;
    b1.setdata(2,3);
    b2.setdata(4,5);
    b3=b1.operator+(b2);// b3=b1+b2;
    b4=b1+b2;//b4=b1.operator+(b2);
    b2.show();
    b3.show();
}
