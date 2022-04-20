#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void nhapmang(int arr[], int n)
{
    for(int i=0;i<n;i++)
    
    cin>>arr[i];
}
void xuatmang(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void select(int arr[], int n)
{
    int min;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    for (int i = 0; i <n-1; i++)
    {
    // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
    min = i;
    for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min])
        min = j;
 
    // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(arr[min], arr[i]);
    }

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
    select(arr,n);
    cout<<"\nPhan tu da sap xep: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}