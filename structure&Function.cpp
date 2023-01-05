#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


class Rectangle {
private:
    int length;
    int breadth;


public:
Rectangle(int l,int b){
length=l;
breadth=b;
}

 int area(){
    return length*breadth;
}

void changeLength(int l){
        length=l;
        cout<<length<<endl;
    }


};

    int main()
    {
        Rectangle p(10,20);
       
       p.area();
       cout<<p.area()<<endl;
       p.changeLength(44);
        return 0;
    }
    