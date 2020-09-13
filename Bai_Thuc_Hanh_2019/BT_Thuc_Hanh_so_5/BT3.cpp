#include <iostream>
#include <string.h>
using namespace std;

void case2( char str[])
{
    int dem = 0;
    for(int i = 0; i < strlen(str); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z') 
			dem++;
	}
    cout<<"\nSo chu cai In: "<<dem;
}

void case3( char str[], int n)
{
    char c;
    cout<<"Nhap 1 ky tu:";
    gets(c);
    
}

int main()
{
    int choose;
	char str[25];
    fflush (stdin);
    cout<<"Nhap mot chuoi ky tu bat ky:";
    gets( str);
    int n = strlen( str);
    cout<<"**************MENU***************"<<endl;
    cout<<"Moi ban chon: ";
    cin>>choose;
    switch (choose)
    {
    case 2:
        case2(str);
        break;
    
    default:
        break;
    }
}