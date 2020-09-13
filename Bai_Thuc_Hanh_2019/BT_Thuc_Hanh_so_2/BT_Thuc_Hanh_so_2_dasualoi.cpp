#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int gt(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * gt(n - 1));
}

double Tinh_F(int n)
{
    double S = 1;
    if (n % 2 == 1)
        return sqrt(pow(n, 2) + 1);
    else
    {
        for (int i = 1; i <= n; i++)
            S += 1.0 / pow(2, i);
        return S;
    }
}

int UCLN(int a, int b)
{
    if (a * b == 0)
        return a + b;
    if (a > b)
        return UCLN(a - b, b);
    else
        return UCLN(a, b - a);
}

int UCLN_c2(int a, int b)
{
    int r = a % b;
    if (r == 0)
        return b;
    else
    {
        a = b;
        b = r;
        return UCLN_c2(a, b);
    }
}

int Tien_Dien(int k)
{
    if (k <= 50)
    {
        return k * 1678;
    }
    if (k <= 100)
    {
        return 50 * 1678 + (k - 50) * 1734;
    }
    if (k <= 200)
    {
        return 50 * 1678 + 50 * 1734 + (k - 100) * 2014;
    }
    if (k <= 300)
    {
        return 50 * 1678 + 50 * 1734 + 50 * 2014 + (k - 150) * 2536;
    }
    if (k <= 400)
    {
        return 50 * 1678 + 50 * 1734 + 50 * 2014 + 50 * 2536 + (k - 200) * 2834;
    }
    if (k > 400)
    {
        return 50 * 1678 + 50 * 1734 + 50 * 2014 + 50 * 2536 + 50 * 2834 + (k - 250) * 2927;
    }
    return 0;
}

void nhap_So_kWh(int a[], int b[], int n)
{
    cout << "Nhap so kWh gio dien cho " << n << " ho gia dinh:" << endl;
    cout << "Ho gia dinh thu nhat: ";
    cin >> a[1];
    b[1]=Tien_Dien(a[1]);
    for (int i = 2; i <= n; i++)
    {
        cout << "Ho gia dinh thu " << i << ": ";
        cin >> a[i];
        b[i] = Tien_Dien(a[i]);
    }
    cout << "Da nhap xong so kWh gio dien cua " << n << " ho gia dinh." << endl;
}

void hiem_Thi_So_kWh_va_so_tien(int a[], int b[], int n)
{
    cout << "Danh sach so kwh dien tieu thu cua n ho gia dinh va so tien dien phai tra cua ho:" << endl;
    cout << "Ho gia dinh thu nhat: " << a[1] << " kWh tieu thu va so tien dien phai tra la: " << b[1] << endl;
    for (int i = 2; i <= n; i++)
    {
        cout << "Ho gia dinh thu " << i << ": " << a[i] << " kWh tieu thu va so tien dien phai tra la: " << b[i] << endl;
    }
}

