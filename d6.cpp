//smart pointers, custom constructor  move constructor 
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
   Car(Car&& c){
    Name=move(c.Name);
    ModelNo=move(c.ModelNo);
    year=move(c.year);
   }
   Car& operator=(Car&& c){
    if(this!=&c){
        Name=move(c.Name);
        ModelNo=move(c.ModelNo);
        year=move(c.year);}
        return *this;
    }
   

};
Car makecar(){
    Car car("BMW","B class",2000);
    return car;
  }  
int main(){
    Car car1("Alto","dsd",2010),car2("BMW","S class",2012),car3(move(car1));

    car2.show();
    car3.show();
    car1=Car("asdfads","dsfasdf",34343);//car1=makecar()
    car1.show();


    return 0;
}