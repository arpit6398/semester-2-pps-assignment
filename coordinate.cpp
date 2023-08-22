#include<Iostream>
using namespace std;

struct point {
int x;
int y;
};

int main() {

    point p1,p2,p3;
    cout<<"enter x coordinate of first point :\n";
    cin>>p1.x;
    cout<<"enter y coordinate of first point :\n";
    cin>>p1.y;
    cout<<"enter x coordinate of second point :\n";
    cin>>p2.x;
    cout<<"enter y coordinate of second point :\n";
    cin>>p2.y;

    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;

    cout<<"sum of coordinate is :\n";
    cout<<"("<<p3.x<<","<<p3.y<<")";
}