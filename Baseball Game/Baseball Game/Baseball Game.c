#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand(time(NULL));

	int com; //��ǻ�� ���庯��
	com = rand() %300; //������(0~299)

	int c1; //��ǻ�� ���庯�� �ɰ���
	int c2;
	int c3;

	int a=1;  //Ƚ��

	int input;//����� �Է°�


	int i1; //����� �Է°� �ɰ���
	int i2;
	int i3;

	int s = 0; //��Ʈ����ũ Ƚ��
	int b = 0; // �� Ƚ��

	printf(" \n");
	printf("<���ڷ� �ϴ� �߱����� �Դϴ�.>\n\n");
	
	//��ǻ�Ͱ� Ȯ�� printf("%d\n", com);  

	while(1)
	{
		printf("[%dȸ]",a);
		a++;
		
		printf("�ߺ����� ���� ���ڸ��� ���ڸ� �Է��ϼ���. :  ");
		scanf("%d",&input);

		//���ǽ���-->����� �� 3��/S,B,F

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
			printf("****FAIL**** ��ġ�ϴ� ���� �ϳ��� �����ϴ�. \n\n");
		}
		
		}
	printf("���α׷��� �����մϴ�.!\n");
}