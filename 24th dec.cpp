 #include<stdio.h>
 int main()
 {
	int i=5;
	int z=++i + ++i;
	
		printf("result is %d\n",z);
	
	{
	
		int i=5;
	int l= i++ + i++ ;
printf(" 2nd result is %d\n",l); 
}
{
	int i=5;
	printf("3rd result is %d\n ",i-- + i--);
}{
int i=5;
printf("4th result is %d\n", --i + --i);}
	return 0;
}


  

