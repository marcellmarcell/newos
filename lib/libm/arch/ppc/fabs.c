/*      $NetBSD: fabs.c,v 1.2 2001/05/25 12:28:12 tsubai Exp $  */

#include <math.h>

double
fabs(double x)
{
	__asm__ __volatile("fabs %0,%1" : "=f"(x) : "f"(x));
}
