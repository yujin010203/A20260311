#include <iostream>

using namespace std;

int main()
{
	int A[3] = { 1, 2, 3 };
	int* P = A;

	//cout << A << endl;
	//cout << *P << endl;

	// 문자열 개수 세기
	int Total = sizeof(A) / sizeof(int);
	cout << "문자열의 개수 : " << Total << endl;

	// 문자열 중에서 특정 문자를 바꾸기
	*(P+1) = 5;
	cout << "문자 변경 : " << A[1] << endl;

	// 문자열 중에서 특정 문자 위치 찾기
	int Number = 3;
	int Index = -1;
	for (int i = 0; i < 3; i++)
	{
		if (*(P+i) == Number)
		{
			Index = i;
			break;
		}
	}
	cout << Number << "의 위치 : " << Index << endl;

	return 0;
}