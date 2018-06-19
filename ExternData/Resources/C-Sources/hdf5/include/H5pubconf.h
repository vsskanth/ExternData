/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/* H5pubconf.h */

#ifndef H5_CONFIG_H_
#define H5_CONFIG_H_

/* Define if the Windows virtual file driver should be compiled */
#if defined(_WIN32)
#define H5_HAVE_WINDOWS 1
#endif

/* Define if using MinGW */
#if defined(__MINGW32__)
#define H5_HAVE_MINGW 1
#endif

/* Define if on the Windows platform and default WIN32 API */
#if defined(_WIN32)
#define H5_HAVE_WIN32_API 1
#endif

/* Define if using a Windows compiler (i.e. Visual Studio) */
#if defined(_MSC_VER)
#define H5_HAVE_VISUAL_STUDIO 1
#endif

/* Define if building universal (internal helper macro) */
/* #undef H5_AC_APPLE_UNIVERSAL_BUILD */

/* Define if the memory buffers being written to disk should be cleared before
   writing. */
#define H5_CLEAR_MEMORY 1

/* Define if C++ compiler recognizes offsetof */
/* #undef H5_CXX_HAVE_OFFSETOF */

/* Define the default plugins path to compile */
#if defined(_WIN32)
#define H5_DEFAULT_PLUGINDIR "%ALLUSERSPROFILE%\\hdf5\\lib\\plugin"
#elif defined(__gnu_linux__)
#define H5_DEFAULT_PLUGINDIR "/usr/local/hdf5/lib/plugin"
#endif

/* Define if `dev_t' is a scalar */
#if defined(__gnu_linux__)
#define H5_DEV_T_IS_SCALAR 1
#endif

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef H5_FC_DUMMY_MAIN */

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef H5_FC_DUMMY_MAIN_EQ_F77 */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#if defined(_WIN32)
#define H5_FC_FUNC(name,NAME) name ## _
#endif

/* As FC_FUNC, but for C identifiers containing underscores. */
#if defined(_WIN32)
#define H5_FC_FUNC_(name,NAME) name ## _
#endif

/* Define to 1 if you have the `alarm' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_ALARM 1
#endif

/* Define to 1 if you have the `asprintf' function. */
#if defined(__CYGWIN__)
#define H5_HAVE_ASPRINTF 1
#else
#undef H5_HAVE_ASPRINTF
#endif

/* Define if the __attribute__(()) extension is present */
#if defined(__gnu_linux__)
#define H5_HAVE_ATTRIBUTE 1
#endif

/* Define if the compiler understands C99 designated initialization of structs and unions */
#if defined(__gnu_linux__)
#define H5_HAVE_C99_DESIGNATED_INITIALIZER 1
#endif

/* Define if the compiler understands the __func__ keyword */
#if defined(__gnu_linux__)
#define H5_HAVE_C99_FUNC 1
#endif

/* Define to 1 if you have the `clock_gettime' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_CLOCK_GETTIME 1
#endif

/* Define if the function stack tracing code is to be compiled in */
/* #undef H5_HAVE_CODESTACK */

/* Define if Darwin or Mac OS X */
/* #undef H5_HAVE_DARWIN */

/* Define to 1 if you have the `difftime' function. */
#define H5_HAVE_DIFFTIME 1

/* Define if the direct I/O virtual file driver (VFD) should be compiled */
/* #undef H5_HAVE_DIRECT */

/* Define to 1 if you have the <dirent.h> header file. */
#if defined(__GNUC__)
#define H5_HAVE_DIRENT_H 1
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
#if defined(__gnu_linux__)
#define H5_HAVE_DLFCN_H 1
#endif

/* Define to 1 if you have the <dmalloc.h> header file. */
/* #undef H5_HAVE_DMALLOC_H */

/* Define if library information should be embedded in the executables */
/* #undef H5_HAVE_EMBEDDED_LIBINFO */

