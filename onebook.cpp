#include<iostream>
using namespace std;
class book
{
    private:
    int accno, pages;
    char bookname[50], author[50], isbno[50];
    float price;
    public :
    void getdetails()
    {
        cout<<"enter bookname";
        cin>>bookname;
        cout<<"Author :";
        cin>>author;
        cout<<"isbno :";
        cin>>isbno;
        cout<<"accno:";
        cin>>accno;
        cout<<"No. of pages";
        cin>>pages;
        cout<<"price";
        cin>>price;
    }
    void displaybook()
    {
        cout<<"bookname:"<<bookname<<endl;
        cout<<"author:"<<author<<endl;
        cout<<"isbno:"<<isbno<<endl;
        cout<<"accno:"<<accno<<endl;
        cout<<"no. of pages:"<<pages<<endl;
        cout<<"price"<<price<<endl;
    }
};
int main()
{
    book b;
    b.getdetails();
    b.displaybook();
    return 0;
}