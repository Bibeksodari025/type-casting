//convert cartesian  to polar using constructor
#include <iostream>
#include <cmath>

using namespace std;
class polar;

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
        cout << "enter the x coordinate and y coordinate:";
        cin >> xco >> yco;
    }
    int getxco()
    {
        return xco;
    }
    int getyco()
    {
        return yco;
    }
    cartesian(polar p);
    // {
    //     xco = p.getradious() * cos(p.getangle());
    //     yco = p.getradious() * sin(p.getangle());
    // }

     void showdata()
    {
        cout << "xco=" << xco << endl;
        cout << "yco=" << yco << endl;
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
    void getdata()
    {
        cout << "enter the value of radious and angle:";
        cin>>radious>>angle;
    }
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
        radious = sqrt((c.getxco() * c.getxco()) + (c.getyco() * c.getyco()));
        angle = atan(c.getyco() / c.getxco());
    }
    void showdata()
    {
        cout << "radious=" << radious << endl;
        cout << "angle=" << angle << endl;
    }
};

cartesian ::cartesian(polar p)
{
    xco = p.getradious() * cos(p.getangle());
    yco = p.getradious() * sin(p.getangle());
}

int main()
{
    cartesian c1, c2;
    polar p1, p2;
    p1.getdata();
    p2.getdata();
    c1=p1;
    c2=p2;

    c1.showdata();
    c2.showdata();
    cout<<"conversion of polar to cartesian:"<<endl;
    c1.getdata();
    c2.getdata();
    
    p1 = c1;
    p2 = c2;
    cout << "conservation of cartesian to polar:" << endl;
    p1.showdata();
    p2.showdata();
    return 0;
}