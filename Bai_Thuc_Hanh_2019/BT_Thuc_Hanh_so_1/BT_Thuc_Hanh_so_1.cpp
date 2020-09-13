#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int MinTwoNum(int a, int b){
    return (a < b ? a : b);
}

int MaxTwoNum(int a, int b){
    return (a > b ? a : b);
}
    
int main(){
	int x;
	cout<<"May da thiet lap mot so bai toan (1->5)."<<endl;
	cout<<" - Bam phim 1 de lua chon giai bai toan 1"<<endl;
	cout<<" - Bam phim 2 de lua chon giai bai toan 2"<<endl;
	cout<<" - Bam phim 3 de lua chon giai bai toan 3"<<endl;
	cout<<" - Bam phim 4 de lua chon giai bai toan 4"<<endl;
	cout<<" - Bam phim 5 de lua chon giai bai toan 5"<<endl;
	cout<<" - Bam phim 0 de lua chon dong ung dung"<<endl;
	cout<<"\nNhap bai toan ban can giai: ";
	cin>>x;
	switch(x){
		case 1: cout<<"\nBai toan 1";
			int a, b;
			float x, y, S;
			cout<<"\nNhap hai so nguyen a va b: \n";
			cin>>a>>b;
			cout<<"Nhap hai so thuc x va y: \n";
			cin>>x>>y;
			S = 5*cos(3*x + 2) - log(x*x + 2) + sqrt(a*a + b*b) - (fabs(x - y))/(pow(a,6) + 1);
			cout<<"Giai: Tong S la: "<<S;
		break;
		case 2: cout<<"\nBai toan 2";
			float a1, b1, c1;
			cout<<"\nNhap 3 so thuc: \n";
			cin>>a1>>b1>>c1;
			cout<<"Giai:\n  So lon nhat la: "<<MaxTwoNum(MaxTwoNum(a1, b1), c1);
			cout<<"\n  So nho nhat la: "<<MinTwoNum(MinTwoNum(a1, b1), c1);
		break;
		case 3: cout<<"\nBai toan 3";
			float dtk;
			cout<<"\nYeu cau: nhap vao diem tong ket cua mot hoc sinh va in ra xep loai cho hoc sinh do voi quy dinh:"<<endl;
			cout<<"- Xep loai gioi neu tong diem tu 8.00 tro len."<<endl;
			cout<<"- Xep loai kha neu tong diem tu 7.00 toi can 8.00."<<endl;
			cout<<"- Xep loai trung binh neu tong diem tu 5.00 toi can 7.00."<<endl;
			cout<<"- Xep loai yeu neu tong diem tu 3.00 toi can 5.00."<<endl;
			cout<<"- Con lai, xep loai kem."<<endl;
			cout<<"\nNhap diem tong ket cua mot hoc sinh: ";
			cin>>dtk;
			if (dtk>=8.0)
				cout<<"gioi";
			else if (dtk>=7.0)	
				cout<<"kha";
			else if (dtk>=5.0)
				cout<<"trung binh";
			else if (dtk>=3.0)	
				cout<<"yeu";
			else 
				cout<<"kem";
		break;
		case 4: cout<<"\nBai toan 4";
			float a2, b2;
			cout<<"\nNhap 2 so a va b :";
			cin>>a2>>b2;
			if (a2 == 0) {
        		if (b2 == 0)
            		cout<<"Phuong trinh co vo so nghiem"<<endl;
        		else
            		cout<<"Phuong trinh vo nghiem"<<endl;
   			 }
    		else
        		cout<<"Phuong trinh co mot nghiem la x: "<<(float)-b2/a2<<endl;
		break;
		case 5: cout<<"\nBai toan 5:";
			int n;
			cout<<"\nNam nay la: 2020";
			cout<<"\nMoi ban nhap 1 thang bat ki trong nam nay: ";
			cin>>n;
			if (n==2)
				cout<<"Thang 2 co 29 ngay.";
			if (n==1 || n== 3 || n==5 || n==7 || n==8 || n==10 || n==12)
				cout<<"Thang "<<n<<" co 31 ngay.";
			if (n==4 || n==6 || n==9 || n==11)
				cout<<"Thang "<<n<<" co 30 ngay.";
		
		break;
		case 0: cout<<"Ban da bam phim 0, lua chon dong ung dung.HIHI"<<endl;
		break;
		default: cout<<"Ban da nhap sai";
	return 0;
	}
	cout<<"\nGOODBYE!";
}
