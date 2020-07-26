#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int NUM_OF_GRADES = 9;
const int SCORES[NUM_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const char *GRADES[NUM_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

void printTable(void)
{
	printf("학점 프로그램\n");
	printf("종료를 원하면 \"999\"를 입력\n");
	
	printf("[학점 테이블]\n");

	printf("점수 : ");
	for (int i = 0; i < NUM_OF_GRADES; i++)
		printf("%d\t", SCORES[i]);
	printf("\n");

	printf("학점 : ");
	for (int i = 0; i < NUM_OF_GRADES; i++)
		printf("%s\t", GRADES[i]);
	printf("\n");
}

char *scoreToGrade(int score)
{
	char *grade;

	for (int i = 0; i <NUM_OF_GRADES; i++)
	{
		if (score >= SCORES[i])
		{	
			grade = malloc(sizeof(char) * strlen(GRADES[i]));
			strcpy(grade, GRADES[i]);
			break;
		}
	}
	return grade;
}

int main(void)
{
	int input;
	char *grade;

	printTable();
	
	while (1)
	{
		printf("성적을 입력하세요 (0 ~ 100) : ");
		scanf("%d", &input);
		if (input == 999)
			break;
		else if (input < 0 || input > 100)
			printf("** %d 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", input);
		else
		{
			grade = scoreToGrade(input);
			printf("학점은 %s 입니다.\n", grade);
		}
	}
}

