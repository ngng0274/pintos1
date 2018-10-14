#ifndef _FIXED_POINT_H_
#define _FIXED_POINT_H_

typedef int fp;

#define shift 14

fp fp_conv (int a);
fp fp_add (fp a, fp b);
fp fp_add_int (fp a, int b);
fp fp_sub (fp a, fp b);
fp fp_sub_int (fp a, int b);
fp fp_mul_int (fp a, int b);
fp fp_div_int (fp a, int b);
fp fp_mul (fp a, fp b);
fp fp_div (fp a, fp b);
int fp_int_part (fp a);
int fp_round (fp a);

#endif
