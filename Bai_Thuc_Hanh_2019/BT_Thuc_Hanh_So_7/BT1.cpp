#include <iostream>
using namespace std;

int main()
{
    int *a;
    a = new int;
    float *x;
    x = new float;
    cout<<"Nhap so nguyen a : ";
    cin>>*a;
    cout<<"Nhap so thuc x : ";
    cin>>*x;
    cout<<"Dia chi cua a :"<<a<<endl;
    cout<<"Gia tri cua a: "<<*a<<endl;
    cout<<"Dia chi cua x: "<<x<<endl;
    cout<<"Gia tri cua x: "<<*x<<endl;

}