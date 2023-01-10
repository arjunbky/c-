#include <iostream>
using namespace std;

int  sum(int n){

    if (n>0)
    {
        return sum(n-1)+n;
        

    }
    

}

 int main() {
    int n;
    cout<< "ENTER  the walue upto which u want the sum : "<<endl;
    cin>> n;
    int add=sum(n);
    cout<<add<<endl;
    return 0;
}