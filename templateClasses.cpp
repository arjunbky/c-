#include <iostream>

using namespace std;
template <class T>
class Rectangle{

private:
T length;
T breadth;

public:

Rectangle();
Rectangle(T l,T b);

T area();
T perimeter();
T getLength();
void setLength(T l);
void setBreadth(T b);
T getBreadth();
~Rectangle();


};
template <class T>
Rectangle<T>::Rectangle(T l,T b){
this->length=l;
this->breadth=b;
}
template <class T>
T Rectangle<T>::area(){
    return length*breadth;
}
template <class T>
T Rectangle<T>::perimeter(){
    return 2*9(length+breadth);
}
template <class T>
T Rectangle<T>::getLength(){
    return length;
}
template <class T>
T Rectangle<T>::getBreadth(){
    return breadth;
}
template <class T>
void Rectangle<T>::setBreadth(T b){
    this->breadth=b;
}
template <class T>
void Rectangle<T>::setLength(T l){
    this->length=l;
}
template <class T>
Rectangle<T>::~Rectangle(){
    cout<<"destructor";
}


int  main() {
   Rectangle<int> r(10,1);
cout<<"AREA "<<r.area()<<endl;
r.setLength(10);
cout<<"length"<<r.getLength();




    return 0;
}