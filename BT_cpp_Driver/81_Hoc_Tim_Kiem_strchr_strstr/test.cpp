#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char *p, str1[25], str2[25];
    cout<<"Nhap str1:";
    gets(str1);
    p = strchr( str1, 'l');
    int vt = p - str1;
    if (p == NULL)
    {
        cout<<"Ki tu 'l' khong co trong chuoi str1.";
    }
    else
    {
        cout<<"Ki tu 'l' co trong chuoi str1,";
        cout<<" o vi tri: "<<vt+1<<endl;
    }
    cout<<"Nhap str2:";
    gets(str2);
    char *p2 = strstr(str1, str2);
    int vt2 = p2 - str2;
    if ( p == NULL)
    {
        cout<<"chuoi str2 khong co trong str1.";
    }
    else
    {
        cout<<"Chuoi str2 co trong str1, o vi tri:"<<vt2+1<<endl;
    }
     
    return 0;
}
