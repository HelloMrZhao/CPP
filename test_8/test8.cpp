//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	//������ñ�Ϣ�� 
//	//��һ��
//	double p1,p2,p3;
//	//���� 
//	p1 = 1000*(1+0.0036);
//	//һ���� 
//	p2 = 1000*(1+0.0225);
//	//���ΰ�����
//	p3 = 1000*(1+0.0198/2)*(1+0.0198/2);
//	 cout<<"���ڣ�"<< p1 <<"\nһ���ڣ�"<< p2 <<"\n���ΰ����ڣ�"<< p3 <<endl;
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
//	//����ѧ���ɼ�
//	for(i = 0; i < students; i++){
//		cout<<"�������"<<i+1;
//		cout<<"�����ӵ�4�ſγ̳ɼ���";
//		for(j = 0; j < course; j++){
//			cin>> scores[i][j];
//		}
//	} 
//	
//	//������һ�����Ͽγ̲������ѧ��������ɼ�
//	for (i = 0; i < students; i++){
//		int failcount = 0;
//		for (j = 0; j < course;j++){
//			if(scores[i][j] < 60)
//			failcount++;
//		}
//		if(failcount > 1){
//		cout << "��"<< i+1<<"��ѧ����һ�����Ͽγ̲����񣬳ɼ����£�"<<endl;
//	    for(j = 0; j < course; j++){
//	    	cout << scores[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
//	} 
//	
//	return 0;
//}


