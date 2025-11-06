#include<iostream>
using namespace std;
class student
{
    public:
    student()
    {
        cout<<"constructor called"<<endl;
    }
     void display()
    {
        cout<<"inside display function"<<endl;
    }
    ~student()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{
    cout<<"creating object d1"<<endl;
    student s1;
    s1.display();
    cout<<"exting main................"<<endl;
    return 0;
}