/* Define to 1 if you have the <features.h> header file. */
#if defined(__gnu_linux__)
#define H5_HAVE_FEATURES_H 1
#endif

/* Define if support for deflate (zlib) filter is enabled */
#define H5_HAVE_FILTER_DEFLATE 1

/* Define if support for szip filter is enabled */
/* #undef H5_HAVE_FILTER_SZIP */

/* Define to 1 if you have the `fork' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_FORK 1
#endif

/* Define to 1 if you have the `frexpf' function. */
#if defined(__GNUC__)
#define H5_HAVE_FREXPF 1
#endif

/* Define to 1 if you have the `frexpl' function. */
#if defined(__GNUC__)
#define H5_HAVE_FREXPL 1
#endif

/* Define if the compiler understands the __FUNCTION__ keyword */
#define H5_HAVE_FUNCTION 1

/* Define to 1 if you have the `GetConsoleScreenBufferInfo' function. */
#if defined(_MSC_VER)
#define H5_HAVE_GETCONSOLESCREENBUFFERINFO 1
#endif

/* Define to 1 if you have the `gethostname' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_GETHOSTNAME 1
#endif

/* Define to 1 if you have the `getpwuid' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_GETPWUID 1
#endif

/* Define to 1 if you have the `getrusage' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_GETRUSAGE 1
#endif

/* Define to 1 if you have the `gettextinfo' function. */
/* #undef H5_HAVE_GETTEXTINFO */

/* Define to 1 if you have the `gettimeofday' function. */
#define H5_HAVE_GETTIMEOFDAY 1

/* Define if the compiler understands inline */
#if defined(__GNUC__) || (defined(_MSC_VER) && _MSC_VER >= 1800)
#define H5_HAVE_INLINE 1
#endif

/* Define if library will contain instrumentation to detect correct optimization operation */
/* #undef H5_HAVE_INSTRUMENTED_LIBRARY */

/* Define to 1 if you have the <inttypes.h> header file. */
#if defined(_WIN32)
#if defined(_MSC_VER) && _MSC_VER >= 1800
#define H5_HAVE_INTTYPES_H 1
#elif defined(__WATCOMC__) || defined(__MINGW32__) || defined(__CYGWIN__)
#define H5_HAVE_INTTYPES_H 1
#else
#undef H5_HAVE_INTTYPES_H
#endif
#elif defined(__GNUC__)
#define H5_HAVE_INTTYPES_H 1
#else
#undef H5_HAVE_INTTYPES_H
#endif

/* Define to 1 if you have the `ioctl' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_IOCTL 1
#endif

/* Define to 1 if you have the <io.h> header file. */
#if defined(_WIN32)
#define H5_HAVE_IO_H 1
#endif

/* Define to 1 if you have the `dl' library (-ldl). */
#if defined(__gnu_linux__)
#define H5_HAVE_LIBDL 1
#endif

/* Define to 1 if you have the `dmalloc' library (-ldmalloc). */
/* #undef H5_HAVE_LIBDMALLOC */

/* Define to 1 if you have the `m' library (-lm). */
#define H5_HAVE_LIBM 1

/* Define to 1 if you have the `mpe' library (-lmpe). */
/* #undef H5_HAVE_LIBMPE */

/* Define to 1 if you have the `pthread' library (-lpthread). */
/* #undef H5_HAVE_LIBPTHREAD */

/* Define to 1 if you have the `sz' library (-lsz). */
/* #undef H5_HAVE_LIBSZ */

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
#if defined(_WIN32)
#define H5_HAVE_LIBWS2_32 1
#endif

/* Define to 1 if you have the `z' library (-lz). */
#define H5_HAVE_LIBZ 1

/* Define to 1 if you have the `longjmp' function. */
#define H5_HAVE_LONGJMP 1

/* Define to 1 if you have the `lstat' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_LSTAT 1
#endif

/* Define to 1 if you have the <mach/mach_time.h> header file. */
/* #undef H5_HAVE_MACH_MACH_TIME_H */

