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
	//printf("%d\n", a[2]);//这里的相当于a[2]==*(a+2);(记得结合以上代码)
	//return 0;


	/*int a[4][5] = {0};//二维数组学习
	int i, j, k=0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = k++;
		}
	}
	printf("%d\n",**(a+1));//这里“**(a+1)”可以分俩部分，*(a+1)==a[1][0],也就是第二行首元素地址，因为是地址所以要解引用才拿到里面的值；
	printf("%p\n",*(a+1));
	printf("%p\n",a[1]);
	printf("%d\n",*(*(a+1)+3));//*(*(a+1)+3),可以看成*(a+1)+3,第二行首元素地址在加3，有因为a是int类型的加3就等于加12个字节，所以就等于a[1][0+3];
	printf("%d\n", a[1][3]);
	return 0;*/
}