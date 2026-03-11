#include <iostream>
#include "StringUtil.h"

using namespace std;

int main()
{
	//숫자 입력 받아서 크기로 숫자 배열 만든 후
	//1부터 크기까지 초기화하고 출력하는 프로그램

	//숫자 입력 받기
	int Size;
	cin >> Size;

	int* Number = new int[Size];

	for (int i = 0; i < Size; i++) {
		Number[i] = i + 1;
	}

	//출력
	for (int i = 0; i < Size; i++) {
		cout << Number[i] << " ";
	}
	cout << endl;

	//초기화
	delete[] Number;
	Number = nullptr;


	/*
	int A = 10;
	char Temp[100] = "Hello World";

	int StringLength = Length(Temp, 100);
	cout << StringLength << endl;

	Replace(Temp, 100, 'l', 'f');

	cout << Temp << endl;
	*/

	return 0;
}