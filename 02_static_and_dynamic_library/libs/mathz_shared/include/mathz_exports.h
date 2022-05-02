/**************************************************************************
Copyright (C) 2021 Alexander Shaduri
License: 0BSD (Zero-Clause BSD)
***************************************************************************/
#ifndef MATHZ_SUPPORT_H
#define MATHZ_SUPPORT_H


/*
Preconditions:
Define MATHZ_LIBRARY_STATIC when building and using as a static library.
Define MATHZ_LIBRARY_BUILD when building the library.

Mark public symbols with MATHZ_LIBRARY_EXPORT.
*/
#ifndef MATHZ_LIBRARY_STATIC
	/* It's a dynamic library.
	The public symbols must be marked as "exported" when building the library,
	and "imported" when using the library.
	*/
	#ifdef MATHZ_LIBRARY_BUILD
		/* Building the library */
		#ifdef _WIN32
			#define MATHZ_LIBRARY_EXPORT __declspec(dllexport)
		#elif __GNUC__ >= 4
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
