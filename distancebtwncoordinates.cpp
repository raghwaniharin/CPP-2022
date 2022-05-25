#include  <iostream>
#include <cmath>
typedef struct {
int x,y;
float dist;
}coord;
using namespace std;
int main()
{
    coord a,b;
    float d2,d;
    cout<<"you will need to input 2 points in cartesian coordinates\n ";
    cout<<"point A\n";
    cout<<"x1 ";
    cin>>a.x;
    cout<<"y1 ";
    cin>>a.y;

    cout<<"point B\n";
    cout<<"x2 ";
    cin>>b.x;
    cout<<"y2 ";
    cin>>b.y;
    cout<<"\n";
    cout<<"the coordinates are\n";
    cout<<"A "<<a.x  << a.y;
    cout<<"\n";
    cout<<"B "<<b.x  <<b.y;
    d2=((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y));
    d= sqrt(d2);
    cout<<"\nthe distance between the points is:\n";
    cout<<(double)d;
return 0;
}
