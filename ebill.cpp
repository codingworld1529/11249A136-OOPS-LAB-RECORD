#include<iostream>
using namespace std;
   class bill {
    private :
      int units;
      int custid;
      float amount;
      char name[100];
    
    public :
       
    void getcustdetails()
        {
            cout<<"Customer ID:";
            cin>>custid;
            cout<<"Enter Name :";
            cin>>name;
            cout<<"Enter Units Consumed:";
            cin>>units;
        }
    void calcbill()
        {
            if (units <= 100){
                amount = 0;
            }
            else if (units <= 200){
                amount = (units - 100)*2.25;
            }
            else if (units <= 400){
                amount = (100*2.25) + (units - 200)*4.50;
            }
            else if (units <= 600){
                amount = (100*2.25) + (200*4.50) + (units - 400)*6.00;
            }
            else {
                amount = (100*2.25) + (200*4.50) + (400*6.00) + (units - 600)*9.00;
            }
        }
    void  printbill()
        {
            cout<<"---------------ELECTRICITY BILL---------------\n";
            cout<<"Customer ID :"<<custid<<endl;
            cout<<"Name :"<<name<<endl;
            cout<<"Units Consumed :"<<units<<endl;
            cout<<"Amount: "<<amount<<endl;
        }
  };
  int main(){
    bill E;
    E.getcustdetails();
    E.calcbill();
    E.printbill();
    return 0;
  }