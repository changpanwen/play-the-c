#include <stdio.h>
int main()
{
	///*char a[] = {"Hello World!"};
	//char *b = a;
	//int i,t;
	//t = strlen(a);
	//for (i = 0; i < t; i++)
	//	printf("%c",*(b+i));
	//printf("\n");*/
	//char a[] = { "Hello World!" };
	//char *b = a;
	//while (*b != '\0')
	//{
	//	printf("%c",*b++);
	//}
	//int a[5] = {1,2,3,4,9};
	//int *b = &a[2];
	//printf("%d\n",*(b+2));



	//int i[5]={1,2,3,4,9};
	//int *a = &i[2];
	//printf("%d\n", a[2]);//������൱��a[2]==*(a+2);(�ǵý�����ϴ���)
	//return 0;


	/*int a[4][5] = {0};//��ά����ѧϰ
	int i, j, k=0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = k++;
		}
	}
	printf("%d\n",**(a+1));//���**(a+1)�����Է������֣�*(a+1)==a[1][0],Ҳ���ǵڶ�����Ԫ�ص�ַ����Ϊ�ǵ�ַ����Ҫ�����ò��õ������ֵ��
	printf("%p\n",*(a+1));
	printf("%p\n",a[1]);
	printf("%d\n",*(*(a+1)+3));//*(*(a+1)+3),���Կ���*(a+1)+3,�ڶ�����Ԫ�ص�ַ�ڼ�3������Ϊa��int���͵ļ�3�͵��ڼ�12���ֽڣ����Ծ͵���a[1][0+3];
	printf("%d\n", a[1][3]);
	return 0;*/

	/*int a=520;
	int *p=&a;
	int **pp = &p;
	printf("%d,%d,%d\n",a,*p,**pp);
	printf("%p,%p,%p\n", a, *p, **pp);*/
	
	//char *a[] = {"���ƽ�ʱ����","��ë�š�","���ʱ��ۡ�","��������й���"};//ָ�����飬���ָ������飻
	//char **mylovebook = &a[0];//ָ��ָ���ָ�룬����Ҫ�ú�˼��һ��
	//char **BOOK = &a;
	//int i;
	//printf("��������������ǣ�%s\n",*mylovebook);
	//for (i = 0; i < 4; i++)
	//{
	//	printf("%s\n",*(BOOK+i));
	//}


	/*int a[][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };//
	int (*p)[4] = a;//����ָ�룻
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%-2d ", *(*(p + i) + j));
		}
		printf("\n");
	}*/
	return 0;
}