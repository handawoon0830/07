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
// f()���� �� ���Ҵ��� i=10�̶� �װ� �ٽ� main()���� ���ư����� i�� 5���� Ŀ�� �ٷ� �극��ũ ��.
// ����� ���� ������ i�� ���������� �ٲ��ִ� ����� �߿�. 
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
