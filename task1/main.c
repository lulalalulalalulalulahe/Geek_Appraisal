#include <stdio.h>
int main()
{
	double h = 0.001;
	double a = 1;
	int n = 0;
	double t;
	double x = 0;
	double y;
	printf("�����벽����");

	printf("�������ʼֵ��");
	
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
	printf("΢�ַ��̵����ն�̬=%f ��ʱx��ȡֵΪ%f",a,x);
	return 0;
    
    
} 
