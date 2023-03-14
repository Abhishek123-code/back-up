#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects (FUNCTOR) : Function wrapped in a class so that it is available like an object
    int arr[] = {1, 34, 9, 3, 13, 45};
    // sort(arr,arr+6);
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}