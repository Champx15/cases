#include<iostream>
class Timer{
private:
    int seconds;
public:
   Timer(){
      seconds=0;
   }
   void start(){
    std::cout<<"Time is started"<<std::endl;
   }
   void tick(){
    seconds++;
    std::cout<<"It has been "<<seconds<<" seconds now"<<std::endl;
   }
   void reset(){
    std::cout<<"Time is reset";
    seconds=0;
   }
};
int  main(){
    Timer t1;
    t1.start();
    t1.tick();t1.tick();t1.tick();
    t1.reset();
    return 0;
}