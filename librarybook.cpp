#include<iostream>
using namespace std;
class book
{
    private :
    int  accno,pages;
    char bookname[50],author[50],isbno[50];
    float price;
    public :
    void getbookdetail();
    void displaybook();
};
void book :: getbookdetail()
{
    cout<<"enter bookname:";
    cin>>bookname;
    cout<<"author";
    cin>>author;
    cout<<"isbno:";
    cin>>isbno;
    cout<<"pages";
    cin>>pages;
    cout<<"accno";
    cin>>accno;
    cout<<"price";
    cin>>price;
}
void book :: displaybook()
{
    cout<<"bookname:"<<bookname;
    cout<<"author"<<author;
    cout<<"isbno"<<isbno;
    cout<<"accno"<<accno;
    cout<<"no of pages"<<pages;
    cout<<"price"<<price;
}
int main()
{
    int i, n;
    book b[100];
    cout<<"enter n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        b[i].getbookdetail();
        b[i].displaybook();
    }
}
 