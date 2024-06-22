#include<bits/stdc++.h>
using namespace std;

void Swap(int a, int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b<<"\n";
}
int main()
{
    int a = 10, b = 5;
    Swap(a,b);
    return 0;
}
