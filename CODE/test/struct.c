#include<stdio.h>

struct date{

	char user[10];
	char pass[10];
};
void SetPass()
{
	printf("pass!\n");
}
int main()
{
	char getC;
	FILE *fp;
	if((fp=fopen("./date.bat","rb"))==NULL);
	{
		printf("can not find \" date.bat\"\n");
		printf("are you set password now?\n Press \' Y \' or \'N\' netx:\t");
		getC=getchar();
//		getchar();
		if(getC=='Y')
		SetPass();
		
	}
	return 0;
}
