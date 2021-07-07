#include <iostream>


using namespace std;



int exx4(int arrsize, int move, int arrt[], int arrt2[])
{
	int movepl = move;
	int q = 0;
	while (movepl > arrsize)
	{
		movepl = movepl - arrsize;
	}
	while (movepl < (arrsize * -1))
	{
		movepl = movepl + arrsize;
	}
	if (move < 0)
	{
		q = abs(movepl);
		movepl = arrsize + movepl;
	}
	else if (move > 0) {
		q = arrsize - movepl;
	}

	for (size_t i = q, s = 0; i < arrsize; i++)
	{
		arrt2[s] = arrt[i];
		s++;
	}
	for (size_t i = 0; i < q; i++)
	{
		arrt2[movepl] = arrt[i];
		movepl++;
	}
	for (size_t i = 0; i < arrsize; i++)
	{
		cout << arrt2[i] << " ";
	}

	return 0;
}

int e1(int arrc, int arro[]) {
	for (size_t i = 0; i < arrc; i++)
	{
		cout << arro[i] << " ";
	}
	cout << endl;
	return 0;
}
int main()
{
	int move1 = 0;
	const int n = 5;
	int a[n] = { 1,2,3,4,5, };
	int m[n];

	e1(n, a);

	while (move1 == 0)
	{
		cout << "Enter move size: " << " ";
		cin >> move1;
	}

	exx4(n, move1, a, m);

	system("pause");
	return 0;
}
