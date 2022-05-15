
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 10, 20, 349, 12, 3, 5, 24};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "\nArray after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}
