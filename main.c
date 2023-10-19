#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	for (i=0; i<5; i++)
	{
		int temp=1; //static int로 쓰면 temp이 사라지지 않음. 보존이 됨. 
		printf("temp= %d\n", temp);
		temp++;
	 } //요기서 temp가 사라짐 생존기간이 끝남 
	return 0;
}
