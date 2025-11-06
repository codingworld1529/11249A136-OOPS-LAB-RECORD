#include<iostream>
using namespace std;
class MyComplex 
{
    float real, imag ;
    public:
    void getdata();
    void putdata();
    void sum(MyComplex A, MyComplex B);
};
void MyComplex::getdata()
{
    cout<<"enter real part: ";
    cin>>real;
    cout<<"enter imaginary part: ";
    cin>>imag;
}
void MyComplex::putdata()
{
    if(imag >= 0)
    cout<<real<<"+"<<imag<<"i";
    else
    cout<<real<<imag<<"i";
}
void MyComplex::sum(MyComplex A,MyComplex B)
{
    real = A.real + B.real;
    imag = A.imag + B.imag;
}
int main()
{
    MyComplex x,y,z;
    x.getdata();
    y.getdata();
    z.sum(x,y);
    z.putdata();
    return 0;
}