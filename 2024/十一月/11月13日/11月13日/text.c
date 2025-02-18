//今天没时间了，就先照着书写一个猜数游戏代码，再自己盲写一个

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int magic, guess, counter = 0, ret;
	char reply;
	srand(time(NULL));
	do {
		counter = 0;
		magic = rand() % 100 + 1;
		do {
			printf("Please guess a magic number:");
			ret = scanf_s("%d", &guess);
			while (ret != 1)
			{
				while (getchar() != '\n');
				printf("Please guess a magic number:");
				ret = scanf_s("%d", &guess);
			}
			counter++;
			if (guess > magic)
			{
				printf("Wrong!Too big!\n");
			}
			else if (guess < magic)
			{
				printf("Wrong!Too small!\n");
			}
			else
				printf("Right!\n");
		} while (guess != magic && counter < 10);
		printf("counter=%d\n",counter);
		printf("Do you want to contine(Y/N)?");
		scanf_s(" %c", &reply);
	} 
	while (reply == 'Y');
	return 0;
}







//自己写的代码

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int guess,magic,counter;
	counter = 0;
	magic = rand() % 100 + 1;
	do
	{
		printf("Please guess a number:");
		scanf_s("%d", &guess);
		if (guess > magic)
		{
			printf("Too big!");
		}
		else if (guess < magic)
		{
			printf("Too small!");
		}
		else
			printf("Right!");
	}
	while(guess!=magic)


	return 0;
}
