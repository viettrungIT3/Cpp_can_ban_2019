#include <bits/stdc++.h>
#include <string.h>
using namespace std;

//Hàm chuyển đổi kí tự.

int main(int argc, char const *argv[])
{
    char str[25];
    strcpy(str,"OBAMA hahaha ali33");
    cout<<str<<endl;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        char c = str[i];
        putchar(toupper(c));    //chuyển đổi kí tự thường thành kí tự in hoa.
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        char c = str[i];
        putchar(tolower(c));    //chuyển đổi kí tự in hoa thành in thường.
    }
    return 0;
}
