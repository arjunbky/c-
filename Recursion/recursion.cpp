#include <iostream>
using namespace std;

void func1(int x){
    //Tail Recursion 
    if (x>0)
    {
        cout << x<< endl;     
    func1(x-1);
}
    }
    
    
 void func2(int x){
    //Head Recursion
    if (x>0)
    {   
        func2(x-1);
    cout << x<< endl; 
    }
    
}
void func3(int x){
    if (x>0)
    {
        func3(x-1);
        func3(x-1);
        cout<<x<<endl;
    }
    
}

int main(){

int x=3;
// func1(x);
// func2(x);
func3(x);
}