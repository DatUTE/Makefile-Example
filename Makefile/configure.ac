AC_INIT([automtive], [0.1])

AM_INIT_AUTOMAKE([foreign])

# without BUILD_TARGET
# --------------------------------------
# AC_LANG(C++)
# AC_PROG_CXX
# AC_CONFIGS_FILE([GNUmakefile])
# AC_OUTPUT
# --------------------------------------

# with BUILD_TARGET
# --------------------------------------
AC_ARG_VAR([BUILD_TARGET], [choose: automotiveA automotiveB])
AC_MSG_NOTICE([.............checking...............])
AS_IF([test "x$BUILD_TARGET" = x], [AC_MSG_ERROR([no build target arg was given])])

# AC_SUBST([BUILD_TARGET])
test_target()
{
    for t in "$@"
    do
        test "x$BUILD_TARGET" = "x$t" && return 0
    done
    return 1
}

AM_CONDITIONAL([ENABLE_AUTOMOTIVEA], [test_target automotiveA])
AM_CONDITIONAL([ENABLE_AUTOMOTIVEB], [test_target automotiveB])
AC_LANG(C++)
AC_PROG_CXX
AC_CONFIG_FILES([GNUmakefile])
AC_OUTPUT