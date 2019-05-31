#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand(time(NULL));

	int com; //컴퓨터 저장변수
	com = rand() %300; //랜덤값(0~299)

	int c1; //컴퓨터 저장변수 쪼개기
	int c2;
	int c3;

	int a=1;  //횟수

	int input;//사용자 입력값


	int i1; //사용자 입력값 쪼개기
	int i2;
	int i3;

	int s = 0; //스트라이크 횟수
	int b = 0; // 볼 횟수

	printf(" \n");
	printf("<숫자로 하는 야구게임 입니다.>\n\n");
	
	//컴퓨터값 확인 printf("%d\n", com);  

	while(1)
	{
		printf("[%d회]",a);
		a++;
		
		printf("중복되지 않은 세자리의 숫자를 입력하세요. :  ");
		scanf("%d",&input);

		//조건시작-->경우의 수 3개/S,B,F

		//S
		if (input / 100 == com / 100) printf("%dS\n", +1);
		else if (input / 10 == com / 10) printf("%dS\n",+1);
		else if (input / 1 == com / 1) printf("%dS\n", +1);
			
		//B
		else if (input / 100 == com || input / 10 == com|| input / 1 == com)
		{ 
			b++;
			printf("%dB\n", b);
		}
		

		//F
		else
		{
			printf("****FAIL**** 일치하는 수가 하나도 없습니다. \n\n");
		}
		
		}
	printf("프로그램을 종료합니다.!\n");
}