#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cout<<"Eneter string: ";
    getline( cin, str);
    cout<<"Display string: ";
    cout<<str;
    int dem = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'K')
        {
            dem++;
        }
    }
    char c;
    cout<<"Nhap ki tu muon xoa: ";
    gets( c);
    for (int i = 0; i < str.length(); i++)
    {
        if ( str[i] == int(c)) 
        {
            str.erase( 0, 1);
        }
    }
    cout<<"string sau khi xoa: "<<str<<endl;
    return 0;
}
