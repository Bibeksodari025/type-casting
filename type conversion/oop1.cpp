// wap to convert the cartesian to polar using operator function;
#include<iostream>
#include<math.h>
using namespace std;
class cartesian
{
    float xco;
    float yco;
    public:
    cartesian()
    {


    }
    void getdata()
    {
        cout<<"enter the xco and yco:"<<endl;
        cin>>xco>>yco;
    }
    // void display()
    // {
    //     cout<<"xco="<<xco<<"yo="<<yco<<endl;
    // }
    int getxco()
    {
        return xco;
    }
    int getyco()
    {
        return yco;
    }   
};        
class polar
{
    float radious;
    float angle;
    public:
    polar()
    {



    }
    // void getdata()
    // {
    //     cout<<"ënter the radious and angle:"<<endl;
    //     cin>>radious>>angle; 
    // }
    int getradious()
    {
        return radious;
    }
    int getangle()
    {
        return angle;
    }
    polar(cartesian c)
    {
    float radious=sqrt((c.getxco()*c.getxco())+(c.getyco()*c.getyco()));
    float angle = atan(c.getyco()/c.getxco());
    }
    void display()
    {
        cout<<"radious="<<radious<<"angle="<<angle<<endl;
    }
};
int main()
{
    cartesian c1;
    c1.getdata();
    polar p1;
    // p1.getdata();
    p1=c1;
    cout<<"conversion of cartesian to polar:"<<endl;
    p1.display();
    return 0;
}