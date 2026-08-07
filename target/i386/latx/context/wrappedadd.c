//#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <assert.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "library_private.h"
#include "box64context.h"
#include "librarian.h"
#include "callback.h"
#include "myalign.h"
//#pragma GCC diagnostic push
//#pragma GCC diagnostic ignored "-Wmissing-prototypes"

const char* addName = "libadd.so";
#define LIBNAME add

#include "generated/wrappedaddtypes.h"

#include "wrappercallback.h"

EXPORT int my_testAdd( int a, int b);
EXPORT int my_testAdd( int a, int b) {
    int ret = my->testAdd(a, b);
    fprintf(stderr, "my_testAdd return: %d \n", ret);
    return ret;
}
#if 1
#define CUSTOM_INIT \
    getMy(lib);

#define CUSTOM_FINI \
    freeMy();
#endif
#include "wrappedlib_init.h"
