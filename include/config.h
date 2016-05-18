#ifdef HX_MACOS

	/* Define to the library version */
	#define ALSOFT_VERSION "1.17.2"

	// Why does cmake need this?
	#define SIZEOF_LONG sizeof(long)
	#define SIZEOF_LONG_LONG sizeof(long long)

	/* API declaration export attribute */
	#define AL_API  __attribute__((visibility("default")))
	#define ALC_API __attribute__((visibility("default")))

	/* Define any available alignment declaration */
	#define ALIGN(x) __attribute__((aligned(x)))

	/* Define to the appropriate 'restrict' keyword */
	#define RESTRICT restrict
	#define HAVE_POSIX_MEMALIGN
	#define HAVE_SSE
	#define HAVE_COREAUDIO
	#define HAVE_WAVE
	#define HAVE_STAT
	#define HAVE_LRINTF
	#define HAVE_STRTOF
	#define HAVE_GCC_DESTRUCTOR
	#define HAVE_GCC_FORMAT
	#define HAVE_STDINT_H
	#define HAVE_DLFCN_H
	#define HAVE_XMMINTRIN_H
	#define HAVE_CPUID_H
	#define HAVE_FLOAT_H
	#define HAVE_FENV_H
	#define HAVE_FESETROUND
	#define HAVE_PTHREAD_SETSCHEDPARAM


#elif defined(HX_WINDOWS)

#ifdef HXCPP_M64
#include "config-windows-x86_64.h"
#else
#include "config-windows-x86.h"
#endif

#elif defined(HX_LINUX)

#include "config-linux-x86_64.h"

#elif defined (HX_ANDROID)

#include "config-android.h"

#endif
