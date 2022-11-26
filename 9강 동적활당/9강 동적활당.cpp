#include <iostream>

//메모리 영역
//힙 영역(동적할당)

int main()
{
	int* pInt = nullptr;
	int input = 0;
	scanf_s("%d",&input);
	if (100 == input)
	{
		pInt = (int*)malloc(100);
	}
	if (nullptr != pInt)
	{
		free(pInt);
	}


	//가변 배열
	int arr[10] = {};
	


	return 0;
}
