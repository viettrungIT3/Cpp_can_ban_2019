#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void SUM (int n, int &SumEven, int &SumOdd)	//SumEven: Tong chan, SumOdd: Tong le
{
    for (int i = 0; i <= n; i++)
    {
    	if (i % 2 == 0)
    		SumEven += i;
    	else 
    		SumOdd += i;
	}
	cout<<"Tong gia tri chan trong doan [1,"<<n<<"] la:"<<SumEven<<endl;
	cout<<"Tong gia tri le trong doan [1,"<<n<<"] la:"<<SumOdd;
}

bool IsPrime (int n) //Prime: So nguyen to.
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
 
int SumPrime (int n, int &Sum_SNT)
{
	for (int i=0; i<=n; i++){
		if (IsPrime(i) == true)
			Sum_SNT += i;
	}
	return Sum_SNT;
}

int factorial (int n)
{	//factorial: giai thua
	if(n==0)
		return 1;
	else 
		return (n*factorial(n-1));
}

double Tinh_sin (float x)
{
	double s = 0;
	int i = 0;
	float epsilon;
	do
	{
		epsilon = pow( x, 2*i +1)*pow( x, 2*i +1)/factorial(2*i +1);
		s +=  pow(-1, i)*epsilon;
		i++;
	} while (epsilon >= 0.00001);
	return s;
}

float LuyThua (float x , int n)   
{   if(n == 0)                 
	    return 1;            
	if(n < 0)      
        return LuyThua(x,n+1) * 1/x;                 
	return LuyThua(x,n-1) * x;   
 }
 
void DaoNguocMang (float a[],int n)
{
   for(int i=0; i<n/2; i++)
    {
      int temp=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=temp; 
   }
}

void hiemThiMang1 (float a[], int n)
{
   for(int i = 0; i<n; i++)
   {
      cout<<"\t"<<a[i];
   }
}

void NhapMang(int a[ ], int n)
{

	for (int i = 0; i < n; i++)
	{
	 cout<<"a["<<i<<"]=";
	  cin>>a[i];			
      }
}


void hiemThiMang2 (int a[], int n)
{
   for(int i = 0; i < n; i++)
   {
      cout<<"\t"<<a[i];
   }
}

void SUM_2 (int a[], int n, int &SumEven, int &SumOdd, int &Sum3)
{
    for (int i = 0; i <= n; i++)
    {
    	if (a[i] % 2 == 0)
    		SumEven += a[i];
    	if (a[i] % 2 == 1) 
    		SumOdd += a[i];
    	if (a[i] % 3 == 0)
    		Sum3 += a[i];
	}
	cout<<"Tong gia tri chan trong mang tren la:"<<SumEven<<endl;
	cout<<"Tong gia tri le trong mang tren la:"<<SumOdd<<endl;
	cout<<"Tong gia tri chia het cho 3 trong mang tren la:"<<SumEven<<endl;
}

int SumPrime2 (int a[], int n, int &Sum_SNT)
{
	for (int i=0; i<=n; i++){
		if (IsPrime(i)==true)
			Sum_SNT += i;
	}
	return Sum_SNT;
}

int main(int argc, char** argv) {
	int choose;
	cout<<"May da thiet lap mot so bai toan (1->7)."<<endl;	//
	cout<<" - Bam phim 1 de lua chon giai bai toan 1"<<endl;
	cout<<" - Bam phim 2 de lua chon giai bai toan 2"<<endl;
	cout<<" - Bam phim 3 de lua chon giai bai toan 3"<<endl;
	cout<<" - Bam phim 4 de lua chon giai bai toan 4"<<endl;
	cout<<" - Bam phim 5 de lua chon giai bai toan 5"<<endl;
	cout<<" - Bam phim 6 de lua chon giai bai toan 6"<<endl;
	cout<<" - Bam phim 7 de lua chon giai bai toan 7"<<endl;
	cout<<" - Bam phim 0 de dong ung dung."<<endl;
	cout<<"\nNhap bai toan ban can giai: "; //Enter the problem to be solved:
	cin>>choose;
	switch(choose){
		case 1: cout<<"\nBai toan 1";	//Em khong biet lam 2 tham chieu
			int n, SumE = 0, SumO = 0;
			do
			{
				cout<<"\nNhap so nguyen duong n = "; //Enter n:
				cin>>n;
			} while (n <= 0);
			SUM(n, SumE, SumO);
		break;
		
		case 2: cout<<"\nBai toan 2";
			int N, Sum_SNT = 0;
			do
			{
				cout<<"\nNhap so nguyen duong n = ";
				cin>>N;
			} while (N <= 0);
			cout<<"Tong cac so nguyen to trong doan [1,"<<N<<"] la:"<<SumPrime(N, Sum_SNT);
		break;
		
		case 3: cout<<"\nBai toan 3";
			float x;
			cout<<"\nNhap so thuc x = ";
			cin>>x;
			cout<<"Sin("<<x<<") = "<<Tinh_sin(x);
		break;
		
		case 4: cout<<"\nBai toan 4";
			int n1;
			float x1;
			do
			{
				cout<<"\nNhap so nguyen duong n = "; 
				cin>>n1;
			} while (n1 <= 0);
			cout<<"Nhap so thuc x = ";
			cin>>x1;
			cout<<"Gia tri f(x,n) = x^n = "<<x1<<"^"<<n1<<" = "<<LuyThua(x1, n1);
		break;
		
		case 5: cout<<"\nBai toan 5:";
			float Arr[6] = {12.3, -45.4, 12, 15, 10.1, 12.5};
			cout<<"\nDay so x[] = ";
			hiemThiMang1( Arr, 6);
			cout<<" da duoc khoi tao."<<endl;
			DaoNguocMang(Arr, 6);
			cout<<"\nDao nguoc day x[] la: ";
			hiemThiMang1( Arr, 6);
		break;
		
		case 6: cout<<"\nBai toan 6";
			int n2, Arr2;
			do
			{
				cout<<"\nNhap so nguyen duong n = "; //Enter n:
				cin>>n2;
			} while (n2 <= 0);
			int SumE2 = 0, SumO2 = 0, SumC3 = 0;
			cout<<"\nNhap vao mang "<<n2<<" so nguyen: "<<endl;
			nhapMang(Arr2, n2);
			cout<<"\nMang vua nhap: ";
			hiemThiMang2(Arr2, n2);
			SUM_2(Arr, n2, SumE2, SumO2, SumC3)
		break;
		case 7: cout<<"\nBai toan 7";
			int n3, Arr3, S3 = 0;
			do
			{
				cout<<"\nNhap so nguyen duong n = "; //Enter n:
				cin>>n3;
			} while (n3 <= 0);
			cout<<"\nNhap vao mang "<<n3<<" so nguyen: "<<endl;
			nhapMang(Arr3, n3);
			cout<<"\nMang vua nhap: ";
			hiemThiMang2(Arr3, n3);
			cout<<"Tong cac so nguyen to trong mang tren la:"<<SumPrime2(Arr3, n3, S3);
		break;
		
		case 0: cout<<"\nDong ung dung.";
			
		break;
		
		default: cout<<"HIHI! Ban da bam phim sai :))";
	}
	cout<<"\nGOODBYE!";
	return 0;
}
	
