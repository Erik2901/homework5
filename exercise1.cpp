#include <iostream>


using namespace std;

double exx1(int n, double arr[]) {
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return true;
}

int main()
{
	const int arrsize = 5;
	double arrd[] = { 1.256,0.225,5.85444,9.85477,4.2548 };

	exx1(arrsize, arrd);



	system("pause");
	return 0;
}