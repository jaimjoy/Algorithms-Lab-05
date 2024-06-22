#include<bits/stdc++.h>
using namespace std;

void Prime(int *a, int m)
{
    for(int i=0; i<m; i++)
    {
        if(a[i]!= 2 && a[i]%2 == 0)
        {
            cout<<a[i]<<" is not Prime."<<endl;
        }
        else if(a[i]!= 2 && a[i]%3 == 0)
        {
            cout<<a[i]<<" is not Prime."<<endl;
        }
        else if(a[i]!= 2 && a[i]!= 5 && a[i]%5 == 0)
        {
            cout<<a[i]<<" is not Prime."<<endl;
        }
        else cout<<a[i]<<" is a Prime."<<endl;
    }
}

int main() {
    int arr1[]= {11,5,1,9,5,25,3,4,7,10,2,8,6,20,17,16,13,19};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    cout << "Given Array: ";
    for (int i=0; i<m; i++) cout << arr1[i] << " ";cout<<endl;
    Prime(arr1,m);
    cout<<endl;
    return 0;
}

