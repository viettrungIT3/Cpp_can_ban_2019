#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int n;
    cout<<"Nhap canh cua tam giac deu:";
	cin>>n;
    cout<<"Ve tam giac deu: \n";

    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<i; j++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
 
    return 0;
}
