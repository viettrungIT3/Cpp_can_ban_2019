#include <bits/stdc++.h>
using namespace std;

void nhap(int &n){
	do{
		cout<<"Nhap so ho dan su dung dien:";
		cin>>n;
	} while(n <= 0);
}

void InPut(char Ho[][50], char Ten[][50], int n, int SoDien[])
{
    cout<<"Enter lish "<<n<<" family: "<<endl;
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout<<"Family "<<i+1<<": "<<endl;
        cout<<"\tNhap ho dem: ";
        gets(Ho[i]);
        cout<<"\tNhap ten: ";
        gets(Ten[i]);
        cout<<"\tNhap So kWh: ";
        cin>>SoDien[i];
    }
}

int catulate(int k){
    if(0< k <= 50){
        return k*1678;
    }
    if(k <= 100){
        return 50*1678 + (k-50)*1734;
    }
    if(k <= 200){
        return 50*1678 + 50*1734 + (k-100)*2014;
    }
    if(k <= 300){
        return 50*1678 + 50*1734 + 50*2014 + (k-150)*2536;
    }
    if(k <= 400){
        return 50*1678 + 50*1734 + 50*2014 + 50*2536 + (k-200)*2834;
    }
    if(k > 400){
        return 50*1678 + 50*1734 + 50*2014 + 50*2536 + 50*2834 + (k-250)*2927;
    }
    return 0;
}

void TienDien(char Ho[][50], char Ten[][50], int n, int SoDien[], int TD[])
{
    for (int i = 0; i < n; i++)
    {
        TD[i] = catulate(SoDien[i]);
    }
    
}

void case1( int STT[], char Ho[][50], char Ten[][50], int n, int SoDien[], int TD[])
{
    cout<<setw(5)<<"STT"<<setw(20)<<"Ho dem"<<setw(20)<<"Ten"<<setw(20)<<"So kWh tieu thu"<<setw(20)<<"Tien phai tra"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<setw(5)<<i+1<<setw(20)<<Ho[i]<<setw(20)<<Ten[i]<<setw(20)<<SoDien[i]<<setw(20)<<TD[i]<<endl;
    }
}

void case2( int n, int TD[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += TD[i];
    }
    cout<<"Tong tien dien: "<<sum;
}

void swap(int &m, int &n){
	int temp = m;
	m = n;
	n = temp;
}

void case3( int STT[], char Ho[][50], char Ten[][50], int n, int SoDien[], int TD[])
{
	int i, j, tg;
	char temp[50];
	for(i = 0; i < n; i++)
	{
		for( j = i; j < n; j++)
		{
			if(strcmp(Ten[i],Ten[j]) > 0)	
			{
				strcpy(temp,Ten[i]);
				strcpy(Ten[i],Ten[j]);
				strcpy(Ten[j],temp);
                strcpy(temp,Ho[i]);
				strcpy(Ho[i],Ho[j]);
				strcpy(Ho[j],temp);
				swap( STT[i], STT[j]);
				swap( SoDien[i], SoDien[j]);
				swap( TD[i], TD[j]);
			}
		}
	}
	cout<<"Danh sach sau khi da sap xep:"<<endl;
	case1( STT, Ho, Ten, n, SoDien, TD);
}

void case4(int STT[], char Ho[][50], char Ten[][50], int n, int SoDien[], int TD[])
{
    int max = TD[0] , vt;
    for (int i = 0; i < 5; i++)
    {
        if ( TD[i] > max )
        {
            max = TD[i];
        }
        
    }

    cout<<"Family SD dien nhieu nhat: "<<endl;
    cout<<setw(5)<<"STT"<<setw(20)<<"Ho dem"<<setw(20)<<"Ten"<<setw(20)<<"So kWh tieu thu"<<setw(20)<<"Tien phai tra"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<setw(5)<<i+1<<setw(20)<<Ho[i]<<setw(20)<<Ten[i]<<setw(20)<<SoDien[i]<<setw(20)<<TD[i]<<endl;
    }
}
void case5(int STT[], char Ho[][50], char Ten[][50], int n, int SoDien[], int TD[])
{
    int i,j=1;
	cout<<"Danh sach ho gia dinh co ten bat dau bang chu 'L' la :"<<endl;
	cout<<setw(5)<<"STT"<<setw(20)<<"Ho dem"<<setw(20)<<"Ten"<<setw(20)<<"So kWh tieu thu"<<setw(20)<<"Tien phai tra"<<endl;
	for(i=0;i<n;i++)
	{
		if(ten[i][0]=='L')
        {
            cout<<setw(5)<<i+1<<setw(20)<<Ho[i]<<setw(20)<<Ten[i]<<setw(20)<<SoDien[i]<<setw(20)<<TD[i]<<endl;
            j++;
        }
	}
}

int main()
{
    int n;
    nhap( n);
    char Ho[50][50], Ten[50][50];
    int STT[50], SoDien[50], TD[50];
    InPut( Ho,Ten, n, SoDien);
    cout<<"MENU:"<<endl;
	cout<<"\t1.Hien thi danh sach"<<endl;
	cout<<"\t2.Tong tien phai tra cua tat ca ca family"<<endl;
	cout<<"\t3.Sap xep danh sach theo ten"<<endl;
	cout<<"\t4.Hien thi danh sach nhung family SD nhieu dien nhat"<<endl;
	cout<<"\t5.Nhung family co ten bat dau bang 'L'"<<endl;
	cout<<"\t6.Chen them family moi vao vi tri thu 2 trong DS"<<endl;
    int choose;
	cout<<"\nNhap vao lua chon: ";
	cin>>choose;
    switch (choose)
    {
    case 1:
        case1( STT, Ho, Ten, n, SoDien, TD);
        break;
        
    case 2:
        case2( n, TD);
        break;
        
    case 3:
        case3( STT, Ho, Ten, n, SoDien, TD);
        break;

    case 4:
        case4( STT, Ho, Ten, n, SoDien, TD);
        break;
    
    case 5:
        case5( STT, Ho, Ten, n, SoDien, TD);
        break;
        
    case 6:
        
        break;
    
    default:
        break;
    }
}