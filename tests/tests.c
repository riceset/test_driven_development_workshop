/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:46:09 by tkomeno           #+#    #+#             */
/*   Updated: 2022/10/29 01:56:21 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tdd.h"
#include "../includes/minunit.h"

MU_TEST(abs_zero)
{
	int num;
	int expected_result;
	int actual_result;

	num = 0;
	actual_result = abs(num);
	expected_result = 0;

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(abs_positive_number)
{
	int num;
	int expected_result;
	int actual_result;

	num = 3;
	actual_result = abs(num);
	expected_result = 3;

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(abs_negative_number)
{
	int num;
	int expected_result;
	int actual_result;

	num = -3;
	actual_result = abs(num);
	expected_result = 3;

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(abs_zero);
	MU_RUN_TEST(abs_positive_number);
	MU_RUN_TEST(abs_negative_number);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();

	return (MU_EXIT_CODE);
}