/* Define to 1 if you have the <memory.h> header file. */
#define H5_HAVE_MEMORY_H 1

/* Define if we have MPE support */
/* #undef H5_HAVE_MPE */

/* Define to 1 if you have the <mpe.h> header file. */
/* #undef H5_HAVE_MPE_H */

/* Define if `MPI_Comm_c2f' and `MPI_Comm_f2c' exists */
/* #undef H5_HAVE_MPI_MULTI_LANG_Comm */

/* Define if `MPI_Info_c2f' and `MPI_Info_f2c' exists */
/* #undef H5_HAVE_MPI_MULTI_LANG_Info */

/* Define if we have parallel support */
/* #undef H5_HAVE_PARALLEL */

/* Define to 1 if you have the <pthread.h> header file. */
/* #undef H5_HAVE_PTHREAD_H */

/* Define to 1 if you have the `random' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_RANDOM 1
#endif

/* Define to 1 if you have the `rand_r' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_RAND_R 1
#endif

/* Define to 1 if you have the `setjmp' function. */
#define H5_HAVE_SETJMP 1

/* Define to 1 if you have the <setjmp.h> header file. */
#define H5_HAVE_SETJMP_H 1

/* Define to 1 if you have the `setsysinfo' function. */
/* #undef H5_HAVE_SETSYSINFO */

/* Define to 1 if you have the `siglongjmp' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_SIGLONGJMP 1
#endif

/* Define to 1 if you have the `signal' function. */
#define H5_HAVE_SIGNAL 1

/* Define to 1 if you have the `sigprocmask' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_SIGPROCMASK 1
#endif

/* Define to 1 if you have the `sigsetjmp' function. */
/* #undef H5_HAVE_SIGSETJMP */

/* Define to 1 if you have the `snprintf' function. */
#if defined(STDC99)
#define HAVE_SNPRINTF 1
#elif defined(__MINGW32__) || defined(__CYGWIN__)
#if __STDC_VERSION__ >= 199901L
#define H5_HAVE_SNPRINTF 1
#endif
#elif defined(__WATCOMC__)
#define H5_HAVE_SNPRINTF 1
#elif defined(__TURBOC__) && __TURBOC__ >= 0x550
#define H5_HAVE_SNPRINTF 1
#elif defined(MSDOS) && defined(__BORLANDC__) && (BORLANDC > 0x410)
#define H5_HAVE_SNPRINTF 1
#elif defined(_MSC_VER) && _MSC_VER >= 1900
#define H5_HAVE_SNPRINTF 1
#else
#undef H5_HAVE_SNPRINTF
#endif

/* Define to 1 if you have the `srandom' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_SRANDOM 1
#endif

/* Define if `struct stat' has the `st_blocks' field */
#if defined(__gnu_linux__)
#define H5_HAVE_STAT_ST_BLOCKS 1
#endif

/* Define to 1 if you have the <stddef.h> header file. */
#define H5_HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#if defined(_WIN32)
#if defined(_MSC_VER) && _MSC_VER >= 1600
#define H5_HAVE_STDINT_H 1
#elif defined(__WATCOMC__) || defined(__MINGW32__) || defined(__CYGWIN__)
#define H5_HAVE_STDINT_H 1
#else
#undef H5_HAVE_STDINT_H
#endif
#elif defined(__GNUC__) && !defined(__VXWORKS__)
#define H5_HAVE_STDINT_H 1
#else
#undef H5_HAVE_STDINT_H
#endif

/* Define to 1 if you have the <stdint.h> header file for Cplusplus. */
#if defined(_WIN32)
#define H5_HAVE_STDINT_H_CXX 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#define H5_HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define H5_HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#if defined(__GNUC__)
#define H5_HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#define H5_HAVE_STRING_H 1

/* Define if `struct text_info' is defined */
/* #undef H5_HAVE_STRUCT_TEXT_INFO */

