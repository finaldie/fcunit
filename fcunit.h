#ifndef FCUNIT_H
#define FCUNIT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdio.h>

#define FCUNIT_ASSERT(expression) \
    do { \
        if (!(expression)) { \
            fprintf(stderr, "assertion failed at %s:%d(%s), expect: %s\n", \
                   __FILE__, __LINE__, __func__, #expression); \
            exit(1); \
        } \
    } while (0)

#define FCUNIT_RUN(ut_func) { \
    printf("%s: ", #ut_func); \
    ut_func(); \
    printf("ok\n"); \
}

#ifdef __cplusplus
}
#endif

#endif

