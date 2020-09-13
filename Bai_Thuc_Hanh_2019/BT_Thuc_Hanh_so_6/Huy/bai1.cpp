
#include <bits/stdc++.h>

using namespace std;

void Nhaphang(char ten[6][50],int SL[] ,int DG[] ,int TT[])
{
	cout<<"Nhap vao lan luot Ten hang , So luong , Don gia cua tung hang hoa :"<<endl;
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Hang hoa thu "<<i+1<<" :"<<endl;
		cout<<"Ten: ";
		fflush(stdin);
		gets(ten[i]);
		cout<<"So luong : ";
		cin>>SL[i];
		cout<<"Don gia : ";
		cin>>DG[i];
		TT[i] = SL[i] * DG[i];
	}
}
void case1(char ten[6][50],int SL[] ,int DG[] ,int TT[],int Stt[])
{
	int i;
	cout<<setw(5)<<"STT"<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<setw(5)<<Stt[i]<<setw(20)<<ten[i]<<setw(20)<<SL[i]<<setw(20)<<DG[i]<<setw(20)<<TT[i]<<endl;
	}
}
void case2(int TT[])
{
	int i,T=0;
	for(i=0;i<5;i++)
	{
		T = T + TT[i];
	}
	cout<<"Tong thanh tien cua tat ca cac hang hoa la : "<<T;
}
void case3(char ten[6][50],int SL[] ,int DG[] ,int TT[],int Stt[])
{
	int i,j,tg;
	char temp[50];
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(strcmp(ten[i],ten[j])>0)	
			{
				strcpy(temp,ten[i]);
				strcpy(ten[i],ten[j]);
				strcpy(ten[j],temp);
				tg = SL[i];
				SL[i] = SL[j];
				SL[j] = tg;
				tg = DG[i];
				DG[i] = DG[j];
				DG[j] = tg;
				tg = TT[i];
				TT[i] = TT[j];
				TT[j] = tg;
			}
		}
	}
	cout<<"Danh sach sau khi da sap xep :"<<endl;
	case1(ten,SL,DG,TT,Stt);
}
void case4(char ten[6][50],int SL[])
{
	int i, min = SL[0];
	for(i=1;i<5;i++)
	{
		if(min>SL[i]) min = SL[i];
	}
	cout<<"Danh sach hang hoa co so luong it nhat :"<<endl;
	cout<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<endl;
	for(i=0;i<5;i++)
	{
		if(SL[i] == min)
		{
			cout<<setw(20)<<ten[i]<<setw(20)<<SL[i]<<endl;
		}
	}
}
void case5(char ten[6][50],int SL[] ,int DG[] ,int TT[],int Stt[])
{
	int i,j,n=5;
	for(i=0;i<n;i++)
	{
		if(SL[i]==0)
		{
			for(j=i;j<n;j++)
			{
				strcpy(ten[j],ten[j+1]);
				SL[j] = SL[j+1];
				DG[j] = DG[j+1];
				TT[j] = TT[j+1];
			}
			i--;
			n--;
		}
	}
	cout<<"Danh sach hang hoa sau khi xoa cac loai hang co so luong bang 0 la : "<<endl;
	cout<<setw(5)<<"STT"<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<setw(5)<<Stt[i]<<setw(20)<<ten[i]<<setw(20)<<SL[i]<<setw(20)<<DG[i]<<setw(20)<<TT[i]<<endl;
	}
}
void case6(char ten[6][50],int SL[] ,int DG[] ,int TT[],int Stt[])
{
	cout<<"Nhap vao lan luot Ten hang , So luong , Don gia cua hang hoa moi :"<<endl;
	cout<<"Ten: ";
	fflush(stdin);
	gets(ten[5]);
	cout<<"So luong : ";
	cin>>SL[5];
	cout<<"Don gia : ";
	cin>>DG[5];
	TT[5] = SL[5] * DG[5];
	int i;
	cout<<setw(5)<<"STT"<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
	for(i=0;i<6;i++)
	{
		cout<<setw(5)<<Stt[i]<<setw(20)<<ten[i]<<setw(20)<<SL[i]<<setw(20)<<DG[i]<<setw(20)<<TT[i]<<endl;
	}
}
void Thuchien()
{
	int i;
	int Stt[10];
	for(i=0;i<10;i++)
	{
		Stt[i] = i+1;
	}
	char ten[6][50];
	int SL[6],DG[6] ,TT[6];
	Nhaphang(ten,SL,DG,TT);
	char letter;
	cout<<" Bam phim 1 de Hien thi danh sach hang hoa (co them cot thanh tien) "<<endl;
	cout<<" Bam phim 2 de Tinh tong thanh tien cua tat ca hang hoa va hien thi ket qua "<<endl;
	cout<<" Bam phim 3 de Sap xep danh sach theo ten hang hoa voi thu tu tu dien va hien thi ket qua "<<endl;
	cout<<" Bam phim 4 de Hien thi danh sach nhung hang hoa co so luong it nhat  "<<endl;
	cout<<" Bam phim 5 de Xoa cac hang hoa co so luong bang 0 va hien thi ket qua  "<<endl;
	cout<<" Bam phim 6 de Nhap thong tin mot loai hang hoa moi vao cuoi danh sach va hien thi ket qua "<<endl;
	cin>>letter;
	switch(letter)
	{
		case '1' : cout<<"Danh sach hang hoa vua nhap la : "<<endl;case1(ten,SL,DG,TT,Stt) ; break;
		case '2' : case2(TT) ; break;
		case '3' : case3(ten,SL,DG,TT,Stt) ; break;
		case '4' : case4(ten,SL) ; break;
		case '5' : case5(ten,SL,DG,TT,Stt) ; break;
		case '6' : case6(ten,SL,DG,TT,Stt) ; break;
	}
}
int main()
{
	Thuchien();
}