/* Define if `struct videoconfig' is defined */
/* #undef H5_HAVE_STRUCT_VIDEOCONFIG */

/* Define to 1 if you have the `symlink' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_SYMLINK 1
#endif

/* Define to 1 if you have the `system' function. */
#define H5_HAVE_SYSTEM 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#if defined(__gnu_linux__)
#define H5_HAVE_SYS_IOCTL_H 1
#endif

/* Define to 1 if you have the <sys/resource.h> header file. */
#if defined(__gnu_linux__)
#define H5_HAVE_SYS_RESOURCE_H 1
#endif

/* Define to 1 if you have the <sys/socket.h> header file. */
#if defined(__gnu_linux__)
#define H5_HAVE_SYS_SOCKET_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#define H5_HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timeb.h> header file. */
#define H5_HAVE_SYS_TIMEB_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#if defined(__GNUC__)
#define H5_HAVE_SYS_TIME_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#define H5_HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <szlib.h> header file. */
/* #undef H5_HAVE_SZLIB_H */

/* Define if we have thread safe support */
/* #undef H5_HAVE_THREADSAFE */

/* Define if `timezone' is a global variable */
#define H5_HAVE_TIMEZONE 1

/* Define if the ioctl TIOCGETD is defined */
#if defined(__gnu_linux__)
#define H5_HAVE_TIOCGETD 1
#endif

/* Define if the ioctl TIOGWINSZ is defined */
#if defined(__gnu_linux__)
#define H5_HAVE_TIOCGWINSZ 1
#endif

/* Define to 1 if you have the `tmpfile' function. */
#define H5_HAVE_TMPFILE 1

/* Define if `tm_gmtoff' is a member of `struct tm' */
#if defined(__gnu_linux__)
#define H5_HAVE_TM_GMTOFF 1
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#if defined(__GNUC__)
#define H5_HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the `vasprintf' function. */
#if defined(__CYGWIN__)
#define H5_HAVE_VASPRINTF 1
#else
#undef H5_HAVE_VASPRINTF
#endif

/* Define to 1 if you have the `vsnprintf' function. */
#define H5_HAVE_VSNPRINTF 1

/* Define to 1 if you have the `waitpid' function. */
#if defined(__gnu_linux__)
#define H5_HAVE_WAITPID 1
#endif

/* Define if your system has window style path name. */
#if defined(_WIN32)
#define H5_HAVE_WINDOW_PATH 1
#endif

/* Define to 1 if you have the <winsock2.h> header file. */
#if defined(_WIN32)
#define H5_HAVE_WINSOCK2_H 1
#endif

/* Define to 1 if you have the <zlib.h> header file. */
#define H5_HAVE_ZLIB_H 1

/* Define to 1 if you have the `_getvideoconfig' function. */
/* #undef H5_HAVE__GETVIDEOCONFIG */

/* Define to 1 if you have the `_scrsize' function. */
/* #undef H5_HAVE__SCRSIZE */

/* Define if the compiler understands __inline */
#define H5_HAVE___INLINE 1

/* Define if the compiler understands __inline__ */
#if defined(__GNUC__)
#define H5_HAVE___INLINE__ 1
#endif

/* Define if HDF5's high-level library headers should be included in hdf5.h */
/* #undef H5_INCLUDE_HL */

/* Define if your system can convert long double to (unsigned) long long
   values correctly. */
#define H5_LDOUBLE_TO_LLONG_ACCURATE 1

/* Define if your system converts long double to (unsigned) long values with
   special algorithm. */
/* #undef H5_LDOUBLE_TO_LONG_SPECIAL */

/* Define if your system can convert (unsigned) long long to long double
   values correctly. */
#define H5_LLONG_TO_LDOUBLE_CORRECT 1

/* Define if your system can convert (unsigned) long to long double values
   with special algorithm. */
/* #undef H5_LONG_TO_LDOUBLE_SPECIAL */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#if defined(__gnu_linux__)
#define H5_LT_OBJDIR ".libs/"
#endif

