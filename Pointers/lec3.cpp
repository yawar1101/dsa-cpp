#include <iostream>

using namespace std;

int main()
{

    int arr[2][3] = {{2, 3, 6}, {4, 5, 8}};
    // int *p[3] = arr;
    cout << * (*(arr + 1) + 1) << endl;

    return 0;
}