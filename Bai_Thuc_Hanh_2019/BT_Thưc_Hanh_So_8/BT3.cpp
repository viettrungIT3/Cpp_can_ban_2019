#include <iostream>
#include <string.h>
using namespace std;

int demkhoangtrang(char *str) 
{ 
    int n = strlen(str);
	int i, dem = 0;
	if(str[0] !=' ')
		dem = 1;
	for( i = 0; i < n-1; i++)
	{
		if(str[i]==' ' && str[i+1]!=' ')
			dem++;
	}
    return dem-1; 
}

int demkitu(char *str1,char *str2) 
{ 
	int d=0; 
	while(strstr(str1, str2) != NULL) 
	{ 
		d++; 
		str1 = strstr(str1, str2)+1;
	}
	return d;
}

void timkitu2(char *str1,char *str2) 
{ 
    int dem = 0, vt, i;
    char s[1];
    if ( demkitu(str1, str2) == 0)
    {
        cout<<"\nKet qua: khong co."; 
    }
    else
    {
        cout<<"\nKet qua: ";
        for ( i = 0; i < strlen(str1); i++)
        {
        	while (strstr(str1, str2) != NULL)
        	{
        		dem++;
			}
        	strcpy(s, str1) ;
            if ( strstr(str1, str2) != NULL)
            {
                cout<<dem<<"  ";
            }
            
        }

    }
    
}
		 
int main()
{
    char str[100], m[1];
    cout<<"Nhap xau bat ky: ";
    gets( str);
    cout<<"Xau vua nhap:";
    puts(str);
    cout<<"\nSo Khoang trang: "<<demkhoangtrang( str);
    cout<<"\nNhap kis tu: ";
    gets( m);
    //timkitu( str, m);
    cout<<demkitu(str, m);
    timkitu2(str, m);
}