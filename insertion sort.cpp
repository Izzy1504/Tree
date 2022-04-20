#include<iostream>  
using namespace std;  
void nhapmang(int array[],int n);
void xuatmang(int array[],int n);
void insert(int array[],int n);
int main ()
{    
    int n;
    cout<<"Nhap so phan tu: \n";
    cin>>n;
    int array[n];
    cout<<"Nhap phan tu: \n";
    nhapmang(array,n);
    cout<<"Mang vua nhap: \n";
    xuatmang(array,n);
    cout<<"Mang sap xep: \n";
    insert(array,n);
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
void insert(int array[],int n)
   {
        for(int i=1; i<n; i++)   
    {  
        int temp = array[i];  
        int j= i-1;  
        while(j>=0 && temp <= array[j])  
        {  
            array[j+1] = array[j];   
            j = j-1;  
        }  
        array[j+1] = temp;  
    }  

    for(int i=0;i<n;i++)  
    {  
       cout <<array[i]<<endl; 
    }  
}
