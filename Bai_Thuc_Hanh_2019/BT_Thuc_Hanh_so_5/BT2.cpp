#include <iostream>
#include <string.h>
using namespace std;

void ChuThuong( char str[])
{
    int dem = 0;
    for(int i = 0; i < strlen(str); i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z') 
			dem++;
	}
    cout<<"\nSo chu cai thuong: "<<dem;
}

void XoaA( char str[])
{
    char str2[100];
	strcpy(str2,str);
	for(int i = 0; i < strlen(str2); i++)
	{
		if(str2[i]=='a')
		{
			for(int j = i; j <= strlen(str2); j++)
			{
				str2[j] = str2[j+1];
			}
			i--;
		}
	}
	cout<<"Chuoi  sau khi xoa het cac ki tu 'a' la : ";
	cout<<str2;
}

void soTu(char str[])
{
	int dem = 0;
	int i,j;
	for ( i = 0;i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			dem++;
			for ( j = i; j< strlen(str) ; j++)
			{
				if (str[j] == ' ') 
                break;
			}
			i=j;
		}
	}
	cout<<"So tu co trong chuoi vua nhap la : "<<dem<<endl;
}

void Y5(char str[])
{
	int i,j;
	for( i= 0; i < strlen(str); i++)
	{
		if(str[i]!=' ')
		{
			for( j = i ; j < strlen(str); j++)
			{
				cout<<str[j];
				if(str[j]==' ') break;
			}
			cout<<endl;
			i=j;
		}
	}
}

int main()
{
    int choose;
	char str[25];
    fflush (stdin);
    cout<<"Nhap mot chuoi ky tu bat ky:";
    gets( str);
    cout<<"**************MENU***************"<<endl;
	cout<<" - Bam phim 2 de cho biet chuoi str vua nhap co bao nhieu chu cai thuong."<<endl;
    cout<<" - Bam phim 3 de hien thi chuoi sau khi xoa tat ca moi ky tu ‘a’."<<endl;
	cout<<" - Bam phim 4 de biet so tu co trong chuoi."<<endl;
	cout<<" - Bam phim 5 de In moi tu trong chuoi str tren mot dong."<<endl;
    cout<<"Moi ban chon: ";
    cin>>choose;
    switch (choose)
    {
    case 2:
        ChuThuong( str);
        break;
        
    case 3:
        XoaA( str);
        break;
    
    case 4:
        soTu(str);
        break;

    case 5:
        Y5( str);
        break;

    default:
        break;
    }
}
