/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to enable AVX-512F buffers. */
/* #undef AVX512F_FOUND */

/* Define to set the specific CPU L1 cache-line size, in bytes. */
#define CACHELINE_SIZE 64

/* Define this if you have any supported netlink library required */
#define CONFIG_LIBNL 1

/* Define this if libnl-tiny is present on your system */
/* #undef CONFIG_LIBNL20 */

/* Define this if libnl-3.0 is present on your system */
#define CONFIG_LIBNL30 1

/* Algorithm AES in gcrypt library */
/* #undef GCRYPT_WITH_AES */

/* Algorithm ARCFOUR in gcrypt library */
/* #undef GCRYPT_WITH_ARCFOUR */

/* Algorithm BLOWFISH in gcrypt library */
/* #undef GCRYPT_WITH_BLOWFISH */

/* Algorithm CAST5 in gcrypt library */
/* #undef GCRYPT_WITH_CAST5 */

/* Algorithm CMAC_AES in gcrypt library */
/* #undef GCRYPT_WITH_CMAC_AES */

/* Algorithm CRC in gcrypt library */
/* #undef GCRYPT_WITH_CRC */

/* Algorithm DES in gcrypt library */
/* #undef GCRYPT_WITH_DES */

/* Algorithm DSA in gcrypt library */
/* #undef GCRYPT_WITH_DSA */

/* Algorithm ELGAMAL in gcrypt library */
/* #undef GCRYPT_WITH_ELGAMAL */

/* Algorithm HAVAL in gcrypt library */
/* #undef GCRYPT_WITH_HAVAL */

/* Algorithm IDEA in gcrypt library */
/* #undef GCRYPT_WITH_IDEA */

/* Algorithm MD2 in gcrypt library */
/* #undef GCRYPT_WITH_MD2 */

/* Algorithm MD4 in gcrypt library */
/* #undef GCRYPT_WITH_MD4 */

/* Algorithm MD5 in gcrypt library */
/* #undef GCRYPT_WITH_MD5 */

/* Algorithm RFC2268 in gcrypt library */
/* #undef GCRYPT_WITH_RFC2268 */

/* Algorithm RMD160 in gcrypt library */
/* #undef GCRYPT_WITH_RMD160 */

/* Algorithm RSA in gcrypt library */
/* #undef GCRYPT_WITH_RSA */

/* Algorithm SERPENT in gcrypt library */
/* #undef GCRYPT_WITH_SERPENT */

/* Algorithm SHA0 in gcrypt library */
/* #undef GCRYPT_WITH_SHA0 */

/* Algorithm SHA1 in gcrypt library */
/* #undef GCRYPT_WITH_SHA1 */

/* Algorithm SHA224 in gcrypt library */
/* #undef GCRYPT_WITH_SHA224 */

/* Algorithm SHA256 in gcrypt library */
/* #undef GCRYPT_WITH_SHA256 */

/* Algorithm SHA384 in gcrypt library */
/* #undef GCRYPT_WITH_SHA384 */

/* Algorithm SHA512 in gcrypt library */
/* #undef GCRYPT_WITH_SHA512 */

/* Algorithm TIGER in gcrypt library */
/* #undef GCRYPT_WITH_TIGER */

/* Algorithm TWOFISH in gcrypt library */
/* #undef GCRYPT_WITH_TWOFISH */

/* Algorithm WHIRLPOOL in gcrypt library */
/* #undef GCRYPT_WITH_WHIRLPOOL */

/* Define if your system has sys/auxv.h header */
/* #undef HAS_AUXV */

/* Define if you have AirPcap. */
/* #undef HAVE_AIRPCAP */

/* Define to 1 if you have the `aligned_alloc' function. */
/* #undef HAVE_ALIGNED_ALLOC */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Gcrypt library is available */
/* #undef HAVE_GCRYPT */

/* Define if you have hwloc library. */
/* #undef HAVE_HWLOC */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `memalign' function. */
/* #undef HAVE_MEMALIGN */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if you have openssl/cmac.h header present. */
#define HAVE_OPENSSL_CMAC_H 1

/* Define to 1 if you have the <openssl/crypto.h> header file. */
#define HAVE_OPENSSL_CRYPTO_H 1

/* Define this if you have libpcap on your system */
/* #undef HAVE_PCAP */

/* Define to 1 if you have the <pcap.h> header file. */
/* #undef HAVE_PCAP_H */

/* Define this if you have libpcre on your system */
/* #undef HAVE_PCRE */

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define if pthread_{,attr_}{g,s}etaffinity_np is supported. */
#define HAVE_PTHREAD_AFFINITY_NP 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define if you have sqlite3 */
#define HAVE_SQLITE 1

/* Have the SQLITE3 library */
#define HAVE_SQLITE3 1

/* Define to 1 if you have the <sqlite3.h> header file. */
#define HAVE_SQLITE3_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/auxv.h> header file. */
/* #undef HAVE_SYS_AUXV_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if you have zlib */
#define HAVE_ZLIB 1

/* Define to 1 if you have the `_aligned_malloc' function. */
/* #undef HAVE__ALIGNED_MALLOC */

/* Define to 1 if you have the `__mingw_aligned_malloc' function. */
/* #undef HAVE___MINGW_ALIGNED_MALLOC */

/* Define if Intel assembly style is supported */
#define INTEL_ASM 1

/* The Cygwin DLL version string suffix */
#define LT_CYGWIN_VER "-1-5-2.dll"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "aircrack-ng"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://forum.aircrack-ng.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "aircrack-ng"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "aircrack-ng 1.5.2_rev-4f04bcd"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "aircrack-ng"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.5.2_rev-4f04bcd"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.5.2_rev-4f04bcd"

/* Define if portable WIN32 is supported */
/* #undef WIN32_PORTABLE */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define this if 64-bit file access requires this define to be present */
#define _LARGEFILE64_SOURCE 1

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* The version information of the project */
#define _REVISION "1.5.2_rev-4f04bcd"
