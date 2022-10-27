/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:46:09 by tkomeno           #+#    #+#             */
/*   Updated: 2022/10/27 20:28:51 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tdd.h"
#include "../includes/minunit.h"

MU_TEST(aaa)
{
	mu_assert_int_eq(1, 1);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(aaa);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();

	return (MU_EXIT_CODE);
}
