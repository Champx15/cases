//Abstraction
#include<iostream>
using namespace std;
class Draw{
public:
    virtual void draw()=0;
};
class Circle: public Draw{
public:
    void draw() override{
        cout<<"Circle is drawn"<<endl;
    }
};
class Square: public Draw{
public:
    void draw() override{
        cout<<"Square is drawn"<<endl;
    }
    void tell(){
        cout<<"This is a square"<<endl;
    }
};

int main(){
    Circle c1;Square s1;
    c1.draw();s1.draw();
    Draw *d= new Square();
    d->draw();
    delete d;
    

    
    return 0;
}