#include <iostream>
using namespace std;
#define MAX 100

void nhap(int *m,int  *n)
{
    do
    {
        cout<<"Enter rows :";
        cin>>*m;
        cout<<"Enter clumns :";
        cin>>*n;
    } while ( *m <= 0 || *n <= 0);
}

void InMatrix(float a[][MAX], int m, int n)
{
    cout<<"Enter the matrix "<<m<<"x"<<n<<":"<<endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout<<"\t a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
}

void OutMatrix( float a[][MAX], int m, int n)
{
    for ( int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
            cout<<"\t"<<a[i][j];
        cout<<endl;
    }
}

void Min( float a[][MAX], int m, int n)
{
    float min = a[0][0];
    for ( int i = 0; i < m; i++)
        for ( int j = 0; j < n; j++)
            if ( min > a[i][j])
                min = a[i][j];
    cout<<"\nMin: "<<m;
}

void MaxColumns( float a[][MAX], int m, int n)
{
    for ( int j = 0; j < n; j++)
    {
        float max = a[0][j];
        for ( int i = 0; i < m; i++)
            if ( max < a[i][j])
                max = a[i][j];
        cout<<"\nMax columns "<<j+1<<": "<<max;
    }
}

void MaxSumColumns( float a[][MAX], float g[], int m, int n)
{
    int im = 0, vt;
    for ( int j = 0; j < n; j++)
    {
        float sum = 0;
        for ( int i = 0; i < m; i++)
            sum += a[i][j];
        g[im] = sum;
        im++;
    }
    float max = g[0];
    for ( int i = 1; i <= im; i++)
        if ( max < g[i])
            max = g[i];
    int i, j;
    for ( j = 0; j < n; j++)
    {
        float sum = 0;
        for ( i = 0; i < m; i++)
            sum += a[i][j];
        if ( max == sum )
        	vt = i;
    }
    cout<<"\nMax sum columns "<<vt+1<<": "<<max;
}

void MatrixChuyenVi( float a[][MAX], float b[][MAX], int m, int n)
{
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         b[j][i] = a[i][j];
      }
   }
}

int main(){
    int m, n, choose;
    float a[MAX][MAX], b[MAX][MAX], g[MAX];
    nhap( &m, &n);
    InMatrix( a, m, n);
    
    cout<<"***************MENU******************"<<endl;
    cout<<" - Bam phim 3 de hiem thi ma tran A. "<<endl;
    cout<<" - Bam phim 4 de tim phann tu nho nhat trong ma tran A. "<<endl;
    cout<<" - Bam phim 5 de tim phann tu nho nhat trong cac cot cua ma tran A. "<<endl;
    cout<<" - Bam phim 6 de tim cot co tong lon nhat."<<endl;
    cout<<" - Bam phim 7 de tim ma tran B la ma tran chuyen vi cua ma tran A."<<endl;
    cout<<"   Va nhan ma tran A voi matran B."<<endl;
    cout<<"Moi ban chon : ";
    cin>>choose;
    switch (choose) {
        case 3: cout<<"Ban vua chon 3. Xin cho giay lat: "<<endl;
            cout<<"Open Matrix: "<<endl;
            OutMatrix( a, m, n);
            break;
        case 4: cout<<"Ban vua chon 4. Xin cho giay lat: "<<endl;
            Min( a, m, n);
            break;
        case 5:cout<<"Ban vua chon 5. Xin cho giay lat: "<<endl;
            MaxColumns( a, m, n);
            break;
        case 6:cout<<"Ban vua chon 6. Xin cho giay lat: "<<endl;
            MaxSumColumns( a, g, m, n);
            break;
        case 7:cout<<"Ban vua chon 7. Xin cho giay lat: "<<endl;
            MatrixChuyenVi( a, b, m, n);
            cout<<"Matrix B :"<<endl;
            OutMatrix(b, n, m);
            break;
        default:
            break;
    }
}
