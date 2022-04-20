#include<iostream>
using namespace std;
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void InterchangeSort(int array[], int n)
{	
    for (int i = 0; i < n - 1; i++)  // tạo mảng 
        for (int j = i + 1; j < n; j++) 
	        if(array[i] > array[j])  // so sánh trực tiếp hai mảng với nhau
		        Swap(array[i], array[j]);
}
void nhapmang(int array[],int n)
{ 
  for(int i=0;i<n;i++)
  cin>>array[i];
}
void xuatmang(int array[],int n)
{
    for(int i=0;i<n;i++)
    cout<<array[i]<<" "<<endl;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu: \n";
    cin>>n;
    int array[n];
    cout<<"Nhap phan tu: \n";
    nhapmang(array,n);
    cout<<"Mang vua nhap: \n";
    xuatmang(array,n);
    InterchangeSort(array,n);
    cout<<"Mang sap xep: \n";
    xuatmang(array,n);
}