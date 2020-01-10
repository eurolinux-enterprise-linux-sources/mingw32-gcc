/* Test that {,x,e,p,t,s,w,a,b,i}mmintrin.h, xopintrin.h, mm3dnow.h,
   fma4intrin.h, abmintrin.h, bmiintrin.h, tbmintrin.h, lwpintrin.h,
   popcntintrin.h and mm_malloc.h are usable
   with -O -std=c89 -pedantic-errors.  */
/* { dg-do compile } */
/* { dg-options "-O -std=c89 -pedantic-errors -march=k8 -m3dnow -mavx -mfma4 -mxop -maes -mpclmul -mpopcnt -mabm -mbmi -mtbm -mlwp -mfsgsbase -mrdrnd -mf16c" } */

#include <x86intrin.h>

int dummy;
