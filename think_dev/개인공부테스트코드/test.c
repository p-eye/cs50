#include <stdio.h>

int main(void)
{
    int n = 5; // 변수에 정수를 할당
    int *p = &n; // 포인터 변수가 n 변수의 주소를 가리키게함
    printf("%p\n", &n); // n 변수의 주소를 출력
    printf("%p\n", p); // p 는 n 변수의 주소를 가르키고있기때문에 n의 주소를 출력
    printf("%p\n", &p);
}