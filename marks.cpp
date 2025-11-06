#include<iostream>
using namespace std;
class student{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public :
    void getdetail();
    void calculate();
    void display();
};
void student :: getdetail(){
    cout<<"enter rollno:";
    cin>>rollno;
    cout<<"enter name";
    cin>>name;
    cout<<"enter 3 marks";
    cin>>m1>>m2>>m3;
}
void student :: calculate()
{
    total = m1+m2+m3;
    avg = total/3;
}
void student :: display()
{
    cout<<"roll no:"<<rollno<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"mark1:"<<m1<<endl;
    cout<<"mark2:"<<m2<<endl;
    cout<<"mark3:"<<m3<<endl;
    cout<<"total:"<<total<<endl;
    cout<<"average:"<<avg<<endl;
}
int main()
{
    int i,n;
    student s[100];
    cout<<"enter n";
    cin>>n;
    for (i=0;i<=n;i++){
        s[i].getdetail();
        s[i].calculate();
        s[i].display();
    }
    return 0;
}