/*------Not complete-------*/
#include <math.h>
#include <stdio.h>

struct rat { 
	int u, d;
};

int up(struct rat s)
{
	return s.u;
}

int down(struct rat s)
{
	return s.d;
}

struct rat make_rat(int u, int d)
{
	struct rat s = { 0, 0 };
	s.u = u;
	s.d = d;
	return s;
}

int gcd(int a, int b)
{
        if (a % b == 0) {
                return b;
        }
        else {
                return gcd(b, a%b);
        }
}

struct rat add_rat(struct rat s1, struct rat s2)
{
	struct rat s = { 0, 0 };
	int a1 = s1.d;
	int a2 = s2.d;
	s.d = gcd(a1, a2);
	printf("%d\n", s.d);
	s.u = s1.u / (s1.d / s.d) + s2.u / (s2.d / s.d);
	printf("%d\n", s.u);
	return s;
}

void print_rat(struct rat s)
{       
	int u = up(s); 
	int d = down(s);
	while (u % 2 == 0 && d % 2 == 0) {
		u = u / 2;
		d = d / 2;
	}
	printf("%d/%d\n", u, d);
}

int main(void)
{
	struct rat a = make_rat(6, 20);
	struct rat b = make_rat(12, 6);
	print_rat(add_rat(a, b));
	return 0;
}

