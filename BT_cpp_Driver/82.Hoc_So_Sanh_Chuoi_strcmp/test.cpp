#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char str1[25], str2[25];
    cout<<"Nhap str1:";
    gets( str1);
    cout<<"Nhap str2:";
    gets(str2);
    int ss = strcmp( str1, str2);
    if ( ss == 0 )
    {
        cout<<"str1 giong str2.";
    }
    if ( ss > 0 )
    {
        cout<<"str1 > str2.";
    }
    if ( ss < 0 )
    {
        cout<<"str1 < str2";
    }
    
    return 0;
}
