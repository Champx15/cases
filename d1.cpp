//own constructor  destructor copy constructor 
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
   Car(string name,string model,int y){
    Name=new string(name);
    ModelNo=new string(model);
    year=new int(y);
   }
   Car(const Car &c){
    Name=new string(*c.Name);
    ModelNo=new string(*c.ModelNo);
    year=new int(*c.year);
   }
   ~Car(){
    delete Name;
    delete ModelNo;
    delete year;
   }
    
};
int main(){
    Car *car1=new Car("Alto","35343",343),*car2=new Car("Mercedes","G class",2014),*car3=new Car(*car1);
    car1->Name=new string("Ghoda");
    car1->show();
    car2->show();
    car3->show();
    delete car1;  
    delete car2;delete car3;
    return 0;
}