/* Define if the metadata trace file code is to be compiled in */
/* #undef H5_METADATA_TRACE_FILE */

/* Define if we can violate pointer alignment restrictions */
#define H5_NO_ALIGNMENT_RESTRICTIONS 1

/* Define if deprecated public API symbols are disabled */
#define H5_NO_DEPRECATED_SYMBOLS 1

/* Name of package */
#define H5_PACKAGE "hdf5"

/* Define to the address where bug reports for this package should be sent. */
#define H5_PACKAGE_BUGREPORT "help@hdfgroup.org"

/* Define to the full name of this package. */
#define H5_PACKAGE_NAME "HDF5"

/* Define to the full name and version of this package. */
#define H5_PACKAGE_STRING "HDF5 1.8.21"

/* Define to the one symbol short name of this package. */
#define H5_PACKAGE_TARNAME "hdf5"

/* Define to the home page for this package. */
#define H5_PACKAGE_URL "http://www.hdfgroup.org"

/* Define to the version of this package. */
#define H5_PACKAGE_VERSION "1.8.21"

/* Width for printf() for type `long long' or `__int64', use `ll' */
#if defined(_WIN32)
#define H5_PRINTF_LL_WIDTH "I64"
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_PRINTF_LL_WIDTH "l"
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_PRINTF_LL_WIDTH "ll"
#endif

/* The size of `char', as computed by sizeof. */
#define H5_SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define H5_SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define H5_SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define H5_SIZEOF_INT 4

/* The size of `int16_t', as computed by sizeof. */
#define H5_SIZEOF_INT16_T 2

/* The size of `int32_t', as computed by sizeof. */
#define H5_SIZEOF_INT32_T 4

/* The size of `int64_t', as computed by sizeof. */
#define H5_SIZEOF_INT64_T 8

/* The size of `int8_t', as computed by sizeof. */
#define H5_SIZEOF_INT8_T 1

/* The size of `int_fast16_t', as computed by sizeof. */
#if defined(_WIN32)
#define H5_SIZEOF_INT_FAST16_T 4
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_INT_FAST16_T 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_INT_FAST16_T 4
#endif

/* The size of `int_fast32_t', as computed by sizeof. */
#if defined(_WIN32)
#define H5_SIZEOF_INT_FAST32_T 4
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_INT_FAST32_T 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_INT_FAST32_T 4
#endif

/* The size of `int_fast64_t', as computed by sizeof. */
#define H5_SIZEOF_INT_FAST64_T 8

/* The size of `int_fast8_t', as computed by sizeof. */
#define H5_SIZEOF_INT_FAST8_T 1

/* The size of `int_least16_t', as computed by sizeof. */
#define H5_SIZEOF_INT_LEAST16_T 2

/* The size of `int_least32_t', as computed by sizeof. */
#define H5_SIZEOF_INT_LEAST32_T 4

/* The size of `int_least64_t', as computed by sizeof. */
#define H5_SIZEOF_INT_LEAST64_T 8

/* The size of `int_least8_t', as computed by sizeof. */
#define H5_SIZEOF_INT_LEAST8_T 1

/* The size of `long', as computed by sizeof. */
#if defined(_WIN32)
#define H5_SIZEOF_LONG 4
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_LONG 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_LONG 4
#endif

/* The size of `long double', as computed by sizeof. */
#if defined(_WIN32)
#define H5_SIZEOF_LONG_DOUBLE 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_LONG_DOUBLE 16
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_LONG_DOUBLE 12
#endif

/* The size of `long long', as computed by sizeof. */
#define H5_SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#if defined(_WIN32)
#define H5_SIZEOF_OFF_T 4
#elif defined(__gnu_linux__)
#define H5_SIZEOF_OFF_T 8
#endif

/* The size of `ptrdiff_t', as computed by sizeof. */
#if defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_PTRDIFF_T 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_PTRDIFF_T 4
#endif

