#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,flag=0;
	char rem;
	char dot;
	printf("Enter the IP Adress\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
		if(i == 3)
		{
			break;
		}
		scanf("%c",&dot);
		if(dot != '.')
		{
			flag = 1;
		}
	}
	scanf("%c",&rem);
	if(rem != '\n')
	{
		flag = 1;
	}
	for(i=0;i<4;i++)
	{
		if(!(a[i]>=0 && a[i]<256))
			flag = 1;
	}
	if(flag == 1)
	{
		printf("Entered IP is Invalid\n");
	}
	else{
	if(a[0]>=0 && a[0]<128)
	{
		printf("IP BELONGS TO CLASS - A\n ");
		printf("NETWORK ID = %d\n",a[0]);
		printf("HOST ID = %d.%d.%d\n",a[1],a[2],a[3]);
	}
	else if(a[0]>=128 && a[0]<192)
	{
		printf("IP BELONGS TO CLASS - B\n ");
		printf("NETWORK ID = %d.%d\n",a[0],a[1]);
		printf("HOST ID = %d.%d\n",a[2],a[3]);
	}
	else if(a[0]>=192 && a[0]<224)
	{
		printf("IP BELONGS TO CLASS - C\n ");
		printf("NETWORK ID = %d.%d.%d\n",a[0],a[1],a[2]);
		printf("HOST ID = %d\n",a[3]);
	}
	else if(a[0]>=224 && a[0]<240)
	{
		printf("IP BELONGS TO CLASS - D\n ");
		printf("IP ADRESS = %d.%d.%d.%d\n",a[0],a[1],a[2],a[3]);
	}
	else{
		printf("IP BELONGS TO CLASS - E\n ");
		printf("IP ADRESS = %d.%d.%d.%d\n",a[0],a[1],a[2],a[3]);
	}
	}
	return 0;
}

