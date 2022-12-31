/*
#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 0;
        return -1;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int result = linearSearch(arr, size, 20);
    if (result == 0)
    {
        cout << "elemet is present in the array " << endl;
    }
    else if (result == -1)
    {

        cout << "element is not present in the array";
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 0;
        return -1;
    }
}
int main()
{
    cout << "Enter the size of the array : ";
    int size;
    cin >> size;

    cout << "Enter array elements : " << endl;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key :" << endl;
    int key;
    cin >> key;
    int result = linearSearch(arr, size, key);

    if (result == 0)
    {
        cout << "key is present " << endl;
    }
    else if (result == -1)
    {
        cout << "element not present!" << endl;
    }
    return 0;
}