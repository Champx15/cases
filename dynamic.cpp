//default constructor no destructor no copy constructor 
//update: the object earlier was on the stack, not on heap
#include<iostream>
using namespace std;
class Car{
public:
   string *Name;
   string *ModelNo;
   int *year;

   void show(){
    cout<<"Name: "<<*Name<<"\n"<<"ModelNo: "<<*ModelNo<<"\n"<<"Year: "<<*year<<endl;
   }
    
};
int main(){
    Car *car1=new Car(),*car2=new Car();
    car1->Name=new string("Alto");
    car1->ModelNo=new string("asdf3");
    car1->year=new int(2014);
    car1->show();
    car2->Name=new string("Mercedes");
    car2->ModelNo=new string("45343");
    car2->year=new int(34343);
    car2->show();
    delete car1->Name;
    delete car1->ModelNo;
    delete car1->year;
    delete car2->Name;
    delete car2->ModelNo;
    delete car2->year;
    delete car1;
    delete car2;
    return 0;
}