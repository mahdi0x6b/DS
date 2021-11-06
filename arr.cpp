#include <iostream>

using namespace std;
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int bsearch(int arr[],int l,int r,int x)
{
    if (r >= l) {

        int mid = l + (r - l) / 2;

        if (arr[mid] == x)

            return mid;

        if (arr[mid] > x)

            return bsearch(arr, l, mid - 1, x);
 
        return bsearch(arr, mid + 1, r, x);

    }
    return -1;


}
int main(void)
{

    int arr[] = {1, 3, 4, 6, 8, 9, 12, 14, 16, 17, 27, 33, 45, 51, 53, 63, 69, 70};
    int x = 16;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = search(arr, n, x);
    int bresult = bsearch(arr, 0, n - 1, x);
    
    cout << "[+] index of "<<x<<" (Normal search): "<<result<<endl;
    cout << "[+] index of "<<x<<" (Binary search): "<<bresult;
    return 0;
}
