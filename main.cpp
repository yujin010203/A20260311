#include <iostream>

using namespace std;

int main()
{
	int A[3] = { 1, 2, 3 };
	int* P = A;

	cout << A << endl;
	//cout << *P << endl;

	// 문자열 개수 세기
	int Total = sizeof(A);
	cout << Total << endl;

	// 문자열 중에서 특정 문자를 특정문 바꾸기
	*(P+1) = 5;
	cout << A[1] << endl;

	// 문자열 중에서 특정 문자 위치 찾기
	int Number = 3;
	int index = -1;
	for (int i = 0; i < 3; i++)
	{
		if (*(P+i) == Number)
		{
			index = i;
			break;
		}
	}
	cout << index << endl;

	return 0;
}