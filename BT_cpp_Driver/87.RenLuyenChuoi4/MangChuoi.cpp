#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char **dsSV = new char*[5];
    fflush (stdin);
    for ( int i = 0; i < 5; i++)
        *dsSV = new char[255];
    strcpy(*(dsSV+0), "SV1;Obama;male");
    strcpy(*(dsSV+1), "SV;Yanjmaa;female");
    strcpy(*(dsSV+2), "SV1;Trump;male");
    strcpy(*(dsSV+3), "SV1;Putin;male");
    strcpy(*(dsSV+4), "SV1;Pereira;male");
    for (int i = 0; i < 5; i++)
    {
        cout<<*(dsSV+i)<<endl;
    }
    
}
