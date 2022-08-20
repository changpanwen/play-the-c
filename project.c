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
	int i[5]={1,2,3,4,9};
	int *a = &i[2];
	printf("%d\n", a[2]);//这里的相当于a[2]==*(a+2);(记得结合以上代码)
	return 0;
}