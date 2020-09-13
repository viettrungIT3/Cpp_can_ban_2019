#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void SUM(int n, int &SumEven, int &SumOdd)	//SumEven: Tong chan, SumOdd: Tong le
{
	int S;
    for (int i = 0; i <= n; i++)
    {
    	if (i % 2 == 0)
    		SumEven += i;
    	else 
    		SumOdd += 1;
	}
	cout<<"Tong gia tri chan trong doan [1,"<<n<<"] la:"<<SumEven<<endl;
	cout<<"Tong gia tri le trong doan [1,"<<n<<"] la:"<<SumOdd;
}

bool ktSNT(int n)
{
    if (n < 2)
        return false;
    for (int i=2; i<=sqrt(n); i++)
	{
        if (n % i == 0)
            return false;
    }
    return true;
}
 
int Tong_SNT(int n){
	int T = 0;
	for (int i=0; i<=n; i++){
		if (ktSNT(i)==true)
			T += i;
	}
	return T;
}

int gt(int n){
	if(n==0)
		return 1;
	else 
		return (n*gt(n-1));
}

double Tinh_sin(float x){
	double s = 0;
	int i = 0;
	do{
		s += pow(-1, i)*pow(x, (2*i + 1))/gt(2*i + 1);
		i++;
	} while( abs(pow(x, (2*i + 1))/gt(2*i + 1)) >= 0.00001);
	return s;
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
			cout<<"\nNhap n = "; //Enter n:
			cin>>n;
			SUM(n, SumE, SumO);
		break;
		
		/*case 2: cout<<"\nBai toan 2";
			
		break;
		
		case 3: cout<<"\nBai toan 3";
			
		break;
		
		case 4: cout<<"\nBai toan 4";
			
		break;
		
		case 5: cout<<"\nBai toan 5:";
			
		break;
		case 6: cout<<"\nBai toan 6";
			
		break;
		
		case 7: cout<<"\nBai toan 7";
			
		break;
		
		case 0: cout<<"\nDong ung dung.";
			
		break;
		
		default: cout<<"HIHI! Ban da bam phim sai :))";*/
	}
	cout<<"\nGOODBYE!";
	return 0;
}
	
