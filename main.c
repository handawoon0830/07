#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int i;

int main(void)
{
	for (i=0; i<5; i++)
	{
		f();
	}
	return 0;
}
void f(void)
{
	for (i=0; i<10; i++)
		printf("#");
}
// f()에서 다 돌았더니 i=10이라 그게 다시 main()으로 돌아갔더니 i가 5보다 커서 바로 브레이크 됨.
// 방법은 전엽 변수인 i를 지역변수로 바꿔주는 방법이 중요. 
*/

int main(void)
{
	int i; 
	for (i=0; i<5; i++)
	{
		f();
	}
	return 0;
}
void f(void)
{
	int i;
	for (i=0; i<10; i++)
		printf("#");
}
