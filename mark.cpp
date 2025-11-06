#include<iostream>
using namespace std;
class student {
    private:
    int rollno, m1, m2, m3, total;
    char name[50];
    float avg;
    public:
    void getdetails()
    {
        cout<<"enter rollno :";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter marks:";
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        total = m1+ m2+ m3;
        avg = total/3;
    }
    void display()
    {
        cout<<"rollno:"<<rollno;
        cout<<"name:"<<name;
        cout<<"marks1:"<<m1;
        cout<<"marks2:"<<m2;
        cout<<"marks3:"<<m3;
        cout<<"total:"<<total;
        cout<<"average:"<<avg;
    }
};
int main()
{
    student s;
    s.getdetails();
    s.calculate();
    s.display();
    return 0;
}