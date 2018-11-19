#ifndef _FIXED_POINT_H_
#define _FIXED_POINT_H_

typedef int fp;

#define shift 14

#define fp_conv(a) ((fp) (a << shift))
#define fp_add(a, b) (a + b)
#define fp_add_int(a, b) (a + (b << shift))
#define fp_sub(a, b) (a - b)
#define fp_sub_int(a, b) (a - (b << shift))
#define fp_mul_int(a, b) (a * b)
#define fp_div_int(a, b) (a / b)
#define fp_mul(a, b) ((fp) (((int64_t) a) * b >> shift))
#define fp_div(a, b) ((fp) (((int64_t) a << shift) / b))
#define fp_int_part(a) (a >> shift)
#define fp_round(a) (a >= 0 ? ((a + (1 << (shift - 1))) >> shift) : ((a - (1 << (shift - 1))) >> shift))

#endif
