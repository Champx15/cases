//Dynamic Encapsulation
#include<iostream>
using namespace std;
class Student{
private:
   string *Name;
   int *rollno;
public:
    void setName(string Name){//setter
        this->Name=new string(Name);
    }
    string getName(){//getter
        return *Name;
    }
    void setRoll(int rollno){//setter
        if(rollno>=1)
        this->rollno=new int(rollno);
    }
    int getRoll(){//getter
        return *rollno;
    }
    void Introduction(){
        cout<<"My name is "<<*Name<<" and my rollno is "<<*rollno<<endl;
    }
    Student(string Name="John", int rollno=12){
        this->Name=new string(Name);
        this->rollno=new int(rollno);
    }
    ~Student(){
        delete Name;
        delete rollno;
    }
    //copy constructor
    Student(const Student &s){
        Name=new string(*s.Name);
        rollno=new int(*s.rollno);
    }
    //move constructor
    Student(Student && s){
        Name=s.Name;
        rollno=s.rollno;
        s.Name=nullptr;
        s.rollno=nullptr;
    }

};
int main(){
    Student *s1=new Student("Elliot",1),*s2=new Student(),*s3=new Student(*s2),
    *s4=new Student(move(*s3));

    s2->setName("Champ");s2->setRoll(2);
    cout<<s2->getName()<<" "<<s2->getRoll();
    s1->Introduction();
    s2->Introduction();

    s4->Introduction();
    delete s1;delete s2;
    delete s3; delete s4;






    return 0;
}