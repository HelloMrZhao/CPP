#include <stdio.h>

//��Ŀ:���������������Ƕ������ɴ���:ѧϰ�ɼ�>=90 �ֵ�ͬѧ��A ��ʾ
//����� B ��ʾ��
//60 �����µ���C ��ʾ
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

//������ 16��
//��Ŀ:�������������� m �� n���������Լ������С��������
//.�������:����շ������
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
