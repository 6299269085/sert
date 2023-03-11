#include<stdio.h>
int main(){


//to find even or odd...
                                                        //RISHAV RAJ
int n,m;                                                  //2022UG1065
for( n>=1;n<101;n++ )

	if(n%2==0)
	{
	printf("%d even\n",n);
}


	else
	{
	
	printf("%d odd\n",n);
}
printf("enter a number to know it is even or odd \n");
scanf("%d",&m);
if (m%2==0)
{
	printf("%d is an even number",m);
}
else
{  printf ("%d is an odd number",m);
}
 return 0;
}
