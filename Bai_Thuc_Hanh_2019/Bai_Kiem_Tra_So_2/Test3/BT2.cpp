#include <iostream>
#include <string.h>
using namespace std;

void dem(char str[]){
	int i, n=strlen(str), dem=0;
	for(i=0;i<n;i++){
		if(str[i]>='0'&&str[i]<='9'){
			dem++;
		}
	}
	cout<<"xau vua nhap co: "<<dem<<" chu so"<<endl;
}

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
    char str[100];
    
    cout<<"Nhap Str: ";
    gets( str);
    cout<<"Str vua nhap:";
    puts(str);
    dem(str);
    if ( ktdoixung(str))
    {
        cout<<"STr co doi xung.";
    }
    else
    {
        cout<<"Str khong doi xung.";
    }
}
