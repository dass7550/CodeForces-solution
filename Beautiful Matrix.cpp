#include<stdio.h>
main()
{
	int i=1,j=1,ar[6][6],a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(ar[i][j]==1)
			{
				a=0;
				break;
			}
		}
	     if(a==0){break;}
	}
	if(i>=3){i=i-3;}
	else{i=3-i;}
	if(j>=3){j=j-3;}
	else{j=3-j;}
	printf("%d\n",i+j);
	return 0;
}