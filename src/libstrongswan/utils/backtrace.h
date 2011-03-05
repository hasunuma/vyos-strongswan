/*
 * Copyright (C) 2008 Martin Willi
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup backtrace backtrace
 * @{ @ingroup utils
 */

#ifndef BACKTRACE_H_
#define BACKTRACE_H_

#include <stdio.h>

#include <library.h>

typedef struct backtrace_t backtrace_t;

/**
 * A backtrace registers the frames on the stack during creation.
 */
struct backtrace_t {

	/**
	 * Log the backtrace to a FILE stream.
	 *
	 * @param file		FILE to log backtrace to
	 * @param detailed	TRUE to resolve line/file using addr2line (slow)
	 */
	void (*log)(backtrace_t *this, FILE *file, bool detailed);

	/**
<<<<<<< HEAD
	 * Check if the backtrace contains a frame in a specific function.
	 *
	 * @param		function name
	 * @return		TRUE if function is in the stack
	 */
	bool (*contains_function)(backtrace_t *this, char *function);
=======
	 * Check if the backtrace contains a frame having a function in a list.
	 *
	 * @param		function name array
	 * @param		number of elements in function array
	 * @return		TRUE if one of the functions is in the stack
	 */
	bool (*contains_function)(backtrace_t *this, char *function[], int count);
>>>>>>> upstream/4.5.1

	/**
	 * Destroy a backtrace instance.
	 */
	void (*destroy)(backtrace_t *this);
};

/**
 * Create a backtrace of the current stack.
 *
 * @param skip		how many of the innerst frames to skip
 * @return			backtrace
 */
backtrace_t *backtrace_create(int skip);

#endif /** BACKTRACE_H_ @}*/
