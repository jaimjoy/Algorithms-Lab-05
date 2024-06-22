#include<bits/stdc++.h>
using namespace std;

void MaxNum(int *a, int m)
{
    int store = a[0];
    for(int i=1; i<m; i++)
    {
        if(store < a[i])
        {
            store = a[i];
        }
    }

    cout<<"Maximum Number is: "<<store<<endl;
}
void MinNum(int *b, int m)
{
    int store = b[0];
    for(int i=1; i<m; i++)
    {
        if(store > b[i])
        {
            store = b[i];
        }
    }
    cout<<"Minimum Number is: "<<store<<endl;
}

int main() {
    int arr1[]= {11,5,1,9,3,4,7,-8,10,2,8,6,20,17,16,13,19};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    cout << "Given Array: ";
    for (int i=0; i<m; i++) cout << arr1[i] << " ";cout<<endl;

    MaxNum(arr1,m);
    MinNum(arr1,m);
    cout<<endl;
    return 0;
}

