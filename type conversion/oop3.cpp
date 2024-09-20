// wap to convet the poplar to cartesian and vice versa ;
#include<iostream>
#include<math.h>
class polar;
using namespace std;

class cartesian

{
    float xco;
    float yco;
    public:
    cartesian()
    {
        xco=0.0;
        yco=0.0;
    }
    cartesian(float x,float y)
    {
        xco=x;
        yco=y;
    }
    void getdata()
    {
      cout<<"enter the value of xco and yco:"<<endl;
      cin>>xco>>yco;  
    }
    int getxo()
    {
        return xco;
    }
    int getyco()
    {
        return yco;
    }
    operator polar();
    void display()
    {
        cout<<"xco="<<xco<<"yco="<<yco<<endl;
    }
};
class polar
{
    float radious;
    float angle;
    public:
    polar()
    {
        radious=0.0;
        angle=0.0;
    }
    polar(float r,float a)
    {
        radious=r;
        angle=a;
    }
    void getdata()
    {
        cout<<"enter the value of radious and angle:"<<endl;
        cin>>radious>>angle;
    }
    int  getradious()
    {
        return radious;
    }
    int getangle()
    {
        return angle;
    }
    operator cartesian();
    void display()
    {
        cout<<"radious="<<radious<<"angle="<<angle<<endl;
    }
};
cartesian:: operator polar()
{
   float radius=sqrt(xco*xco+yco*yco);
   float angle=atan(yco/xco);
   return polar(radius,angle);
}
polar :: operator cartesian()
{
    float xco=radious*cos(angle);
    float yco=radious*sin(angle);
    return cartesian(xco,yco);
}
int main()
{
    cartesian c1,c2;
    c1.getdata();
    c2.getdata();
    polar p1,p2;
    p1=c1;
    p2=c2;
    cout<<"consersion to cartesian to polar:"<<endl;
    p1.display();
    p2.display();
    c1=p1;
    c2=p2;
    cout<<"consersion to polar to cartesian:"<<endl;
    c1.display();
    c2.display();
    return 0;
}