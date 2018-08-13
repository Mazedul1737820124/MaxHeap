#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout<<"\nThe Maxheap list is : ";

    for (int i = 1; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n\n";

}


void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i;
    int r = 2*i + 1;


    if (l < n && arr[l] > arr[largest])
        largest = l;


    if (r < n && arr[r] > arr[largest])
        largest = r;


    if (largest != i)
    {
        swap(arr[i], arr[largest]);

    }

}


void Maxheap(int arr[], int n)
{

    for (int i = n / 2  ; i >= 1; i--)
        heapify(arr, n, i);

    printArray(arr,n);

}

int main()
{

    int arr[50];
    int Data,n = 1;

    cout<<"Please enter your data  (-1) for end "<<endl;

    while(cin>>Data){

        if(Data == -1)
            break;
        else
            arr[n++] = Data;

        Maxheap(arr, n);


    }


}