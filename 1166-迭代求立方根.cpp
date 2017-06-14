#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std ; 

/*

�������ıƽ����������� y(n+1) = y(n)*2/3 + x/(3*y(n)*y(n)),����y0=x.�������x����n�ε�������������ֵ��

*/

double func(double x , int n){
	double temp = 0 ;
	double temp2 = 0 ;
	static int i = 0 ;
	if(n == 0){
		return x ;
	}else{
		temp2 = func(x , n-1) ;
		temp = temp2*((double)2/3) + x/(3*temp2*temp2) ;	
	}
	return temp ;	
}

int main(){
	double x ;
	int n ;
	while(scanf("%lf %d",&x,&n)!=EOF){
		printf("%.6lf\n",func(x , n)) ;
//		cout <<setprecision(6) <<std::fixed << n <<endl;
	} 
	return 0 ;
}
