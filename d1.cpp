//own constructor  destructor copy constructor 
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
    Name=new String(*c.Name);
    ModelNo=new String(*c.ModelNo);
    year=new int(*c.year);
   }
   ~Car(){
    delete Name;
    delete ModelNo;
    delete year;
   }
    
};
int main(){
    Car car1("Alto","35343",343),car2("Mercedes","G class",2014);
    car1.show();
    car2.show();
    delete car1;  
    return 0;
}