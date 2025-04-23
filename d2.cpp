//own constructor no destructor no copy constructor 
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
    
};
int main(){
    Car car1("Alto","35343",343),car2("Mercedes","G class",2014);
    car1.show();
    car2.show();
    delete car1.Name,car1.ModelNo,car1.year,car2.Name,car2.ModelNo,car2.year;
    return 0;
}