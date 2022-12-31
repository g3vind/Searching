/*#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {12, 45, 67, 99, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 67;
    int result = binarySearch(arr, size, key);
    cout << "Element found at index : " << result;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int low;
    int mid;
    int high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
        return 0;
    }
    return -1;
}
int main()
{
    cout << "Enter the size of the array : ";
    int size;
    cin >> size;

    cout << "Enter the array elements  : ";
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key element : ";
    int key;
    cin >> key;

    int result = binarySearch(arr, size, key);

    cout << "Element found at index : " << result;

    // if (result == 0)
    //     cout << "Element present at index " << result + 1 << endl;
    // else if (result == -1)
    //     cout << "Element not found";

    return 0;
}