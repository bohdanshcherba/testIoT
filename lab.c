/*
ІР-13
Щерба Богдан
Лабораторна №1
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x , y , res ;
    //x=0.357;
    //y=2.031;
    printf("Enter x,y:\n");
    scanf(" %lf\n %lf",&x,&y);
  
    res = pow(x,cos(y))-pow((tan(x)),(sqrt(y-x)))-19.12*log(pow(y,3)) ;
    
    printf("pow(x,cos(y))-pow((tan(x)),(sqrt(y-x)))-19.12*log(pow(y,3)) \n");
    printf("x = %.3lf\ny = %.3lf \n",x,y);
    printf("result = %lf",res );

    return(0);
}