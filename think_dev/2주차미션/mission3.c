#include <stdio.h>
#include <string.h>

int main(void) {
	char str[10];
	int length;
	
	char *week[] = {"월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일"};
	char *food[] = {"청국장", "된장찌개", "두부김치", "오삼불고기", "소불고기", "미트볼", "김치찌개"};
	
	int arrNum = sizeof(week) / sizeof(week[0]);
	

	printf("요일을 입력하세요: ");
	scanf("%9s\n", str);

    printf("%s", str);
	// for (int i = 0; i < arrNum; i++) {
	// 	if (strcmp(str, week[i]) == 0) {
	// 		printf("%s:%s\n", week[i], food[i]);
	// 		break;
	// 	} else {
	// 		// printf("%s %s\n", week[0], str);
	// 		// printf("%d\n", strcmp(str, week[0]));
	// 		printf("요일을 입력하세요: ");
	// 		scanf("%9s\n", str);
	// 	}
	// }
	return 0;
}



// #include <stdio.h>
// #include <string.h>


// int main(void)
// {
//     char str[10];
//     // fputs("문자열을 입력해주세요: \n", stdout);
//     // fgets(str, sizeof(str), stdin);
//     // puts(str);
//     printf("요일을 입력해주세요: ");
//     scanf("%9s", str);
//     printf("%lu\n", strlen(str));
//     printf("%s", str);
// }
// // #include <stdio.h>
// // #include <string.h> // strcmp 함수를 갖고있는 도구 strcmp는 첫번째 인자와 두번째 인자를 비교해 동일하면 0을 리턴

// // int main(void)
// // {
// //     char dayOfTheWeek[1];
// //     printf("요일을 입력하세요: ");
// //     scanf("%s", dayOfTheWeek);

// //     if (strcmp(dayOfTheWeek, "월요일") == 0)
// //     {
// //         printf("월요일: 청국장");
// //     }
// //     if (strcmp(dayOfTheWeek, "화요일") == 0)
// //     {
// //         printf("화요일: 비빔밥");
// //     }
// //     if (strcmp(dayOfTheWeek, "수요일") == 0)
// //     {
// //         printf("수요일: 된장찌개");
// //     }
// //     if (strcmp(dayOfTheWeek, "목요일") == 0)
// //     {
// //         printf("목요일: 칼국수");
// //     }
// //     if (strcmp(dayOfTheWeek, "금요일") == 0)
// //     {
// //         printf("금요일: 냉면");
// //     }
// //     if (strcmp(dayOfTheWeek, "토요일") == 0)
// //     {
// //         printf("토요일: 소불고기");
// //     }
// //     if (strcmp(dayOfTheWeek, "일요일") == 0)
// //     {
// //         printf("일요일: 오삼불고기");
// //     }
// //     return 0;
// // }