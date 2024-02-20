#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int q1,q2,q3,q4;
    float p1,p2,p3,p4,sum=0.0;
    cout<<"enter price of computer:";
    cin>>p1;
    cout<<"enter Qty of computer:";
    cin>>q1;

    cout<<"enter price of Mobile:";
    cin>>p2;
    cout<<"enter Qty of Mobile:";
    cin>>q2;

    cout<<"enter price of Calculator:";
    cin>>p3;
    cout<<"enter Qty of Calculator:";
    cin>>q3;

    cout<<"enter price of Pencil:";
    cin>>p4;
    cout<<"enter Qty of Pencil:";
    cin>>q4;
    system("cls");
    cout<<fixed<<setprecision(2);
    system("color 2");
    cout<<setw(39)<<"XYZ Mart Pvt Ltd"<<endl;
    cout<<setw(42)<<"3\\top, PQR Shopping Mall"<<endl;
    cout<<setw(35)<<"Gandhinagar"<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"BillNo:101"<<setw(49)<<"06-Feb-2024"<<endl;
    cout<<"==========================================================="<<endl;
    cout<<left<<setw(10)<<"No"<<setw(20)<<"Item Name"<<right<<setw(10)<<"Unit Price"<<setw(8)<<"Qty"<<setw(10)<<"Total"<<endl;
    cout<<"==========================================================="<<endl;
    cout<<left<<setw(10)<<"1."<<setw(20)<<"Computer"<<right<<setw(10)<<p1<<setw(7)<<q1<<setw(12)<<p1*q1<<endl;
    cout<<left<<setw(10)<<"2."<<setw(20)<<"Mobile"<<right<<setw(10)<<p2<<setw(7)<<q2<<setw(12)<<p2*q2<<endl;
    cout<<left<<setw(10)<<"3."<<setw(20)<<"Calculator"<<right<<setw(10)<<p3<<setw(7)<<q3<<setw(12)<<p3*q3<<endl;
    cout<<left<<setw(10)<<"4."<<setw(20)<<"Pencil"<<right<<setw(10)<<p4<<setw(7)<<q4<<setw(12)<<p4*q4<<endl;
    cout<<"==========================================================="<<endl;
    sum=(p1*q1)+(p2*q2)+(p3*q3)+(p4*q4);
    cout<<setw(50)<<"Total Amount = "<<right<<setw(9)<<sum<<endl;
    cout<<setw(50)<<"Total Discount = "<<right<<setw(9)<<sum*0.1<<endl;
    cout<<"==========================================================="<<endl;
    cout<<setw(50)<<"Amount to be Paid = "<<right<<setw(9)<<sum*0.9<<endl;
    cout<<"==========================================================="<<endl;
    cout<<setw(38)<<"Prepared by Tushar."<<endl;

}

