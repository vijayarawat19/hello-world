#include<iostream>
using namespace std;
class unaryOverload
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
        cout<<"a="<<a;
        cout<<"b="<<b;
    }
    unaryOverload operator-()
    {
         unaryOverload u;
         u.a=-a;
         u.b=-b;
         return u;
    }
};
int main()
{
    unaryOverload u1,u2,u3;
    u1.setdata(2,3);
    u2=u1.operator-();
    u3=-u1;
    u2.show();
    u3.show();
}
