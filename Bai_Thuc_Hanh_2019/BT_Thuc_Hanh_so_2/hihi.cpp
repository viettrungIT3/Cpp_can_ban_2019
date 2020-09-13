#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}
int catulate(int k){
    if(k<=50){
        return k*1678;
    }
    if(k<=100){
        return 50*1678 + (k-50)*1734;
    }
    if(k<=200){
        return 50*1678 + 50*1734 + (k-100)*2014;
    }
    if(k<=300){
        return 50*1678 + 50*1734 + 50*2014 + (k-150)*2536;
    }
    if(k<=400){
        return 50*1678 + 50*1734 + 50*2014 + 50*2536 + (k-200)*2834;
    }
    if(k>400){
        return 50*1678 + 50*1734 + 50*2014 + 50*2536 + 50*2834 + (k-250)*2927;
    }
    return 0;
}
void list(int a[],int n){
    cout<<setw(10)<<"Family"<<setw(30)<<"Electricity bill"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(10)<<i+1<<setw(30)<<catulate(a[i])<<endl;
    }
}
void Min(int a[],int n){
    cout<<setw(10)<<"Family"<<setw(30)<<"Electricity bill"<<endl;
    int m=catulate(a[0]);
    int z=0;
    for(int i=1;i<n;i++){
        if(catulate(a[i])<m){
            m=catulate(a[i]);
            z=i;
        };
    }
    cout<<setw(10)<<z+1<<setw(30)<<m<<endl;
}
void Sort(int a[],int n){
    bubbleSort(a,n);
    cout<<setw(10)<<"Family"<<setw(30)<<"Electricity bill"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(10)<<i+1<<setw(30)<<catulate(a[i])<<endl;
    }
}
int main(int argc, const char * argv[]) {
    int n;
    do{
        cout<<"Enter n: ";
        cin>>n;
    }while (n<=0&&n>=100);
    int *a=new int[n];
    cout<<"Enter kwh for each familiy"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Family "<<i+1<<": "<<endl;
        cin>>a[i];
    }
    int choose;
    do{
        cout<<"Back to main : 0"<<endl;
        cout<<"List of all families : 1"<<endl;
        cout<<"Min bill : 2"<<endl;
        cout<<"Sort : 3"<<endl;
        cout<<"Your selection : ";
        cin>>choose;
        switch (choose) {
            case 1:
                list(a,n);
                break;
            case 2:
                Min(a,n);
                break;
            case 3:
                Sort(a,n);
                break;
            default:
                break;
        }
    }while (choose!=0) ;
    return 0;
}
