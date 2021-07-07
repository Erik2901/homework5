#include <iostream>


using namespace std;



bool exx2(int n, bool barr[]) {
	for (size_t i = 0; i < n; i++)
	{
		cout << barr[i] << " ";
	}
	cout << endl;
	for (size_t i = 0; i < n; i++)
	{
		if (barr[i] == 0)
		{
			barr[i] = 1;
		}
		else {
			barr[i] = 0;
		}
		cout << barr[i] << " ";
	}
	return true;
}
int main()
{
	const int arrsize1 = 10;
	bool arrb[] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };


	exx2(arrsize1, arrb);

	system("pause");
	return 0;
}