#include <bits/stdc++.h>
using namespace std;

void List(char HH[][50], int SL[], int DG[])
{
    cout<<"Nhap ds hang hoa: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        cout<<"Hang hoa "<<i+1<<": "<<endl;
        cout<<"\tNhap ten hang: ";
        gets(HH[i]);
        cout<<"\tNhap SL: ";
        cin>>SL[i];
        cout<<"\tNhap DG: ";
        cin>>DG[i];
    }
}

void Tien(int SL[], int DG[], int TT[])
{
    for (int i = 0; i < 5; i++)
    {
        TT[i] = SL[i] * DG[i];
    }
    
}

void case1( int STT[], char HH[][50], int SL[], int DG[], int TT[])
{
    cout<<setw(5)<<"STT"<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<setw(5)<<i+1<<setw(20)<<HH[i]<<setw(20)<<SL[i]<<setw(20)<<DG[i]<<setw(20)<<TT[i]<<endl;
    }
}

void case2( int TT[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += TT[i];
    }
    cout<<"Tong tien: "<<sum;
}

void swap(int &m, int &n){
	int temp = m;
	m = n;
	n = temp;
}

void case3(int STT[], char HH[][50], int SL[], int DG[], int TT[])
{
	int i, j, tg;
	char temp[50];
	for(i = 0; i < 5; i++)
	{
		for( j = i; j < 5; j++)
		{
			if(strcmp(HH[i],HH[j]) > 0)	
			{
				strcpy(temp,HH[i]);
				strcpy(HH[i],HH[j]);
				strcpy(HH[j],temp);
				swap( STT[i], STT[j]);
				swap( SL[i], SL[j]);
				swap( DG[i], DG[j]);
				swap( TT[i], TT[j]);
			}
		}
	}
	cout<<"Danh sach sau khi da sap xep:"<<endl;
	case1(STT, HH, SL, DG, TT);
}

void case4(int STT[], char HH[][50], int SL[], int DG[], int TT[])
{
    int min = SL[0] , vt;
    for (int i = 0; i < 5; i++)
    {
        if ( SL[i] < min )
        {
            min = SL[i];
        }
        
    }

    cout<<"Hang hoa co so luong it nhat: "<<endl;
    cout<<setw(5)<<"STT"<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
    for (int i = 0; i < 5; i++)
    {
        if ( SL[i] == min )
        {
            cout<<setw(5)<<i+1<<setw(20)<<HH[i]<<setw(20)<<SL[i]<<setw(20)<<DG[i]<<setw(20)<<TT[i]<<endl;
        }
        
    }
    
}

void case5(int STT[], char HH[][50], int SL[], int DG[], int TT[])
{
    cout<<"Xoa hang hoa co so luong bang 0: "<<endl;
    cout<<setw(5)<<"STT"<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
    for (int i = 0; i < 5; i++)
    {
        if ( SL[i] != 0 )
        {
            cout<<setw(5)<<i+1<<setw(20)<<HH[i]<<setw(20)<<SL[i]<<setw(20)<<DG[i]<<setw(20)<<TT[i]<<endl;
        }
        
    }
    
}

void case6(int STT[], char HH[][50], int SL[], int DG[], int TT[])
{
    cout<<"Nhap hang hoa moi:"<<endl;
    cout<<"\tNhap ten hang: ";
    fflush(stdin);
    gets(HH[5]);
    cout<<"\tNhap SL: ";
    cin>>SL[5];
    cout<<"\tNhap DG: ";
    cin>>DG[5];
    TT[6] = SL[6]*DG[6];
    cout<<"Hiem thi:"<<endl;
    cout<<setw(5)<<"STT"<<setw(20)<<"Ten hang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<setw(5)<<i+1<<setw(20)<<HH[i]<<setw(20)<<SL[i]<<setw(20)<<DG[i]<<setw(20)<<TT[i]<<endl;
    }
}


int main(){
	char HH[5][50];
	int STT[50], SL[50], DG[50], TT[50];
	List(HH, SL, DG);
	Tien(SL, DG, TT);
    cout<<"MENU:"<<endl;
	cout<<"\t1.Tinh thanh tien va hien thi danh sach hang hoa";
	cout<<"\t2.Tinh tong tien cua tat ca cac loai hang hoa";
	cout<<"\t3.Sap xep danh sach hang hoa theo thu tu tu dien";
	cout<<"\t4.Hien thi nhung hang hoa co so luong it nhat";
	cout<<"\t5.Xoa cac hang hoa co so luong bang 0 va hien thi danh sach";
	cout<<"\t6.Nhap them mot hang hoa moi vao cuoi danh sach va hien thi danh sach";
	int choose;
	cout<<"\nNhap vao lua chon: ";
	cin>>choose;
    switch (choose)
    {
    case 1:
        case1( STT, HH, SL, DG, TT);
        break;
        
    case 2:
        case2( TT);
        break;
        
    case 3:
        case3( STT, HH, SL, DG, TT);
        break;

    case 4:
        case4( STT, HH, SL, DG, TT);
        break;
    
    case 5:
        case5( STT, HH, SL, DG, TT);
        break;
        
    case 6:
        case6( STT, HH, SL, DG, TT);
        break;
        
    default:
        break;
    }
}
