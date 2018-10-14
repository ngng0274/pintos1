#include <stdio.h>
#include "threads/fixed_point.h"

fp fp_conv(int a)
{
	return (fp) (a << shift);
}

fp fp_add (fp a, fp b)
{
	return a + b;
}

fp fp_add_int (fp a, int b)
{
	return a + (b << shift);
}

fp fp_sub (fp a, fp b)
{
	return a - b;
}

fp fp_sub_int (fp a, int b)
{
	return a - (b << shift);
}

fp fp_mul_int (fp a, int b)
{
	return a * b;
}

fp fp_div_int (fp a, int b)
{
	return a / b;
}

fp fp_mul (fp a, fp b)
{
	return (fp) (((int64_t) a) * b >> shift);
}

fp fp_div (fp a, fp b)
{
	return (fp) (((int64_t) a << shift) / b);
}

int fp_int_part(fp a)
{
	return a >> shift;
}

int fp_round(fp a)
{
	if(a >= 0)
		return (a + (1 << (shift - 1))) >> shift;
	else
		return (a - (1 << (shift - 1))) >> shift;
}
