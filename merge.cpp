#include <iostream>
#include <vector>

using namespace std;

void mergeSort(int arr[], int leftNum, int rightNum)
{
    int i, j, k, middle;
    int temp = sizeof(arr);
    int tempArray[temp];
    if (leftNum < rightNum)
    {
        middle = (leftNum + rightNum) / 2;
        mergeSort(arr, leftNum, middle);
        mergeSort(arr, middle + 1, rightNum);
        for (i = middle; i >= leftNum; i--)
        {
            tempArray[i] = arr[i];
        }
        for (j = middle + 1; j <= rightNum; j++)
        {
            tempArray[rightNum - (j - (middle + 1))] = arr[j];
        }
        i = leftNum;
        j = rightNum;
        for (k = leftNum; k <= rightNum; k++)
        {
            if (tempArray[i] < tempArray[j])
            {
                arr[k] = tempArray[i++];
            }
            else
            {
                arr[k] = tempArray[j--];
            }
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = array[i];
    }
    mergeSort(arr, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}