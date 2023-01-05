#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void swapv(int a,int b){
    int temp =a;
    a=b;
    b=temp;
cout <<"swx= "<<a<< endl;
cout<<"swy= "<<b<<endl;
    
}
void swapa(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
cout <<"swx= "<<*a<< endl;
cout<<"swy= "<<*b<<endl;
}
void swapr(int &x,int &y){
    int temp =x;
    x=y;
    y=temp;
cout <<"swx= "<<x<< endl;
cout<<"swy= "<<y<<endl;
    
}
int main(){

    int x=5;
    int y=10;
    //PASS BY VALUE CODE
    //pass by value , will not modify the parameter in main function, will only change in the specific function as seen in swapvx,swapvy
//----------------------------------------- 

swapv(x,y);
cout <<"swapvx= "<<x<< endl;
cout<<"swapvy= "<<y<<endl;
//------------------------------------------
    //PASS BY ADDRESS
    //pass by address , will modify the parameter in main function,  as seen in swapax,swapay
//------------------------------------------
swapa(&x,&y);
cout <<"swapax= "<<x<< endl;
cout<<"swapay= "<<y<<endl;
//-------------------------------------------
    //PASS BY reference
    //pass by reference , will modify the parameter in main function,  as seen in swapax,swapay
//------------------------------------------
int q=5;
int o=10;
swapr(q,o);
cout <<"swaprx= "<<q<< endl;
cout<<"swapry= "<<o<<endl;
//-------------------------------------------

}