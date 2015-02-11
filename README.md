# fcunit
A light-weight unit test framework for C

## API Macros
```
FCUNIT_ASSERT(expression)
FCUNIT_RUN(unit_test)
```

## Example
```c
#include <stdlib.h>
#include "fcunit.h"

void test_sample()
{
    int a = 1;
    int b = 2;
    FCUNIT_ASSERT(b > a);
}

int main(int argc, char** argv)
{
    FCUNIT_RUN(test_sample);
    return 0;
}
```

## Run Example(Output)
```
test_sample: ok
```
