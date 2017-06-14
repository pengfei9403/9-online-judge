#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std ; 

/*

立方根的逼近迭代方程是 y(n+1) = y(n)*2/3 + x/(3*y(n)*y(n)),其中y0=x.求给定的x经过n次迭代后立方根的值。

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
