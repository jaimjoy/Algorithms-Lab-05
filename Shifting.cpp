#include<bits/stdc++.h>
using namespace std;

void printArray(int *A, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void shiftLeft(int *B, int n, int k)
{
    for(int j=0; j<k; j++)
    {
        for(int i=1; i<n; i++)
        {
            B[i-1] = B[i];
        }
    }
}
void shiftRight(int *C, int n, int k)
{
    for(int j=0; j<k; j++)
    {
        for(int i=n-1; i>=0; i--)
        {
            C[i] = C[i-1];
        }
    }
}
void rotateLeft(int *C, int n, int k)
{
    int store=0;
    for(int j=0; j<k; j++)
    {
        store = C[0];
        for(int i=1; i<n; i++)
        {
            C[i-1] = C[i];
        }
        C[n-1] = store;
    }
}
void rotateRight(int *C, int n, int k)
{
    int store=0;
    for(int j=0; j<k; j++)
    {
        store = C[n-1];
        for(int i=1; i<n; i++)
        {
            C[n-i] = C[n-(i+1)];
        }
        C[0] = store;
    }
}
int main()
{
    int a[6] = {10,20,30,40,50,60};
    printArray(a,6);
    //shiftLeft(a,6,2);
    //shiftRight(a,6,2);
    //rotateLeft(a,6,2);
    rotateRight(a,6,2);
    printArray(a,6);
    return 0;
}

