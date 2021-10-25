#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if(l < n && arr[l] < arr[largest])
        largest = l;
    
    if(r < n && arr[r] < arr[largest])
        largest = r;
    
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }

}
void heapSort(int arr[], int n){
    for(int i = n / 2- 1; i >=0; i--)
        heapify(arr, n, i);

    for(int i = n - 1; i > 0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void insert(int x,int arr[], int n){
    ++n;
    arr[n-1] = x;
}
void deleteRoot(int arr[], int& n)
{
    int lastElement = arr[n - 1];
    arr[0] = lastElement;
    n = n - 1;
    heapify(arr, n, 0);
}
void printArray(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int query;
    cin >> query;
    int arr[100];
    int n = 0;
    for(int i = 0; i < query; i++){
        int q;
        cin >> q;
        if(q == 0){
            int x;
            cin >> x;
            insert(x, arr, n);
        }
        if(q == 1){
            heapSort(arr, n);
            if(arr[0])
                deleteRoot(arr, n);
        }
    }
    return 0;
}
