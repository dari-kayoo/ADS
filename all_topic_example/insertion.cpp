#include <iostream>
using namespace std;
 
#define MAX 1000 // Max size of Heap
 
// Function to heapify ith node in a Heap
// of size n following a Bottom-up approach
void heapify(int arr[], int n, int i)
{
    // Find parent
    int parent = (i - 1) / 2;
 
    if (arr[parent] > 0) {
        // For Max-Heap
        // If current node is greater than its parent
        // Swap both of them and call heapify again
        // for the parent
        if (arr[i] > arr[parent]) {
            swap(arr[i], arr[parent]);
 
            // Recursively heapify the parent node
            heapify(arr, n, parent);
        }
    }
}
 
// Function to insert a new node to the Heap
void insertNode(int arr[], int& n, int Key)
{
    // Increase the size of Heap by 1
    n = n + 1;
 
    // Insert the element at end of Heap
    arr[n - 1] = Key;
 
    // Heapify the new node following a
    // Bottom-up approach
    heapify(arr, n, n - 1);
}
void deleteRoot(int arr[], int& n)
{
    // Get the last element
    int lastElement = arr[n - 1];
 
    // Replace root with last element
    arr[0] = lastElement;
 
    // Decrease size of heap by 1
    n = n - 1;
 
    // heapify the root node
    heapify(arr, n, 0);
}
 
// A utility function to print array of size n
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    cout << "\n";
}
 
// Driver Code
int main()
{
    int query, key, n = 0;
    int arr[n];
    cin >> query;
    for(int i = 0; i < query; i++){
        int q;
        cin >> q;
        if(q == 0){
            cin >> key;
            insertNode(arr, n, key);
        }
        if(q == 1){
            if(arr[0] != 0){
                cout << arr[0];
                deleteRoot(arr, n);
                return 0;
            }
          
        }
    }
    return 0;
}