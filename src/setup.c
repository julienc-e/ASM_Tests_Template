/*
** EPITECH PROJECT, 2023
** ASM_Tests_Template
** File description:
** setup
*/

#include "tests.h"

libfncs_t fncs;
void *handle;

static void getfncs(void)
{
	fncs.memcpy = dlsym(handle, "memcpy");
	fncs.memmove = dlsym(handle, "memmove");
	fncs.memset = dlsym(handle, "memset");
	fncs.strcasecmp = dlsym(handle, "strcasecmp");
	fncs.strchr = dlsym(handle, "strchr");
	fncs.strcmp = dlsym(handle, "strcmp");
	fncs.strlen = dlsym(handle, "strlen");
	fncs.strncmp = dlsym(handle, "strncmp");
	fncs.strpbrk = dlsym(handle, "strpbrk");
	fncs.strspn = dlsym(handle, "strspn");
	fncs.strcspn = dlsym(handle, "strcspn");
	fncs.strstr = dlsym(handle, "strstr");
	fncs.rindex = dlsym(handle, "rindex");
}

void setup(void)
{
	handle = dlopen("./libasm.so", RTLD_NOW);

	if (!handle)
	{
		printf("Could not open libasm.so\n");
		exit(EXIT_FAILURE);
	}
	getfncs();
}
