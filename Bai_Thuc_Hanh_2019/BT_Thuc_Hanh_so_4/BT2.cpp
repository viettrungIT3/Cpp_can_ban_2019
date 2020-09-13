#include <iostream>
using namespace std;
#define MAX 100

void InArr(int a[], char letter, int n)
{
	cout<<"Nhap vao mang "<<letter<<" voi "<<n<<" so nguyen theo thu tu tang: "<<endl;
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout<<"\ta["<<i<<"] = ";
			cin>>a[i];
		} while (a[i] <= a[i-1]);
	}
}

void OutArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout<<"\t"<<a[i];
}

void GopMang(int a[ ], int na, int b[ ], int nb,
		 int c[ ], int &nc)
{
	nc = 0;

	for (int i = 0; i < na; i++)
	{
		c[nc] = a[i]; nc++; 
	}
	nc=na;
	for (int i = 0; i < nb; i++)
	{
		c[nc] = b[i]; nc++; 
	}
}

void Sap_Xep_Tang(int a[], int n)
{
	int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

int main(int argc, char** argv) {
	int na, nb, nc;
	int a[MAX], b[MAX], c[2*MAX];
	do
	{
		cout<<"Nhap 2 so nguyen duong :"<<endl;
		cin>>na>>nb;
	} while ( na <= 0 || nb <= 0);
	InArr(a, 'A', na);
	InArr(b, 'B', nb);
	GopMang(a , na, b, nb, c, nc);
	Sap_Xep_Tang(c, na + nb);
	cout<<"Mang C sau khi  gop tu mang A va B."<<endl;
	cout<<"Va duoc sap xep la: ";
	OutArr(c, nc);
	
	return 0;
}
