/* 다중 배열
* 배열은 int arr[]와 같이 정의는 못한다.
* 배열의 크기는 임으로 정해지지 않기 떄문에 배열을 선언 할 때 크기를 같이 지정해줘야합니다.
* 다중 배열의 경운 맨 앞자리 크기는 비워도 되지만 다음 자리의 배열 크기들은 정확히 지정해 줘야합니다.
*/

/*문제1
*  배열이 왜 C 언어의 아파트 인지 설명해 보세요.
즉, 동 의 개념, 층 의 개념, 호 의 개념이 어떠한 배열을 형상화 하고 있는 지도 생각해 보세요
* -> 하나의 배열 선언은 아파트 1개의 동을 의미할 수 있습니다.
* -> 배열의 다중 배열에서 앞의 자리수는 층을 의미 할 수 있고
* -> 뒷 자리의 수는 해당 층의 몇호까지 있는지 표현 할 수 있습니다.
*/

/* 다중 배열의 사이즈 구하기
* 배열 전체 크기 / 배열1개의 크기 -> 다차원 배열에서 몇개의 열로 이뤄져 있는지 알 수 있음
* 배열 1개의 크기 / 배열 자료형의 크기 -> 다차원 배열에서 1개의 배열당 몇개의 인자가 있는지 알 수 있음
*/
#include <stdio.h>
void StudentScore();

void StudentScore()
{
	int scoreArray[3][3];

	for (int i = 0; i < sizeof(scoreArray) / sizeof(scoreArray[0]); i++)
	{
		printf("%d번째 학생의 점수를 입력합니다\n", i + 1);
		for (int j = 0; j < sizeof(scoreArray) / sizeof(scoreArray[0]); j++)
		{
			int socre;
			if (j == 0)
			{
				printf("국어 점수를 입력하세요 :");
				scanf_s("%d", &socre);
			}
			else if (j == 1)
			{
				printf("영어 점수를 입력하세요 :");
				scanf_s("%d", &socre);
			}
			else
			{
				printf("수학 점수를 입력하세요 :");
				scanf_s("%d", &socre);
			}

			scoreArray[i][j] = socre;
		}
		printf("\n");
	}


	for (int i = 0; i < sizeof(scoreArray) / sizeof(scoreArray[0]); i++)
	{
		printf("%d번째 학생의 점수\n", i + 1);
		for (int j = 0; j < sizeof(scoreArray) / sizeof(scoreArray[0]); j++)
		{
			if (j == 0)
			{
				printf("국어 점수 = %d \n", scoreArray[i][j]);
			}
			else if (j == 1)
			{
				printf("영어 점수 = %d \n", scoreArray[i][j]);
			}
			else
			{
				printf("수학 점수 = %d \n", scoreArray[i][j]);
			}
		}
	}
}
