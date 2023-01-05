#include <iostream>

using namespace std;

class Rectangle{


private:
int length;
int breadth;

public:

Rectangle(){
    length=0;
    breadth=0;   
}
Rectangle(int l,int b){
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;

}
int perimeter(){
    return 2*(length+breadth);
}
int getLength(){
    return length;
}
void setLength(int l){
    length=l;
}
void setBreadth(int b){
    breadth=b;
}
int getBreadth(){
    return breadth;
}
~Rectangle(){
    cout<<"destructor";
}


};


int  main() {
   Rectangle r(10,20);
cout<<"AREA "<<r.area()<<endl;


    return 0;
}