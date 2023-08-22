#include<iostream>
using namespace std;

void swap(int *a,int *b)
 {
    int *temp;

    *temp=*a;
    *a=*b;
    *b=*temp;
    cout<<"swapped number is\n"<< endl;
    cout<<"a= "<<*a<<" b= "<<*b;


    
}
int main() {
    int *a,*b;
    cout<<"enter the value of a\n"<< endl;
    cin>>*a;
    cout<<"enter the value of b\n"<< endl;
    cin>>*b;
    cout<<"the entered number is\n= "<<a<<" b= "<<b<<"\n";
    swap(*a,*b);
    return 0;
}