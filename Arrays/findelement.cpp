#include <bits/stdc++.h>
using namespace std;
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int arr[] = { 2,5,8,1,10 };
    int key = 10;

    int p = findElement(arr, 5, key);

    if (p == -1)
        cout << "Element not found";
    else
        cout << "Element Found at index: "
             << p + 1;

    return 0;
}
