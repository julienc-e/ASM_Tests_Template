/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "tests.h"

extern libfncs_t fncs;
extern void *handle;

void teardown(void)
{
	dlclose(handle);
}