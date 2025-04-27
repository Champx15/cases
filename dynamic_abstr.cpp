//Dynamic Abstraction
#include<iostream>
using namespace std;
class Draw{
public:
    virtual void draw()=0;
};
class Circle: public Draw{
private: 
  double *radius;
public:
    void setRadius(double radius){
        this->radius=new double(radius);
    }
    double getRadius() {return *radius;}
    Circle(double radi=1) {
        radius=new double(radi);
    }
    ~Circle(){
        delete radius;
    }
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
    Circle *c1=new Circle();Square s1;
    c1->draw();s1.draw();
    Draw *d= new Square();
    d->draw();
    Draw *n= new Circle();    // Can't access other methods of circle so, typecast it
    Circle *c=dynamic_cast<Circle*>(n);
    c->setRadius(10);

    delete d;
    delete c1;
    

    
    return 0;
}