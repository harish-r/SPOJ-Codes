/*
SPOJ Classical Set
Code: FASHION
*/
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t,i,j,k,n,sum;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        int *a = (int*)malloc(sizeof(int)*n);
        int *b = (int*)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
            cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        for(i=0;i<n;i++)
            sum += a[i] * b[i];
        cout << sum <<endl;
        free(a);
        free(b);
    }
    return 0;
}

