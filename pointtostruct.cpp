#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct rec{
    int x;
    int y;
};

int main(){
    
    rec r={1,2};
  struct rec *p=&r;

  cout<<p->x<<endl;
 cout<<p->y<<endl;
  cout<<r.x<<endl;
}