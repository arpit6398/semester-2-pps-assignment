#include<iostream>
using namespace std;

class student {

    private:
    char name[15];
    int ID;
    int CGPA;
    char course[10];

    public:
    void getdetails()
    {
        cout<<"enter student name :\n";
        cin>>name;
        cout<<"enter student ID :\n";
        cin>>ID;
        cout<<"enter student CGPA :\n";
        cin>>CGPA;
        cout<<"enter student course :\n";
        cin>>course;
    }
    void showdetails() 
    {
        cout<<"student name :"<<name<<endl;
        cout<<"student ID :"<<ID<<endl;
        cout<<"student CGPA :"<<CGPA<<endl;
        cout<<"student course :"<<course<<endl;
    }

};
int main() {
    student st1;
    st1.getdetails();
    st1.showdetails();
    return 0;
}