#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int *a, int n, int num)
{
    bool c = true;
    for(int i=0; i<n; i++)
    {
        if(num == a[i])
        {
            cout<<num<<" Found at index: "<<i<<endl;
            c = false;
            break;
        }
    }
        if(c == true)
        {
            cout<<num<<" Not found"<<endl;
        }
}
int BinarySearch(int arr[], int key, int left, int right) {
    int middle;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (key == arr[middle])
        {
            return middle;
        }
        else if (key < arr[middle])
        {
            return BinarySearch(arr, key, left, middle - 1);
        }
        else
        {
            return BinarySearch(arr, key, middle + 1, right);
        }
    }
    return -1;
}

int main() {
    int arr1[]= {11,5,1,9,3,4,7,10,2,8,6,20,17,16,13,19};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout << "Given Array: ";
    for (int i=0; i<n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    LinearSearch(arr1,n,20);
    LinearSearch(arr1,n,25);

    int n1=9,n2=21;
    int BS = BinarySearch(arr1,n1,0,n-1);
    if(BS == -1) cout<<"Number not found";
    else cout<<n1<<" found at index: "<<BS<<"\n";

    BS = BinarySearch(arr1,n2,0,n-1);
    if(BS == -1) cout<<"Number not found";
    else cout<<n2<<" found at index: "<<BS<<"\n";
    cout<<endl;
    return 0;
}

