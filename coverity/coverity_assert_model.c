void _assert_true(const uintmax_t result,
                  const char* const expression,
                  const char * const file, const int line)
{
    if (!result) {
        __coverity_panic__();
    }
}

void _assert_int_equal(
    const intmax_t a, const intmax_t b,
    const char * const file, const int line)
{
    if (a != b) {
        __coverity_panic__();
    }
}

void _assert_uint_equal(const uintmax_t a,
                        const uintmax_t b,
                        const char *const file,
                        const int line)
{
    if (a != b) {
        __coverity_panic__();
    }
}

void _assert_int_not_equal(
    const intmax_t a, const intmax_t b,
    const char * const file, const int line)
{
    if (a == b) {
        __coverity_panic__();
    }
}

void _assert_uint_not_equal(const uintmax_t a,
                            const uintmax_t b,
                            const char *const file,
                            const int line)
{
    if (a == b) {
        __coverity_panic__();
    }
}

void _assert_return_code(const intmax_t result,
                         size_t rlen,
                         const uintmax_t error,
                         const char * const expression,
                         const char * const file,
                         const int line)
{
    if (result != 0) {
        __coverity_panic__();
    }
}

void _assert_string_equal(const char * const a, const char * const b,
                          const char * const file, const int line)
{
    char ch;
    int cmp;

    __coverity_weak_guard_sink__(a, b);
    __coverity_weak_guard_sink__(b, a);

    ch = *((char *)a);
    ch = *((char *)b);

    if (cmp != 0) {
        __coverity_panic__();
    }
}

void _assert_string_not_equal(const char * const a, const char * const b,
                              const char *file, const int line)
{
    char ch;
    int cmp;

    __coverity_weak_guard_sink__(a, b);
    __coverity_weak_guard_sink__(b, a);

    ch = *((char *)a);
    ch = *((char *)b);

    if (cmp == 0) {
        __coverity_panic__();
    }
}

void _assert_memory_equal(const void * const a, const void * const b,
                          const size_t size, const char* const file,
                          const int line)
{
    unsigned char ch;
    int cmp;

    __coverity_weak_guard_sink__(a, b);
    __coverity_weak_guard_sink__(b, a);

    ch = *((unsigned char *)a);
    ch = *((unsigned char *)b);

    if (cmp != 0) {
        __coverity_panic__();
    }
}

void _assert_memory_not_equal(const void * const a, const void * const b,
                              const size_t size, const char* const file,
                              const int line)
{
    unsigned char ch;
    int cmp;

    __coverity_weak_guard_sink__(a, b);
    __coverity_weak_guard_sink__(b, a);

    ch = *((unsigned char *)a);
    ch = *((unsigned char *)b);

    if (cmp == 0) {
        __coverity_panic__();
    }
}

void _assert_int_in_range(const intmax_t value,
                          const intmax_t minimum,
                          const intmax_t maximum,
                          const char *const file,
                          const int line)
{
    if (value < minimum || value > maximum) {
        __coverity_panic__();
    }
}

void _assert_uint_in_range(const uintmax_t value,
                           const uintmax_t minimum,
                           const uintmax_t maximum,
                           const char *const file,
                           const int line)
{
    if (value < minimum || value > maximum) {
        __coverity_panic__();
    }
}

void _assert_not_in_range(
    const uintmax_t value, const uintmax_t minimum,
    const uintmax_t maximum, const char* const file, const int line)
{
    if (value > minimum && value < maximum) {
        __coverity_panic__();
    }
}

void _assert_int_in_set(const intmax_t value,
                        const intmax_t values[],
                        const size_t number_of_values,
                        const char *const file,
                        const int line)
{
    size_t i;

    for (i = 0; i < number_of_values; i++) {
        if (value == values[i]) {
            return;
        }
    }
    __coverity_panic__();
}

void _assert_uint_in_set(const uintmax_t value,
                         const uintmax_t values[],
                         const size_t number_of_values,
                         const char *const file,
                         const int line)
{
    size_t i;

    for (i = 0; i < number_of_values; i++) {
        if (value == values[i]) {
            return;
        }
    }
    __coverity_panic__();
}

void _assert_int_not_in_set(const intmax_t value,
                            const intmax_t values[],
                            const size_t number_of_values,
                            const char *const file,
                            const int line)
{
    size_t i;

    for (i = 0; i < number_of_values; i++) {
        if (value == values[i]) {
            __coverity_panic__();
        }
    }
}

void _assert_uint_not_in_set(const uintmax_t value,
                             const uintmax_t values[],
                             const size_t number_of_values,
                             const char *const file,
                             const int line)
{
    size_t i;

    for (i = 0; i < number_of_values; i++) {
        if (value == values[i]) {
            __coverity_panic__();
        }
    }
}
