#include <stdio.h>

//题目:利用条件运算符的嵌套来完成此题:学习成绩>=90 分的同学用A 表示
//间的用 B 表示，
//60 分以下的用C 表示
//int main(){
//	
//	int score;
//	char grade;
//	printf("please input a score\n");
//	scanf("%d",&score);
//	grade=score>=90?'A':(score>=60?'B':'C');
//	printf("%d belongs to %c",score,grade);
//	
//	return 0;
//}

//【程序 16】
//题目:输入两个正整数 m 和 n，求其最大公约数和最小公倍数。
//.程序分析:利用辗除法。
//int main(){
//	int a,b,num1,num2,temp;
//	scanf("%d%d",&num1,&num2);
//	if(num1<num2){
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	a = num1; b = num2;
//	while(b!=0)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;	 
//	}
//	printf("gongyueshu:%d\n",a);
//	printf("gongbeishu:%d\n",num1*num2/a);
//	
//	return 0;
//}


int main(){
	char c;
	int letters = 0,space = 0,digit = 0,others = 0;
	printf("please input some characters\n");
	while((c = getchar()!='\n'))
	{
		if(c>='a'&&c<='A'&&c<='Z')
		letters++;
		else if(c==' ')
		space++;
		else if(c>='0'&&c<='9')
		digit++;
		else
		others++;		
	}
	printf("all in all:char=%d space = %d digit = %d others=%d\n",letters,space,digit,others);
	
	return 0;
}
