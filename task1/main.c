#include <stdio.h>
int main()
{
	double h = 0.001;
	double a = 1;
	int n = 0;
	double t;
	double x = 0;
	double y;
	printf("请输入步长：");

	printf("请输入初始值：");
	
	y = a*(1-h);
    t = a - y;
    while(t>0.001*h){
    	y = a*(1-h);
    	t = a - y;
    	x = x + h;
    	a = y;
    	n++;
    	printf("x = %f  f(%d)=%f\n  ",x,n,a);
    	
	}
	printf("微分方程的最终定态=%f 此时x的取值为%f",a,x);
	return 0;
    
    
} 
