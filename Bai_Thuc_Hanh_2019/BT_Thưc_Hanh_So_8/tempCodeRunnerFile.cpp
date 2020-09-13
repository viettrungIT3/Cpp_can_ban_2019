#include <iostream>
#include <malloc.h>
using namespace std;

void nhap(int *n)
{
    do
    {
        cout<<"Enter n:";
        cin>>*n;
    } while ( *n <= 0);
}

void InArr( int *a, int n)
{
    cout<<"Nhap vao mang "<<n<<" so nguyen: "<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" :";
        cin>>*(a+i);
    }
}

void OutArr( int *a, int n)
{
    for ( int i = 0; i < n; i++)
        cout<<"\t"<<*(a+i);
}

void findMin( int *a, int n)
{
    int vt, *min = a;         
    for(int  i = 1; i < n; i++)
    {            
        if(*min < *(min+i)) 
        {
            *min = *(min+i);
        }
 