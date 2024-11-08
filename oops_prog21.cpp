#include <iostream>
using namespace std;

template <class T>
void Sort(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array : " << endl;
}

template <class T>
void Print(T arr[], int size)
{
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int size = 5;

    int arr1[size] = {2, 1, 5, 7, 3};
    float arr2[size] = {2.4, 1.5, 3.6, 7.5, 2.7};
    int *arr3 = new int[size]{2, 5, 6, 1, 8};
    double arr4[size] = {4.32, 9.34, 0.34, 7.34, 8.33};
    long int arr5[size] = {344, 985, 235, 845, 115};

    Print(arr1, size);
    Sort(arr1, size);
    Print(arr1, size);

    Print(arr2, size);
    Sort(arr2, size);
    Print(arr2, size);

    Print(arr3, size);
    Sort(arr3, size);
    Print(arr3, size);

    Print(arr4, size);
    Sort(arr4, size);
    Print(arr4, size);

    Print(arr5, size);
    Sort(arr5, size);
    Print(arr5, size);
    return 0;
}