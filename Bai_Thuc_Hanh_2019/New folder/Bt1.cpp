#include <bits/stdc++.h>
using namespace std;

int demchuso(int n)
{
    if ( n == 0 )
    {
        return 0;
    }
    return demchuso(n/10) + 1 ;
}

void demchuso2(int n)
{
    int temp = n;
    int dem;
    while ( n > 0)
    { 
        dem++;
        n /= 10;
    }
    cout<<"So "<<temp<<"co "<<dem<<"chu so.";
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n <= 0);
    cout<<"So "<<n<<"co "<<demchuso(n)<<"chu so."<<endl;
    demchuso2(n);
    return 0;
}
