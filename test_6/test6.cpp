#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits> 
using namespace std;
 
//int main(){
//	
//	double r,c,s,v;
//	double pi_value = M_PI;
//	std::cout << "������뾶��" <<endl;
//	std::cin >> r;
//	//�ܳ�
//	c = 2*M_PI*r;
//	 
//	//���	
//	s = pi_value*pow(r,2);
//	
//	//���
//	 v = (4/3)*M_PI*pow(r,3); 
//	 std::cout << "�ܳ�C:" << std::setprecision(60) << c << "\n" 
//	 << "���s:" << s <<"\n" << "���v:" << v <<endl; 
//	return 0;
//}



//int function (int x){	
//	if(x<1){
//		return x;
//	}else if(x>=1 && x<10){
//		return 2*x-1;
//	}
//	if(x >= 10){
//		return 3*x - 11;
//	}
//	return 0; //���Ĭ�Ϸ���ֵ 
//	
//}
//
//int main(){
//	
//	int x,y;
//	std::cout<< "������x��ֵ��" <<endl;
//	std::cout<< "����999�˳���" << endl;
//	while(true){	
//		std::cin >> x;
//		if(cin.fail()){ //��������Ƿ�ʧ���������˷����� 
//			cin.clear(); //�������״̬ 
//		    cin.ignore(numeric_limits<streamsize>::max(),'\n');
//			cout <<"�����Ч��������һ��������"<<endl;
//			continue; //������һ��ѭ��  
//		}
//		if(x == 999){	
//			break;
//		} 
//		y = function(x);
//		cout << "y��ֵΪ:" << y << endl;
//		
//	}
//	
//	return 0;
//}

//�ݹ鶨�壺�����õ��ƹ�ʽ
//f(0)=0 ��f(1)=1 ��f(n)=f(n-1)+f(n-2)��n��2������������������λ�õ���

//쳲��������� 
int main(){
	int n=20;	
	int a = 0,b = 1,c;
	// ���ǰ����
    cout << a << " " << b << " ";
	for(int i = 2; i < n; i++){
	
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	
	}
	return 0;
}



