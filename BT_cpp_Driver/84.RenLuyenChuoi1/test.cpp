#include <iostream>;
#include <string.h>
using namespace std;

/*Viết chương trình nhập một chuỗi ký tự từ bàn phím,
xuất ra màn hình bảng mã ASCII của từng ký tự vừa nhập vào
(gợi ý mỗi ký tự trên một dòng)*/

int main()
{
    char *str;
    cout<<"Nhap str:";
    gets(str);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        char c = *(str+i);
        int ascii = (int)c;
        cout<<c<<" =>"<<ascii<<endl;
    }
    
    return 0;
}

