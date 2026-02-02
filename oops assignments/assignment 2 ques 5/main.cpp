#include<iostream>
using namespace std;
class complex{
        int a;//real
        int b;//imaginary
        int sum;
    public:
    void setcomplex(int v1, int v2){
        a=v1;
        b=v2;
       
    } 
    void displaycomplex(){
        cout<<"the complex number formed is";
       cout<<a<<"+"<<b<<"i"<<endl;
        
    }
    void sumcomplex(complex o1,complex o2){
        a= o1.a + o2.a;
        b= o1.b+ o2.b;
         cout<<"sum is"<<a<<"+"<<b<<"i"<<endl;   
    }
};
int main(){
    complex c1,c2,c3;
    c1.setcomplex(2,4);
    c1.displaycomplex();
    c2.setcomplex(4,5);
    c2.displaycomplex();
    c3.sumcomplex(c1,c2);
   
    
    
}