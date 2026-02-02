#include<iostream>
using namespace std;
class rectangle{
    private:
    int width;
    int height;
    int Area;
    public:
    void getdata(){
        cout<<"Enter value of width";
        cin>>width;
        cout<<"Enter value  height ";
        cin>>height;
    }
    void CalculateArea(){
        Area=width*height;
        cout<<"calculated area is ";
        cout<<Area;
    }
};
    int main(){
        rectangle r;
        r.getdata();
        r.CalculateArea();
    }
