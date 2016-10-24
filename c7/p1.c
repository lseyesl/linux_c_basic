#include <stdio.h>
#include <math.h>
struct complex_struct {
	double x,y;	
};
double real_part(struct complex_struct z)
{
	return z.x;	
}
double img_part(struct complex_struct z)
{
	return z.y;	
}

double magnitude(struct complex_struct z)
{
	return sqrt(z.x * z.x + z.y * z.y);	
}

double angle(struct complex_struct z)
{
	double PI = acos(-1.0);

	if(z.x>0)
		return atan(z.y/z.x);
	else
		return atan(z.y/z.x)+PI;
}
struct complex_struct make_from_real_img(double x,double y)
{
	struct complex_struct z;
	z.x=x;
	z.y=y;
	return z;
}
struct complex_struct make_from_msg_ang(double r,double A)
{
	struct complex_struct z;
	z.x = r*cos(A);
	z.y = r*sin(A);
	return z;
}

struct complex_struct add_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_real_img(real_part(z1)+real_part(z2),img_part(z1)+img_part(z2));	
}

struct complex_struct sub_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_real_img(real_part(z1)-real_part(z2),img_part(z1)-img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_mag_ang(2.1,2.0);	
}

struct complex_struct div_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_mag_ang(3.4,1.1);	
}

int cus_prt(struct complex_struct z)
{
	if(z.x)
	{
		printf("%f",z.x);	
	}
	if(z.y&&z.y>0&&z.x)
	{
		printf("+%fi",z.y);	
	}
	if(z.y&&z.y<0)
	{
		printf("%fi",z.y);	
	}
	printf("\n");
	return 0;
}

int main(void)
{
	struct complex_struct a = {x:1.0,y:2.0};
	struct complex_struct b = {x:0.0,y:-4.0};
	struct complex_struct c = {x:0.0,y:5.0};
	cus_prt(a);
	cus_prt(b);
	cus_prt(c);
}
