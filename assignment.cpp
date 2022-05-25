#include <iostream>
#include <cmath>
#include <time.h>


using namespace std;
using std::string;
int choice;
void menu(){
cout<<"welcome to the cartesian calulator\n press number according to problem\n";
cout<<"1.DISTANCE BETWEEN 2 POINTS\n";
cout<<"2.MIDPOINT OF 2 POINTS\n";
cout<<"3.AREA OF TRIANGLE FORMED BY 3 POINTS\n";
cout<<"4.AREA OF QUADILATERAL FORMED BY 4 POINTS\n";
cin>>choice;


};

// Declaring the Point class
class Point {
    private:
    int x, y;

    public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    friend double distCalculator(Point A, Point B);
    friend float midpointx(Point A, Point B);
    friend float midpointy(Point A, Point B);
    friend float trianglearea(Point A,Point B,Point C);
    friend float quadarea(Point A,Point B,Point C,Point D);
};
void getab(){
    int x,y;
    cout<<"Point A ::\n";
    cout<<"Enter the x coordinate : ";
    cin>>x;
    cout<<"Enter the y coordinate : ";
    cin>>y;
    Point A(x, y);

    cout<<"Point B ::\n";
    cout<<"Enter the x coordinate : ";
    cin>>x;
    cout<<"Enter the y coordinate : ";
    cin>>y;
    Point B(x, y);

};
void getc(){
    int x,y;
    cout<<"Point c ::\n";
    cout<<"Enter the x coordinate : ";
    cin>>x;
    cout<<"Enter the y coordinate : ";
    cin>>y;
    Point C(x, y);
};
void getd(){
    int x,y;
    cout<<"Point d ::\n";
    cout<<"Enter the x coordinate : ";
    cin>>x;
    cout<<"Enter the y coordinate : ";
    cin>>y;
    Point D(x, y);};
double distCalculator(Point A, Point B) {
    int x1, x2, y1, y2, xd, yd;
    x1 = A.x;
    x2 = B.x;
    y1 = A.y;
    y2 = B.y;
    xd = x1 - x2;
    yd = y1 - y2;

    double dist = sqrt(((xd)*(xd)) + ((yd)*(yd)));
    return dist;
}

float midpointx(Point A,Point B){
int x1,x2;
float midx;
x1 = A.x;
x2 = B.x;
midx=0.5*(x1+x2);

return midx;

}
float midpointy(Point A,Point B){
int y1,y2;
float midy;
y1 = A.y;
y2 = B.y;
midy=0.5*(y1+y2);
return midy;
}
float trianglearea(Point A,Point B,Point C){
int x1,x2,x3,y1,y2,y3;
float area;
x1=A.x;
x2=B.x;
x3=C.x;
y1=A.y;
y2=B.y;
y3=C.y;
area=0.5*(((x1*y2)+(x2*y3))-((x2*y1)+(x3*y2)));
return area;
}
float quadarea(Point A,Point B,Point C,Point D){
int x1,x2,x3,x4,y1,y2,y3,y4;
float area;
x1=A.x;
x2=B.x;
x3=C.x;
x4=D.x;
y1=A.y;
y2=B.y;
y3=C.y;
y4=D.y;
area=0.5*(((x1*y2)+(x2*y3)+(x3*y4))-((x2*y1)+(x3*y2)+(x4*y3)));
return area;
}

int main() {
        int x, y;
    double dist;
    float area,midx,midy,time_spent;
    menu();
//distance


    Point A(x, y);
    Point B(x, y);
    Point C(x, y);
    Point D(x, y);
    switch(choice)
    {

        case 1:
                getab();
                cout<<"\n\tDISTANCES\n";
                //distance output
                dist=distCalculator(A, B);
                cout<<"The distance between A and B points is : "<<dist<<" units\n\n";
                break;

        case 2:
                getab();
                cout<<"\n\tMIDPOINTS\n";
                //midpoint output
                midx=midpointx(A, B);
                midy=midpointy(A,B);
                cout<<"The midpoint of A and B points is : ("<<midx<<","<<midy<<") coordinates\n\n";
                break;
        case 3:
                getab();
                getc();
                cout<<"\n\tAREA\n";
                //area output
                area=trianglearea(A,B,C);
                cout<<"the area of triangle A B C is : "<< area<<"units\n\n";
                break;
        case 4:
                getab();
                getc();
                getd();
                //quadilateral area
                quadarea(A,B,C,D);
                cout<<"the area of the quadilateral is: "<<area<<"units squared\n";
                //check type of quad
                                double dab,dac,dbd,dcd;
                                dab=distCalculator(A,B);
                                dac=distCalculator(A,C);
                                dbd=distCalculator(B,D);
                                dcd=distCalculator(C,D);
                                if (dab==dcd&&dac==dcd){
                                cout<<"its a rectangle\n";
                                }
                                else if(dab==dcd==dac==dcd){
                                cout<<"its a square\n";
                                    }
                                else{
                                    cout<<"its just an abnormal quadilateral\n";
                                }
                                break;
        default:
            exit(1);

                }

}

