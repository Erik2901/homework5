
#include <iostream>

using namespace std;

bool exx5(int arrsize, int arr[]) {
    int sum1 = 0;
    int sum2 = 0;
    bool q;
    for (size_t i = 0; i < arrsize; i++)
    {
        sum1 += arr[i];
        for (size_t j = arrsize - 1; j > i; j--)
        {
            sum2 += arr[j];
        }
        if (sum1 == sum2)
        {
            q = true;
            break;
        }
        else
        {
            q = false;
        }
        sum2 = 0;
    }


    return q;
}

int main() {

    const int n = 5;
    int arr1[n] = { 1,1,1,2,1 };

    cout << exx5(n, arr1);

    system("pause");
    return 0;
}