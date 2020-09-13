#include <iostream>
using namespace std;

void nhap(int *n)
{
    do
    {
        cout<<"Nhap so nguyen duong n thoa man 1<n<50:";
        cin>>*n;
    } while ( *n <= 1 || *n >= 50);
}

char nhapTorH(char &letter)
{
    cout<<"Chon T de tinh tong"<<endl;
    cout<<"Chon H de tinh hieu"<<endl;
    do
    {
        cout<<"Moi ban lua chon 'T' or 'H : ";
        cin>>letter;
    } while ( letter != 'T' && letter != 'H');
    return letter;
}

void Tinh( int n, char choose)
{
    float a, b, c;
    cout<<"Nhap 3 so thuc: "<<endl;
    cin>>a>>b>>c;
    if ( nhapTorH( choose) == 'T')
        cout<<"Tong: "<<(a+b+c);
    if ( nhapTorH( choose) == 'H')
        cout<<"Hieu: "<<(a-b-c);
    
}

int main()
{
    int n;
    nhap( &n);
    char ch;
    cout<<"Ket qua: ";
    Tinh( n, ch);

}
