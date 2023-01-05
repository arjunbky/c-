#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
}*p,u;

struct Rectangle *fun()
{
    
p=new Rectangle;
p->length=5;
p->breadth=10;

}

int  main() {
    struct Rectangle *ptr=fun();
    cout <<ptr->length <<endl<<ptr->breadth<< endl;
    return 0;
}
