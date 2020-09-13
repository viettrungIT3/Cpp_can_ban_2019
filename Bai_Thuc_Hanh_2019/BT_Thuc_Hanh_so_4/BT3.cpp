#include <iostream>
using namespace std;
#define MAX 100

void nhapDL( int a[][MAX], int m, int n)
{
	cout<<"Nhap diem kiem tra 3 mon cua "<<m<<" hoc sinh (diem theo thang diem 10)."<<endl;
	for (int i = 0; i < m; i++)
	{
		cout<<"Student "<<i+1<<":"<<endl;
		for (int j = 0; j < n; j++)
			cin>>a[i][j];
	}
}

float Gan_TBC( int a[][MAX],float TBC[], int m, int n)
{
	int ic = 0;
	for (int i = 0; i < m; i++)
	{
		int tbc = 0;
		for (int j = 0; j < n; j++)
			{
				cout<<"\t"<<a[i][j];
				tbc += a[i][j];
			}
		TBC[ic] = (float)tbc/3;
		ic++;
	}
}

void Chon_1( int a[][MAX],float TBC[], int m, int n)
{
	cout <<"\nDiem kiem tra 3 mon va diem TBC cua "<<m<<" hoc sinh la:"<<endl;
	for (int i = 0; i < m; i++)
	{
		int tbc = 0;
		cout<<"Student "<<i+1<<": "<<endl;
		cout<<" - Diem 3 mon: ";
		for (int j = 0; j < n; j++)
			{
				cout<<"\t"<<a[i][j];
				tbc += a[i][j];
			}
		cout<<"\n - Diem TBC: "<<TBC[i];
		cout<<endl;
	}
}

void Chon_2(float TBC[], int m)
{
	float max = TBC[0];
	for (int i = 0; i < m; i++)
		if (max < TBC[i])
			max = TBC[i];
	cout<<"HS co diem TB cao nhat:"<<endl;
	for ( int i = 0; i < m; i++)
		if ( max == TBC[i])
			cout<<"Student "<<i+1<<endl;
}

void Chon_3 (int a[][MAX], float TBC[], int m, int n)
{
	cout<<"TB cua cac mon hoc:";
	for (int i = 0; i < n; i++)
	{
		int Tm = 0;
		for (int j =0; j<m; j++)
			Tm += a[j][i];
		cout<<"\nsubject "<<i+1<<": "<<(float)Tm/3;
	}
	int Ttb = 0;
	for (int i = 0; i < m; i++)
		Ttb += TBC[i];
	cout<<"\nDiem TB chung: "<<Ttb/m;
}

int main(){
	int m, a[MAX][MAX];
	float TBC[MAX];
	do
		{
			cout<<"Nhap so hs tham gia kiem tra: ";
			cin>>m;
		} while ( m <= 0  || m > MAX );
		nhapDL( a, m, 3);
		Gan_TBC( a, TBC, m, 3);
	while (true)
	{
		cout<<"\n***************MENU***************"<<endl;
		cout<<" - Bam chon 1 de Hien thi mang len man hinh diem kiem tra 3 mon cua n hoc sinh cung voi diem trung binh (diem trung binh la trung binh cong cua cac diem kiem tra)."<<endl;
		cout<<" - Bam chon 2 de Tim va in ra man hinh nhung hoc sinh co diem trung binh cao nhat."<<endl;
		cout<<" - Bam chon 3 de Tinh va in ra man hinh diem trung binh chung cua cac mon kiem tra va diem trung binh chung cua diem trung binh cua tat ca n hoc sinh."<<endl;
		cout<<" - Bam chon 4 de sap xep danh sach theo chieu giam dan cua diem trung binh."<<endl;
		cout<<" - Bam chon 0 de dong ung dung."<<endl;
		int choose;
		cout<<"Moi ban chon: ";
		cin>>choose;
		switch (choose)
		{
			case 1: 
				Chon_1( a, TBC, m, 3);
				break;
			case 2:
				Chon_2(TBC, m);
				break;
			case 3:
				Chon_3( a, TBC, m, 3);
				break;
			case 0:
				exit(0);
				break;
			default :
				cout << "HIHI! Ban da bam phim sai :))";
		}
		char c;
		cout<<"Ban muon thuc hien lai khong(c/k)";
		cin>>c;
		if ( c == 'k' )
			break;
	}
	cout<<"GOODBYE!";
	return 0;

}
