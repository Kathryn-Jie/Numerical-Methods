//Q1. Write a C++ function program to find the root of the equation x^4-11x+8=0, correct to three decimal places, using method of false position. The root lies between 1 and 2.
/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define f(x)(pow(x,4)-11*x+8)
int main()
{ double x[15],a=1,b=2;
int i;
x[0]=a;
for(i=1;i<15;i++)
{ x[i]=(a*f(b)-b*f(a))/(f(b)-f(a));
if(f(a)*f(x[i])<0)
b=x[i];
else
a=x[i];
if(fabs(x[i]-x[i-1])<pow(10,-3))
goto write;
}
write:
cout<<"The root is "<<fixed<<setprecision(3)<<x[i];
return 0;
}*/
//The root is 1.892

//Q2.Write a C++ function program to find the root of the equation x^3-4x-8.95=0, correct to three decimal places, using bisection method. The root lies between 2 and 3.
/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define f(x)(pow(x,3)-4*x-8.95)

int main()
{int i; double a=2,b=3; double m,r,f[25];

for(i=1;i<25;i++)
{f[1]=f(a);
f[2]=f(b);
m=((a+b)/2);
f[3]=f(m);

if (f[1]*f[3]<0)
b=m;
else
a=m;
}

if (fabs(a-b)<pow(10,-5))
r=(a+b)/2;
cout<<"The root is "<<fixed<<setprecision(3)<<r<<endl;
return 0;
}*/
//The root is 2.704

//Q3i.Write a C++ program to evaluate f(x)(1/(1+pow(x,2)) using Simpson¡¯s 1/3 rule
/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define f(x)(1/(1+pow(x,2)))
int main()
{ int i,n=6;
double a=0,b=12,sum_odd=0,sum_even=0,h,Simpson_13;
h=(b-a)/n;
for(i=1;i<n;i++)
{ if(i%2==0)
sum_even=sum_even+f(a+i*h);
else
sum_odd=sum_odd+f(a+i*h);
}
Simpson_13=(h/3)*(f(a)+f(b)+4*sum_odd+2*sum_even);
cout<<"The value of integral is "<<setprecision(5)<<fixed<<Simpson_13<<endl;
return 0;
}*/
//The value of integral is 1.40202

//Q3ii. using Simpson¡¯s 3/8 rule
/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define f(x)(1/(1+pow(x,2)))
int main()
{ int i,n=6;
double a=0,b=12,sum_miss=0,sum_triple=0,h,Simpson_38;
h=(b-a)/n;
for(i=1;i<n;i++)
{ if(i%3==0)
sum_triple=sum_triple+f(a+i*h);
else
sum_miss=sum_miss+f(a+i*h);
}
Simpson_38=(3*h/8)*(f(a)+f(b)+3*sum_miss+2*sum_triple);
cout<<"The value of integral is "<<setprecision(5)<<fixed<<Simpson_38<<endl;
return 0;
}*/
//The value of integral is 1.43496

//Q3iii. using Trapezoidal rule with six intervals
/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define f(x)(1/(1+pow(x,2)))
int main()
{ int i,n=6;
double a=0,b=12,sum=0,h,Trap;
h=(b-a)/n;
for(i=1;i<n;i++)
{ sum=sum+f(a+i*h);}
Trap=(h/2)*(f(a)+2*sum+f(b));
cout<<"The value of integral is "<<setprecision(5)<<fixed<<Trap<<endl;
return 0;
}*/
//The value of integral is 1.62917

//Q4.Write a C++ program to find the smallest positive root of the equation x^3¨C4x+1= 0 lying between 0 and 1 correct to 4 places of decimals using Simple Iteration method.
//Successive Approximation Method 
/*
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x);
double g(double x);
int main ()
{double xo=0,xn=1;
cout<<"SIMPLE INTERATION METHOD"<<endl;
cout<<"x^3-4*x+1=0\n"<<endl;

while (f(xo)*f(xn)>0){xn=xo;xo++;}
while (fabs(xn-xo)>0.000001)
{xo=xn;
xn=g(xo);
cout<<setprecision(4)<<fixed<<xo<<"\t"<<xn<<endl;
}
cout<<"\nThe root is "<<setprecision(4)<<fixed<<xn<<endl;
return 0;
}

double f(double x)
{return (double)x*x*x-4*x+1;}
double g(double x)
{return (double)pow((4*x-1),0.333);}*/

/*SUCCESSIVE APPROXIMATION METHOD
x^3-4*x+1=0

1       1.44172
1.44172 1.6821
1.6821  1.78824
1.78824 1.83132
1.83132 1.84825
1.84825 1.85481
1.85481 1.85734
1.85734 1.85832
1.85832 1.85869
1.85869 1.85884
1.85884 1.85889
1.85889 1.85892
1.85892 1.85892
1.85892 1.85893
1.85893 1.85893
1.85893 1.85893

The root is 1.8589*/

//Q5. Write a C++ program to solve dy/dx=x+y^2, y(1)=0 at x=1.3 using Euler¡¯s method
/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define f(x,y)(x+y*y)

int main()
{
	int i;
	double h=0.1,x[4],y[4];
	x[0]=1;
	y[0]=0;
	cout<<"x   \t	y "<<endl;
	for(i=0;i<4;i++)
	{y[i+1]=y[i]+h*f(x[i],y[i]);
	x[i+1]=x[i]+h;
	cout<<x[i]<<"\t"<<setprecision(6)<<fixed<<y[i]<<endl;
	}
	return 0;
}*/
/*
x               y
1       		0.000000
1.100000        0.100000
1.200000        0.211000
1.300000        0.335452*/

//Q6.Write a C++ program using second order Runge-Kutta method with h=0.1 to find y(2.5) for dy/dx=-xy^2, y(2)=1.
/*
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define f(x,y)(-x*y*y)

int main()
{int i; 
float h=0.1,k1,k2,x[6],y[6];
x[0]=2, y[0]=1;
cout<<"x\ty\t"<<endl;
for(i=0;i<6;i++)
{k1=h*f(x[i],y[i]);
k2=h*f((x[i]+h/2),(y[i]+k1/2));
y[i+1]=y[i]+k2;
x[i+1]=x[i]+h;
cout<<x[i]<<"\t"<<setprecision(5)<<fixed<<y[i]<<endl;
}
return 0;
}*/
/*
x       y
2       1.00000
2.10000 0.83395
2.20000 0.70946
2.30000 0.61320
2.40000 0.53686
2.50000 0.47505*/

