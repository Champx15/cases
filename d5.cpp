//smart pointers, default constructor no destructor no copy constructor 
#include<iostream>
#include<memory>
using namespace std;
class Car{
public:
   unique_ptr<string>Name;
   unique_ptr<string>ModelNo;
   unique_ptr<int>year;
   void show(){
    cout<<"Name: "<<*Name<<"\n"<<"ModelNo: "<<*ModelNo<<"\n"<<"Year: "<<*year<<endl;
   }
   Car(string Name,string ModelNo,int year){
    this->Name=make_unique<string>(Name);
    this->ModelNo=make_unique<string>(ModelNo);
    this->year=make_unique<int>(year);
   }
    
};
int main(){
    Car car1("Alto","dsd",2010),car2("BMW","S class",2012);
    car1.show();
    car2.show();
    return 0;
}