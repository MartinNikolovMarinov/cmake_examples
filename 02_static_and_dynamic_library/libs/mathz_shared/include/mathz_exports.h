#ifndef MATHZ_SUPPORT_H
#define MATHZ_SUPPORT_H

#ifndef MATHZ_LIBRARY_STATIC
	/* It's a dynamic library. */
	#ifdef MATHZ_LIBRARY_BUILD
		/* Building the library */
		#if defined(_WIN32) || defined(WIN32)
			#define MATHZ_LIBRARY_EXPORT __declspec(dllexport)
		#elif defined(__unix__)
			#define MATHZ_LIBRARY_EXPORT __attribute__((visibility("default")))
		#else
			#define MATHZ_LIBRARY_EXPORT
		#endif
	#else
		/* Using the library */
		#ifdef _WIN32
			#define MATHZ_LIBRARY_EXPORT __declspec(dllimport)
		#else
			#define MATHZ_LIBRARY_EXPORT
		#endif
	#endif
#endif

#ifndef MATHZ_LIBRARY_EXPORT
	/* It's a static library, no need to import/export anything */
	#define MATHZ_LIBRARY_EXPORT
#endif


#endif
