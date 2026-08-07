#ifndef __X87RUN_PRIVATE_H_
#define __X87RUN_PRIVATE_H_

#include <stdint.h>
#include <math.h>
#include <fenv.h>

#define PI      3.14159265358979323846
#define L2E     1.4426950408889634
#define L2T     3.3219280948873623
#define LN2     0.69314718055994531
#define LG2     0.3010299956639812

#define TAGS_EMPTY 0b1111111111111111

static inline void fpu_do_push(void) {
  fprintf(stderr, "TODO: fpu_do_push \n");
  assert(0);
}

#endif //__X87RUN_PRIVATE_H_
