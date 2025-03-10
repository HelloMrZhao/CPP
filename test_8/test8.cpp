//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	//存款所得本息和 
//	//法一：
//	double p1,p2,p3;
//	//活期 
//	p1 = 1000*(1+0.0036);
//	//一年期 
//	p2 = 1000*(1+0.0225);
//	//两次半年期
//	p3 = 1000*(1+0.0198/2)*(1+0.0198/2);
//	 cout<<"活期："<< p1 <<"\n一年期："<< p2 <<"\n两次半年期："<< p3 <<endl;
//	return 0;
//} 
// 

//
//#include<iostream>
//using namespace std;
//#define students 30
//#define course 4
//
//int main(){
//	
//	int scores[students][course];
//	int i,j;
//	
//	//输入学生成绩
//	for(i = 0; i < students; i++){
//		cout<<"请输入第"<<i+1;
//		cout<<"个孩子的4门课程成绩：";
//		for(j = 0; j < course; j++){
//			cin>> scores[i][j];
//		}
//	} 
//	
//	//查找有一门以上课程不及格的学生并输出成绩
//	for (i = 0; i < students; i++){
//		int failcount = 0;
//		for (j = 0; j < course;j++){
//			if(scores[i][j] < 60)
//			failcount++;
//		}
//		if(failcount > 1){
//		cout << "第"<< i+1<<"个学生有一门以上课程不及格，成绩如下："<<endl;
//	    for(j = 0; j < course; j++){
//	    	cout << scores[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
//	} 
//	
//	return 0;
//}


