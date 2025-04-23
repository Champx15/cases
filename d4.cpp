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
    
};
int main(){
    Car car1,car2;
    car1.Name=make_unique<string>("Alto");
    car1.ModelNo=make_unique<string>("adfdadfa");
    car1.year=make_unique<int>(3432232);
    car1.show();
    car2.Name=make_unique<string>("Mercedes");
    car2.ModelNo=make_unique<string>("S class");
    car2.year=make_unique<int>(3432);
    car2.show();
    return 0;
}