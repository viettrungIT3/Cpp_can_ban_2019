#include <iostream>
using namespace std;

void nhap(int &n)
{
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( 5 >= n || n >= 30);
}

void InArr(int *a, int n)
{
    cout<<"Enter an array of n: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>*(a+i);
    }
}

void OutArr(int *a, int n)
{
    cout<<"Showing results: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<*(a+i);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    nhap( n);
    int *a = new int[n+5];
    
    return 0;
}
