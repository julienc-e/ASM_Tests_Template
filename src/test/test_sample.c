/*
** EPITECH PROJECT, 2023
** ASM_Tests_Template
** File description:
** test_sample
*/

#include "tests.h"
extern libfncs_t fncs;
extern void *handle;

Test(strlen, simple, .init = setup, .fini = teardown)
{
	cr_assert_eq(fncs.strlen("Easy"), 4);
}

Test(strchr, simple, .init = setup, .fini = teardown)
{
	char *new_buff = strdup("Epitech");
	char *tmp;

	cr_assert_neq(new_buff, NULL);
	tmp = fncs.strchr(new_buff, 'c');
	cr_assert_str_eq(tmp, "ch");
	free(new_buff);
}
