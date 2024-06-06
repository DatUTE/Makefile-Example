AC_INIT([automtive], [0.1])

AM_INIT_AUTOMAKE([subdir-objects])

# with BUILD_TARGET
# --------------------------------------
AC_ARG_VAR([BUILD_TARGET], [choose: automotive1 automotive2 automotive3])
AC_MSG_NOTICE([.............checking...............])
AS_IF([test "x$BUILD_TARGET" = x], [AC_MSG_ERROR([no build target arg was given])])

# export BUILD_TARGET to makefile
# AC_SUBST([BUILD_TARGET])

test_target()
{
    # echo Run test_target
    for t in "$@"
    do
        test "x$BUILD_TARGET" = "x$t" && return 0
    done
    return 1
}

AM_CONDITIONAL([ENABLE_AUTOMOTIVE1], [test_target automotive1])
AM_CONDITIONAL([ENABLE_AUTOMOTIVE2], [test_target automotive2])
AM_CONDITIONAL([ENABLE_AUTOMOTIVE3], [test_target automotive3])
AC_LANG(C++)
AC_PROG_CXX
AC_PROG_RANLIB
AC_CONFIG_FILES([GNUmakefile])
AC_OUTPUT