void Min(int a[], int n)
{
    int m = Tien_Dien(a[1]);
    int vt = 1;
    for (int i = 2; i <= n; i++)
    {
        if (m > Tien_Dien(a[i]))
        {
            m = Tien_Dien(a[i]);
            vt = i;
        }
    }
    cout << "Ho gia dinh co it tien dien nhat la: ho " << vt << " voi so tien la: " << m;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Sap_Xep(int a[], int b[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
        for (j = i + 1; j <= n; j++)
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
}

void Sap_Xep_Tang(int A[], int B[], int n)
{
    cout << "Ds ho gia dinh su dung tien dien theo thu tu tang la:" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << "Ho gia dinh thu nhat: voi so tien la: " << Tien_Dien(A[1]) << endl;
        else
            cout << "Ho gia dinh thu " << i << ": " << A[i] << " kWh tieu thu va so tien dien phai tra la: " << Tien_Dien(A[i]) << endl;
    }
}

int Dem_So_Chu_So(int n)
{
    if (n == 0)
        return 0;
    return 1 + Dem_So_Chu_So(n / 10);
}

int main(int argc, char **argv)
{
    int x;
    cout << "May da thiet lap mot so bai toan (1->6)." << endl;
    cout << " - Bam phim 1 de lua chon giai bai toan 1" << endl;
    cout << " - Bam phim 2 de lua chon giai bai toan 2" << endl;
    cout << " - Bam phim 3 de lua chon giai bai toan 3" << endl;
    cout << " - Bam phim 4 de lua chon giai bai toan 4" << endl;
    cout << " - Bam phim 5 de lua chon giai bai toan 5" << endl;
    cout << "\nNhap bai toan ban can giai: ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "\nBai toan 1"; //Em khong biet lam 2 tham chieu
        int n;
        do
        {
            cout << "\nNhap so nguyen duong n: ";
            cin >> n;
        } while (n <= 0);
        cout << "KQ: " << n << "!" << gt(n);
        break;

    case 2:
        cout << "\nBai toan 2"; //Bai nay thieu du lieu n>0, nen em da bo sung.
        int N;
        do
        {
            cout << "\nNhap so nguyen n:";
            cin >> N;
        } while (N <= 0);
        cout << "Gia tri bieu thuc F=" << Tinh_F(N);
        break;

    case 3:
        cout << "\nBai toan 3";
        int a, b;
        do
        {
            cout << "\nNhap 2 so nguyen duong a va b:\n";
            cin >> a >> b;
        } while (a <= 0 || b <= 0);
        cout << "UCLN(" << a << "," << b << ")=" << UCLN(a, b) << endl;
        cout << "UCLN(" << a << "," << b << ")=" << UCLN_c2(a, b);
        break;

    case 4:
        cout << "\nBai toan 4";
        int n1, choose, A[100], B[100];
        do
        {
            cout << "\nNhap n la so ho gia dinh cua khu pho su dung dien sinh hoat (n<100):";
            cin >> n1;
        } while (n1 >= 100);
        nhap_So_kWh(A, B, n1);
        do
        {
            cout << "Menu:" << endl;
            cout << "Moi nguoi dung chon 1 trong cac chuc nang duoi day theo cach sau day:" << endl;
            cout << " - Bam chon 1 de Hien thi danh sach so kwh dien tieu thu cua n ho gia dinh len man hinh cung voi so tien dien phai tra moi ho gia dinh." << endl;
            cout << " - Bam chon 2 de Cho biet ho gia dinh nao phai tra it tien nhat so tien do la bao nhieu. " << endl;
            cout << " - Bam chon 3 de Sap xep danh sach theo chieu tang dan cua so kwh dien tieu thu hien thi danh sach co ca tien dien phai tra. " << endl;
            cout << "Bam chon 0 de quay lai menu chinh." << endl; //Em sua lai: Bam 0 de quay lai tu dau
            cin >> choose;
            switch (choose)
            {
            case 1:
                hiem_Thi_So_kWh_va_so_tien(A, B, n1);
                break;
            case 2:
                Min(A, n1);
                break;
            case 3:
                Sap_Xep(A, B, n1);
                hiem_Thi_So_kWh_va_so_tien(A, B, n1);
            default:
                break;
            }
        } while (choose == 0);
        break;

    case 5:
        cout << "\nBai toan 5:";
        int n2;
        do
        {
            cout << "\nNhap so nguyen duong n: ";
            cin >> n2;
        } while (n2 <= 0);
        cout << "So nguyen duong " << n2 << " co " << Dem_So_Chu_So(n2) << " chu so.";
        int k;
        do
        {
            cout << "\nNhap so nguyen duong k: ";
            cin >> k;
        } while (k <= 0);
        cout << "So nguyen duong " << k << " co " << Dem_So_Chu_So(k) << " chu so.";
        break;
    default:
        cout << "HIHI! Ban da bam phim sai :))";
    }
    cout << "\n\nGOODBYE! See you again:))";
    return 0;
}

