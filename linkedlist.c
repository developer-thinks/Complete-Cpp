#include<stdio.h>
struct lst
{
	int n;
	struct lst* next;
};
int main()
{
	int m;
	struct lst *A,*B=0, *H=0;
	while(1)
	{
		printf("enter integer\n");
		scanf("%d",&m);
		if(m==0)
		break;
		
		A= (struct lst*)malloc(sizeof(struct lst));
		A->n=m;
		A->next=0;
		H=A;
		
	}
	printf("H= %d",H);
	printf("numbers in single ll are\n");
	while(H)
	{
		printf("%d\t",H->n);
		H=H->next;
		
	}
	return 0;
}
