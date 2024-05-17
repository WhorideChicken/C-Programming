#include <stdio.h>

//배열 자료형 변수명[사이즈]
//C언어에서는 배열의 크기를 변수를 통해 정의할 수 없게 규정 되어 있다.
//상수 : const : 처음 정의시 그 값이 바로 주어지고 영원히 바뀌지 않음

/*
* 생각해 볼 문제
문제 1
위 입력받는 학생들의 성적을 높은 순으로 정렬하는 프로그램을 만들어 보세요.
5개

문제 2
입력받은 학생들의 성적을 막대 그래프로 나타내는 프로그램을 만들어 보세요.
*/

void Score();
int main()
{
	Score();
	return 0;
}

//int는 4바이트이므로 4로 나눠준다.
void Score()
{
	int score[5];
	for (int i = 0; i < sizeof(score)/sizeof(int); i++)
	{
		printf("%d의 성적을 입력해 주세요 : ", i + 1);
		scanf_s("%d", &score[i]);
	}

	Sorting(score);
}

void Sorting(int scoreArray[])
{

}