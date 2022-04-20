#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
// hàm sắp xếp nổi bọt (bubble sort)
void BubbleSort(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
		for (int j = 0; j < n-i-1; j++)
        {
			if (arr[j] > arr[j + 1])
            {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void nhapmang(int arr[], int n)
{
    for(int i=0;i<n;i++)
    
    cin>>arr[i];
}
void xuatmang(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";;
}
int main()
{
    int arr[100],n;
    cout<<"Nhap so phan tu : ";
    cin>>n;
    cout<<"Nhap phan tu: ";
    nhapmang(arr,n);
    cout<<"Phan tu da nhap: \n";
    xuatmang(arr,n);
    BubbleSort(arr,n);
    cout<<"\nCac phan tu da sap xep: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}