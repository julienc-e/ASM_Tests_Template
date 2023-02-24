/*
** EPITECH PROJECT, 2018
** Tests
** File description:
** Tests
*/

#ifndef TESTS_H_
	#define TESTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <stdbool.h>
#include <criterion/criterion.h>

typedef struct libfncs_s
{
	void *(*memcpy)(void *, const void *, size_t);
	void *(*memmove)(void *, const void *, size_t);
	void *(*memset)(void *, int, size_t);
	int (*strcasecmp)(const char*, const char *);
	char *(*strchr)(const char *, int);
	int (*strcmp)(const char *, const char *);
	size_t (*strlen)(const char *s);
	int (*strncmp)(const char *, const char *, size_t);
	char *(*strpbrk)(const char *, const char *);
	size_t (*strspn)(const char *, const char *);
	size_t (*strcspn)(const char *, const char *);
	char *(*strstr)(const char *, const char *);
} libfncs_t;

void setup(void);
void teardown(void);

#endif