//#include<stdio.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int ret = rand();//���������  ---�������ɵ������ÿ�ζ���һ����
//	printf("%d", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��");
//			break;
//		default:
//			printf("����������������룡");
//			break;
//		}
//	} 
//	while (input);
//
//	return 0;
//}


//����srand
//#include<stdio.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	srand(100);//ÿ�����ɵ�������365    //200ʱΪÿ��Ϊ
//	int ret = rand();
//	printf("%d", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��");
//			break;
//		default:
//			printf("����������������룡");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//ʲô�ڲ��ϱ仯�ģ�
//ʱ����һ��һ��ķ����仯
//ʱ��������ڵ�ʱ����ĳһ���ʱ��Ĳ�ֵ---���ֵ�ڲ��ϱ仯--��Ӧһ��ʱ�������λΪ�룩--��Ϊ����
//��������ʱ���
//time����---����һ��ʱ���  time_t---��һ������
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int ret = rand();
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); 
//	//�����ָ�����NELL---��ָ�����˼     �൱�ڳ�ʼ��Ϊ��
//	//���������Ŀ�Ļ���ǰ���������ɵ��������ͬ  
//	//��Ϊ��һ������������ÿ������һ�γ������Ҫ����������һ����㣬����ֻ������һ����㣬ÿ������һ��������������������
//	//���Բ��ܰ�����ķŵ�void game���൱�ڲ��뵽��ÿ�ε�ѭ��������Ҫ�ŵ�ѭ������
//	//������Ҫ���ɵ��������0~100����
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��");
//			break;
//		default:
//			printf("����������������룡");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//�������1~100֮�����
//��Ϊ�κ���%100��ȡ�ࣩ��������һ��0~99��������ʱ��rand()%100�����1���ͱ����1~100֮�����
//����ʦд�Ĳ�̫һ�����������ﲻһ�����Ǹ����ã�������ķ���
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;
//	while (1)//�����˼��ֱ���¶Ե�ʱ��break
//	{
//		printf("���һ�����֣�");     //�״�1.	int ret = rand()%100+1;  ���������������ŵ����ÿִ��һ��ѭ����������´��ˣ����ͻ�����һ�����������ô��Զ����¶�
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��!\n");     //�״�2. �߼�����Ӧ�ô��ʱ����ʾ��С��
//		}
//		else if (guess > ret)
//		{
//			printf("�´���!\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��");
//			break;
//		default:
//			printf("����������������룡");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//�Ա���ʦд�Ĵ��������д�Ĵ���
//1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	int magic, guess, counter = 0, ret;
//	char reply;
//	srand(time(NULL));
//	do {
//		counter = 0;
//		magic = rand() % 100 + 1;
//		do {
//			printf("Please guess a magic number:");
//			ret = scanf_s("%d", &guess);
//			while (ret != 1)
//			{
//				while (getchar() != '\n');
//				printf("Please guess a magic number:");
//				ret = scanf_s("%d", &guess);
//			}
//			counter++;
//			if (guess > magic)
//			{
//				printf("Wrong!Too big!\n");
//			}
//			else if (guess < magic)
//			{
//				printf("Wrong!Too small!\n");
//			}
//			else
//				printf("Right!\n");
//		} while (guess != magic && counter < 10);
//		printf("counter=%d\n", counter);
//		printf("Do you want to contine(Y/N)?");
//		scanf_s(" %c", &reply);
//	} while (reply == 'Y');
//	return 0;
//}


//2
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)//�����˼��ֱ���¶Ե�ʱ��break
//	{
//		printf("���һ�����֣�");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��!\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���!\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��");
//			break;
//		default:
//			printf("����������������룡");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//�����ָ�һ����




//Go to���

//��������goto���û����(������������������)��������ĳЩ�����»����õĵ���
// ��������������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ������
//goto�����ԭ�������ִ�����̣�������ȥ���ܻ�ʹ�����bug����
//������ʹ��goto���
//goto��䲻�ܿ纯����ͨ
// 
// 
//#include<stdio.h>
//int main()
//{
//	again:
//	printf("xixi\n");
//	printf("hehe\n");
//	goto again;      //ִ�е�goto��ʱ�������ת��again�ĵط��������again�����ⶨ���
//
//	return 0;
//}


//goto���Ҳ�������������飬���������ܿ纯����ͨ�������������ᷢ��������Ϊ���õĵ������������棬goto���ܿ纯����ͨ�⺯�����ں���
//void text()
//{
//	again:
//}
//#include<stdio.h>
//int main()
//{
//	printf("xixi\n");
//	printf("hehe\n");
//	goto again;//�����˱�ǩagain������δ���䶨��
//return 0;
//}


//�ػ�����
//1.�������������Ժ�1�����ڹػ�
//2.������롰���Ǵ���Ů������ȡ���ػ�
//

