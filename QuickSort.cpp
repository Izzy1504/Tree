#include <iostream>
#include <algorithm>
using namespace std;

void nhapmang( int arr[] , int size ) {
	for ( int i=0 ; i<size ; i++ ) {
	  cout << "Nhap gia tri cho phan tu A[" << i << "]: ";
      cin >> arr[i];
    }
}

void xuatmang( int arr[] , int size ) {
	for ( int i=0 ; i<size ; i++ )
	 cout << arr[i] << "  ";
}

int partition (int a[], int low, int high) 
{    
	int pivot = a[high];
	int left=low;
	int right=high-1;
	while (true) 
	{
		while ( left<=right && a[left]<pivot )
			left++;
		while ( left<=right && a[right]>pivot )
			right--;
		if ( left>=right )
			break;
		swap(a[left],a[right]);
		right--;
		left++;
	}
	swap(a[left],a[high]);
	return left;
}

void quickSort (int a[], int low, int high) 
{
	int dung;
	if (low<high) 
	{
		dung = partition (a,low,high);

		quickSort (a,low,dung-1);
		quickSort (a,dung+1,high);
	}	
}

int main () 
{
    int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int a[n];
	nhapmang (a,n);
	quickSort (a,0,n-1);
	xuatmang (a,n);
    return 0;
}