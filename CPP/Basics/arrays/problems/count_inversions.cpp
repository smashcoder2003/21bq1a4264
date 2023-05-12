#include <bits/stdc++.h>

/* Brute Force Approach O(N^2) */
int countInversions(int arr[], int n)
{
    int inversions = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                inversions++;
        }
    }
    return inversions;
}

int merge(int arr[], int low, int high, int mid, int n) {
    int inversions=0;
    int l = low;
    int k = low;
    int r = mid + 1;
    int temp[n];

    while(l <= mid && r <= high) {

        if(arr[l] <= arr[r]) {
            temp[k++] = arr[l++];
        }

        else {
            temp[k++] = arr[r++];
            inversions += mid-l+1;
        }
    }

    while(l <= mid)
        temp[k++] = arr[l++];

    while(r <= high)
        temp[k++] = arr[r++];

    for(int i = low; i <= high; i++)
        arr[i] = temp[i];
    return inversions;
}

int mergeSort(int arr[], int low, int high, int n)
{
    int inversions = 0;
    if(low<high) {
        int mid = (low + high) / 2;
        inversions += mergeSort(arr, low, mid, n);
        inversions += mergeSort(arr, mid+1, high, n);
        inversions += merge(arr, low, high, mid, n);
    }
    return inversions;
}


int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    std::cout << mergeSort(arr, 0, n-1, n) << endl;
}
