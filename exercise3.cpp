#include <iostream>


using namespace std;



int exx3(int n, int arrx[]) {
	int j = 1;
	for (size_t i = 0; i < n; i++)
	{
		arrx[i] = j;
		j += 3;
		cout << arrx[i] << " ";
	}
	return 0;
}


int main()
{
	const int arrsize2 = 8;
	int arrx1[arrsize2] = {};


	exx3(arrsize2, arrx1);

	system("pause");
	return 0;
}