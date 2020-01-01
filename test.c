#include <stdio.h>
#include <math.h>

float jisuan(power,speed);

int main(void)
{
	float value;
	
	float power,speed;
	printf("please input motor's power(W):");
	scanf("%f", &power);
	
	printf("please input motor's speed:");
	scanf("%f",&speed);
	
	value=jisuan(power,speed);
	printf("The torque of motor is :%f Nm",value);
}
	
float jisuan(power,speed)
{
	float speed,power;
	float temp;
	temp=9.55*power;
	temp=temp/speed;
	return temp;
}