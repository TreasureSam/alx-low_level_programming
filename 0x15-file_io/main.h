#ifndef MAIN_H
#define MAIN_H

/*
 * file: main.h
 * Auth: Samuel Omotayo
 * Desc: Header file containing prototypes for all functions
<<<<<<< HEAD
 * writted in the 0x15-file_io directory.
=======
 *	writted in the 0x15-file_io directory.
>>>>>>> 97daeef0040f19355a7616f2f294efce2f5e981a
 */

	#include <sys/types.h>
	#include <sys/stat.h>
	#include <fcntl.h>
	#include <unistd.h>

	ssize_t read_textfile(const char *filename, size_t letters);
	int create_file(const char *filename, char *text_content);
	int append_text_to_file(const char *filename, char *text_content);

#endif/* MAIN_H */