//��ô�õ�����1����֮�ڵ���ʱ�ػ���
//����C�������ػ�----cmd��������ʾ����----C:\Users\Lenovo>shutdown -s(�ػ�) -t�����ùػ�ʱ�䣩 60����ʮ���ػ���--�س�---����60���ػ�
//C:\Users\Lenovo>shutdown -a(ȡ���ػ�)
//ע��ո�

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>//���Ҫʹ��strcmp
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 360");//system ��ִ��ϵͳ����
//	again:
//	printf("��ע�⣬��ĵ��Խ�����360���ڹػ���������룺���Ǵ���Ů����ȡ���ػ�!\n");
//	scanf_s("%s", input);
//	if (strcmp(input, "���Ǵ���Ů") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}//goto,�������������

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>//���Ҫʹ��strcmp
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 360");//system ��ִ��ϵͳ����
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ�����360���ڹػ���������룺���Ǵ���Ů����ȡ���ػ�!\n");
//		scanf_s("%s", input);
//		if (strcmp(input, "���Ǵ���Ů") == 0)
//		{
//			system("shutdown -a");
//			break;//��ѭ�������goto
//		}
//	}
//	return 0;
//}




//��ʼѧ������  ��������
//����Ҫѧʲô
//1.������ʲô
//2.�⺯��
//3.�Զ��庯��
//4.��������
//5.��������
//6.������Ƕ�׵��ú���ʽ����
//7.�����Ķ��������
//8.�����ݹ�


//������ʲô
//��ѧ�ϵĺ��� ������--����--ֵ��
//C���� ���ֽ��ӳ���--��һ�����ͳ���ĳ���ִ��룬��1������������ɣ����������ĳ���ض����񣬶���������������룬�߱���ԵĶ�����
//һ���������������з���ֵ���ṩ�Թųǵķ�װ��ϸ�ڵ�����--��Щ���뱻����Ϊ�����


//����
//1.�⺯����C�����Դ���
//2.�Զ��庯�����Լ�д��

//1.�⺯��
//Ϊʲô�п⺯��
//��ΪһЩ��������ʹ�ã�Ϊ�˲���ɴ�������Ͳ����Ƶ��bug��ÿ������Ա������һ�׺���
//�⺯���У�cplusplus��վ�ɲ�ѯ�⺯��-----����ѧ
//����Ӣ������---����������Ϻܶ඼��Ӣ���

//�򵥵��ܽ�⺯����
//IO���������������صģ�  �ַ�����������  �ַ���������  �ڴ��������  ʱ��|���ں���  ��ѧ����  �����⺯��
//�и����ĵ���ѧ����������

/*#include<stdio.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello !";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
} */ //�ɹ��ˣ��� ��ӡ����hello

//�Զ��庯��
//����⺯���ܸ����е��£���Ҫ����Ա��ʲô
//�Զ��庯��ͬ��������������������������ֵ���ͣ�
//�������

//ret_type fun_name(paral,*)
//{
// statement;//�����
//}

//------ret_type�Ƿ�������    fun_nam�Ǻ�����  paral�Ǻ�������   {}���Ǻ����壬��ʹ����ʵ��


//#include<stdio.h>
//int get_max(int x, int y)   //��ǰ���int�Ƿ��ص��������ͣ��������Ҫ���أ�д��void 
//{
//	return(x > y ? x : y);
//}
//
//void text()
//{
//	printf("xixi");
//}
//
//int main()
//{	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int m=get_max(a, b);
//	printf("%d\n", m);          //��������һ���ӹ�������Ҫ��ԭ���ϣ��ӹ�����Ʒ-----�������ݣ�������������������������
//return 0;
//}


//�Լ�дһ���������Խ����������ͱ���������

//#include<stdio.h>
//void Swap(int x,int y)    //������������Ҫ�õ���������---��ȳ���ѧ�Ľ��ͺʹ׵Ľ���
//{
//	int z = 0;   //xy����ʽ����    
 
// //----ԭ��----��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��

//	z = x;
//	x = y;
//	y = z;
//}   //�������ˣ�����ǰ��һ����   //�������ˣ�����ǰ��һ����--���Խ����ʾ���������������---xyab�ĵ�ַ����ͬ--˵��abxy�Ƕ����ı���---xy���Լ��Ŀռ䣬��Ӱ��ab��ֵ
//
//int main()
//{
//	int a = 0;
//	int b = 0;     //a,b��ʵ��
//	scanf_s("%d %d", &a, &b);  //дһ������������
//	printf("����ǰ��%d %d\n", a,b);         
//	Swap(a, b);
//	printf("������%d %d\n", a,b);
//
//	return 0;
//}


//��xy��abմ�ߵķ���
// 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;  //ȡa�ĵ�ַ
//	a = 20;//ֱ�Ӹ�
//	*p = 20;//��Ӹ�a���õ�ַԶ�̸�
//}
#include<stdio.h>
void Swap(int *px, int *py)  //��ָ�����ȡxy---��a,b�ĵ�ַ
{
	int z = *px;//*px�൱��a
	*px = *py;
	*py = z;
}  

int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);  //дһ������������
	printf("����ǰ��%d %d\n", a, b);
	Swap(&a, &b);  //ע������ҲҪ��Ϊ&a---ȡa�ĵ�ַ
	printf("������%d %d\n", a, b);

	return 0;
}
//ֻҪ���˵�ַ����Զ�̿�����ab��ֵ

