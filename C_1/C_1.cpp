#include <stdio.h>
//��Ŀ:��1��2��3��4������,����ɶ��ٸ�������ͬ�����ظ����ֵ���λ��?���Ƕ���?
//int main(){
//	
//	int i,j,k,count=0;
//	printf("\n");
//	for(int i = 1; i < 5; i++){
//		for(int j = 1; j < 5; j++){
//			for(k = 1; k < 5; k++){
//				if(i!=j&&i!=k&&j!=k){
//					printf("%d%d%d ",i,j,k);
//				    count++;	
//				}						
//			}
//		}
//	}
//	
//	printf("\n\n����=%d\n",count);
//	return 0;
//} 

//2.������� 
//int main(){
//	
//	long int i;
//	int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
//	scanf("%ld",&i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.75;
//	bonus4 = bonus2 + 200000 * 0.5;
//	bonus6 = bonus4 + 200000 * 0.3;
//	bonus10 = bonus6 + 4000000 * 0.15;
//	 
//	if(i <= 100000)
//	bonus1 = i * 0.1;
//	else if(i <= 200000)
//	bonus = bonus1 + (i-100000)*0.075;
//	else if(i <= 400000)
//	bonus = bonus2 + (i-200000)*0.05 ;
//	else if (i <= 600000)
//	bonus = bonus4 + (i-400000) * 0.03;
//	else if(i <= 1000000)
//	bonus = bonus6 + (i-600000) * 0.015;
//	else 
//	bonus = bonus10 + (i-1000000)*0.01;
//	
//	printf("bonus =%d",bonus);
//	
//	return 0;
//	
//} 


//3.��Ŀ:һ������,������100����һ����ȫƽ����,�ټ���168����һ����ȫƽ����,����
//�����Ƕ���?

//#include <math.h>
//int main(){
//	
//	long int i,x,y,z;
//	for(i =1; i<100000;i++){
//		x =sqrt(i+100);
//		y = sqrt(i+268);
//		if(x*x == i+100 && y*y == i + 268)
//		printf("\n%ld\n",i);
//	}
//	return 0; 
//}


//4.��Ŀ:����ĳ��ĳ��ĳ��,�ж���һ������һ��ĵڼ���?
//int main(){	
//	int year,month,day,sum;
//	scanf("%d%d%d",&year,&month,&day);
//	//�ж����� 
//		switch(month)  	//����2����29�죬ƽ��2����28��
//	{
//		case 1: sum = 0; break;
//		case 2: sum = 31; break;
//		case 3: sum = 60; break;
//		case 4: sum = 91; break; 
//		case 5: sum = 121; break;
//		case 6: sum = 152; break;
//		case 7: sum = 182; break;
//		case 8: sum = 213; break; 
//		case 9: sum = 244; break;
//		case 10: sum = 274; break;
//		case 11: sum = 305; break;
//		case 12: sum = 335; break;
//		default:printf("data error"); break; 
//	}
//	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		sum = sum + day;
//	else
//	if(month > 2)
//	  sum = sum-1;	 
//	  printf("��%d",sum);
//	  printf("��\n");
//
//	return 0;
//}

//5.��Ŀ:������������x,y,z,�������������С�������

//int main(){
//	
//	int a,x,y,z;
//
//	int sum[3] = {};
//	for(int i = 0; i < 3;i++){
//	    scanf("%d",&a);
//		sum[i] = a;
//	}
//	//�жϴ�С
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j< 3-i-1; j++){
//			if(sum[j] > sum[j+1]){
//				int temp = sum[j+1];
//			    sum[j+1] = sum[j];
//			    sum[j] = temp;
//			}
//		
//		}
//	}
//	
//		for(int i = 0; i < 3;i++){
//		printf("%d ",sum[i]);
//	} 
//
//	return 0;
//}



