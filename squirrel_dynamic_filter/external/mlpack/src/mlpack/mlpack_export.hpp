
#ifndef MLPACK_EXPORT_H
#define MLPACK_EXPORT_H

#ifdef MLPACK_STATIC_DEFINE
#  define MLPACK_EXPORT
#  define MLPACK_NO_EXPORT
#else
#  ifndef MLPACK_EXPORT
#    ifdef mlpack_EXPORTS
        /* We are building this library */
#      define MLPACK_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MLPACK_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MLPACK_NO_EXPORT
#    define MLPACK_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MLPACK_DEPRECATED
#  define MLPACK_DEPRECATED __attribute__ ((__deprecated__))
#  define MLPACK_DEPRECATED_EXPORT MLPACK_EXPORT __attribute__ ((__deprecated__))
#  define MLPACK_DEPRECATED_NO_EXPORT MLPACK_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MLPACK_NO_DEPRECATED
#endif

#endif
