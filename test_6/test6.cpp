#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits> 
using namespace std;
 
//int main(){
//	
//	double r,c,s,v;
//	double pi_value = M_PI;
//	std::cout << "请输入半径：" <<endl;
//	std::cin >> r;
//	//周长
//	c = 2*M_PI*r;
//	 
//	//面积	
//	s = pi_value*pow(r,2);
//	
//	//体积
//	 v = (4/3)*M_PI*pow(r,3); 
//	 std::cout << "周长C:" << std::setprecision(60) << c << "\n" 
//	 << "面积s:" << s <<"\n" << "体积v:" << v <<endl; 
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
//	return 0; //添加默认返回值 
//	
//}
//
//int main(){
//	
//	int x,y;
//	std::cout<< "请输入x的值：" <<endl;
//	std::cout<< "输入999退出：" << endl;
//	while(true){	
//		std::cin >> x;
//		if(cin.fail()){ //检查输入是否失败如输入了非整数 
//			cin.clear(); //清楚错误状态 
//		    cin.ignore(numeric_limits<streamsize>::max(),'\n');
//			cout <<"输出无效，请输入一个整数。"<<endl;
//			continue; //继续下一次循环  
//		}
//		if(x == 999){	
//			break;
//		} 
//		y = function(x);
//		cout << "y的值为:" << y << endl;
//		
//	}
//	
//	return 0;
//}

//递归定义：可以用递推公式
//f(0)=0 ，f(1)=1 ，f(n)=f(n-1)+f(n-2)（n≥2）来计算数列中任意位置的数

//斐波那契数列 
int main(){
	int n=20;	
	int a = 0,b = 1,c;
	// 输出前两项
    cout << a << " " << b << " ";
	for(int i = 2; i < n; i++){
	
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	
	}
	return 0;
}



