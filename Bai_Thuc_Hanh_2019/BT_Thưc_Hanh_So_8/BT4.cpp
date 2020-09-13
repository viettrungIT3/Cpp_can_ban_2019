#include <iostream>
#include <string.h>
using namespace std;

bool ktdoixung(char *s) 
{ 
    char c[255]; 
    strcpy(c,s); 
    if (strcmpi(s,strrev(c)) == 0) 
        return true; 
    else 
        return false; 
 } 

int main()
{
    char str1[100], str2[100], m[1];
    cout<<"Nhap Str1: ";
    gets( str1);
    cout<<"Str1 vua nhap:";
    puts(str1);
    cout<<"Nhap Str2: ";
    gets( str2);
    cout<<"Str2 vua nhap:";
    puts(str2);
    if ( ktdoixung(str1))
    {
        cout<<"STr1 cos doi xung.";
    }
    else
    {
        cout<<"Str1 khong doi xung.";
    }
    
    if ( ktdoixung(str2))
    {
        cout<<"STr2 cos doi xung.";
    }
    else
    {
        cout<<"Str2 khong doi xung.";
    }

}