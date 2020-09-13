#include <bits/stdc++.h>
#include <string.h>
using namespace std;

// Chuyển đổi chuỗi str sang dạng IN HOA hoặc in thường.

int main(int argc, char const *argv[])
{
    char str[25] = "OBAMA hahaha ali33";
    cout<<"str: ";
    puts(str);
    int n = strlen(str);
    cout<<"In hoa:"<<strupr(str);
    cout<<"\nIn thuong:"<<strlwr(str);
    return 0;
}
