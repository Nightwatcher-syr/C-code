//����Ҫʵ�ֵĹ���----Сѧ�������������ѧ
//10���ڵļӼ��˳����㣬�ɰ���ѧ��ָ���������ͳ��⣬Ҳ���ԼӼ��˳�����������
//ÿ�γ�10���⣬ÿ����������ж϶Դ�����������ķ������趨�õ����ַ������������
//��10��������󣬼��㲢�����ȷ����---����ȷ����>=8,��ֹͣ���Ⲣ��ʾ������Ϣ
//�����ȷ������<8,�������10���⣬ֱ����ȷ�����ϸ�Ϊֹ

#include"math.h"
int main()
{
	int input = 0;
	do
	{
		input = 0;
		menu();//��ӡѡ��˵�
		char choice = 0;
		scanf_s(" %c", &choice);//ͬѧ������Ҫ��ս����������


		int a = 0;
		int b = 0;
		int c = 0;
		srand(time(NULL));

		int result = 0;
		//	add, subtract, multiply and divide
		switch (choice)
		{
		case 'A':
		{
			add();
			break;
		}
		case 'B':
		{
			subtract();
			break;
		}
		case 'C':
		{
			multiply();
			break;
		}
		case 'D':
		{
			divide();
			break;
		}
		case 'E':
		{
			int i = 0;
			printf("�뿪ʼ�����ϰ��\n");
			c = rand() % 4;
			switch (c)
			{
			case 0:
				add();
			case 1:
				subtract();
			case 2:
				multiply();
			case 3:
				divide();

			}
			break;
		}
		default:
		{
			printf("����������������룡\n");
			input = 1;
			break;
		}

		}

	}
	while (input);
	return 0;
}

