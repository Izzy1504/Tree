#include<iostream>
using namespace std;
void merge(int a[], int start, int mid, int end)
{
    int n1 = mid - start + 1; // Số phần tử mảng con trái 
                                    // + 1 là do lưu thêm phần tử ở vị trí mid
    int n2= end-mid;          // Số phần tử mảng con phải
    int left[n1]; int right[n2];  // Khai báo hai mảng trung gian

    // Copy giữ liệu từ mảng chính ra hai mảng con
    for(int x=0; x<n1; x++) 
    left[x] = a[start+x];
    for(int y=0; y<n2; y++)
    right[y] = a[mid+1+y];
    
    int i=0, j=0;     // Khai báo hai biến chạy để duyệt mảng con
    int k=start;     // Lưu k làm vị trí bắt đầu của mảng chính,
    
    while(i<n1 && j<n2){    // Trong khi cả hai mảng con chưa hết phần tử
        if(left[i]>=right[j])
        {                    // Nếu phần tử mảng con trái >= mảng con phải
            a[k]=right[j];   // Điển phần tử mảng con phải vào mảng chính
            j++;             // xét phần tử tiếp theo của mảng right
        }
        else
        {                     // Ngược lại tức là left[i] < right[j]
            a[k]=left[i];
            i++;
        }
        k++;              //Mỗi lần lặp sẽ tìm được 1 phần tử thích hợp
    }
    
        // Sau vòng lặp trên, 1 trong 2 mảng đã duyệt hết phần tử, hoặc cả hai cùng hết

    while(j<n2)
    {      // Nếu mảng right chưa hết, mảng left đã hết
        a[k]=right[j]; 
        k++;
        j++;    
    }

    while(i<n1)
    {     // Nếu mảng left chưa hết, mảng right hết
        a[k]= left[i];
        k++;
        i++;    
    }
}
  void mergeSort(int a[], int first, int end){
    int t;    
    if(first<end){             
        t=(first+end)/2;    // Chia đôi mảng
        mergeSort(a,first,t);    
        mergeSort(a,t+1,end);  
        merge(a,first,t,end);   
    }
    else    // Mảng < 1 phần tử sẽ dừng đệ quy
        return;
}
void nhap(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    cin>>arr[i];
}
void xuat(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";;
}
int main()
{
    int arr[1000],n;
    cout<<"Nhap so phan tu : ";
    cin>>n;
    cout<<"Nhap phan tu: ";
    nhap(arr,n);
    cout<<"Phan tu da nhap: \n";
    xuat(arr,n);
    cout<<"\nPhan tu da sap xep: \n";
    mergeSort(arr,0,n-1);
    xuat(arr,n);
    
    return 0;
}