/* The size of `short', as computed by sizeof. */
#define H5_SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#if defined(_WIN64)
#define H5_SIZEOF_SIZE_T 8
#elif defined(_WIN32)
#define H5_SIZEOF_SIZE_T 4
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_SIZE_T 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_SIZE_T 4
#endif

/* The size of `ssize_t', as computed by sizeof. */
#if defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_SSIZE_T 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_SSIZE_T 4
#endif

/* The size of `uint16_t', as computed by sizeof. */
#define H5_SIZEOF_UINT16_T 2

/* The size of `uint32_t', as computed by sizeof. */
#define H5_SIZEOF_UINT32_T 4

/* The size of `uint64_t', as computed by sizeof. */
#define H5_SIZEOF_UINT64_T 8

/* The size of `uint8_t', as computed by sizeof. */
#define H5_SIZEOF_UINT8_T 1

/* The size of `uint_fast16_t', as computed by sizeof. */
#if defined(__MINGW32__)
#define H5_SIZEOF_UINT_FAST16_T 2
#elif defined(_WIN32)
#define H5_SIZEOF_UINT_FAST16_T 4
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_UINT_FAST16_T 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_UINT_FAST16_T 4
#endif

/* The size of `uint_fast32_t', as computed by sizeof. */
#if defined(_WIN32)
#define H5_SIZEOF_UINT_FAST32_T 4
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 8)
#define H5_SIZEOF_UINT_FAST32_T 8
#elif defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5_SIZEOF_UINT_FAST32_T 4
#endif

/* The size of `uint_fast64_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_FAST64_T 8

/* The size of `uint_fast8_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_FAST8_T 1

/* The size of `uint_least16_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_LEAST16_T 2

/* The size of `uint_least32_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_LEAST32_T 4

/* The size of `uint_least64_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_LEAST64_T 8

/* The size of `uint_least8_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_LEAST8_T 1

/* The size of `unsigned', as computed by sizeof. */
#define H5_SIZEOF_UNSIGNED 4

/* The size of `__int64', as computed by sizeof. */
#if defined(_WIN32)
#define H5_SIZEOF___INT64 8
#else
#define H5_SIZEOF___INT64 0
#endif

/* Define to 1 if you have the ANSI C header files. */
#define H5_STDC_HEADERS 1

/* Define if strict file format checks are enabled */
/* #undef H5_STRICT_FORMAT_CHECKS */

/* Define if your system supports pthread_attr_setscope(&attribute,
   PTHREAD_SCOPE_SYSTEM) call. */
#if defined(__gnu_linux__)
#define H5_SYSTEM_SCOPE_THREADS 1
#endif

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#if defined(__gnu_linux__)
#define H5_TIME_WITH_SYS_TIME 1
#endif

/* Define using v1.6 public API symbols by default */
/* #undef H5_USE_16_API_DEFAULT */

/* Define if a memory checking tool will be used on the library, to cause
   library to be very picky about memory operations and also disable the
   internal free list manager code. */
/* #undef H5_USING_MEMCHECKER */

/* Version number of package */
#define H5_VERSION "1.8.19"

/* Data accuracy is prefered to speed during data conversions */
#define H5_WANT_DATA_ACCURACY 1

/* Check exception handling functions during data conversions */
#define H5_WANT_DCONV_EXCEPTION 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
#if defined __BIG_ENDIAN__
#define WORDS_BIGENDIAN 1
#endif
#else
#ifndef WORDS_BIGENDIAN
/* #undef WORDS_BIGENDIAN */
#endif
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#if defined(__SIZEOF_POINTER__) && (__SIZEOF_POINTER__ == 4)
#define H5__FILE_OFFSET_BITS 64
#endif

/* Define for large files, on AIX-style hosts. */
/* #undef H5__LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef H5_const */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef H5_off_t */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef H5_ptrdiff_t */

/* Define to `unsigned long' if <sys/types.h> does not define. */
/* #undef H5_size_t */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef H5_ssize_t */

#endif
