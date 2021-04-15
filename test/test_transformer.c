/**
 * @file test_transformer.c
 * @author SMIT DESAI (smit082000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "unity.h"
#include "transformer.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/**
 * @brief function to test zero condition for function single_phase
 * 
 */

void test_single_phase()
{
    TEST_ASSERT_EQUAL(-1, single_phase(0,1,1));
}

/**
 * @brief function to test zero condition for function wye_grounded_wye
 * 
 */

void test_wye_grounded_wye()
{
    TEST_ASSERT_EQUAL(-1, wye_grounded_wye(0,1,1));
}

/**
 * @brief function to test zero condition for function delta_grounded_wye
 * 
 */

void test_delta_gounded_wye()
{
    TEST_ASSERT_EQUAL(-1, delta_gounded_wye(0,1,1));
}

/**
 * @brief function to test zero condition for function ungrounded_wye_delta
 * 
 */

void test_ungrounded_wye_delta()
{
    TEST_ASSERT_EQUAL(-1, ungrounded_wye_delta(0,1,1));
}

/**
 * @brief function to test zero condition for function delta_delta
 * 
 */

void test_delta_delta()
{
    TEST_ASSERT_EQUAL(-1, delta_delta(0,1,1));
}

/**
 * @brief main function for test function to check each of the above zero checking condition functions 
 * 
 * @return int 
 */

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_single_phase);
  RUN_TEST(test_wye_grounded_wye);
  RUN_TEST(test_delta_gounded_wye);
  RUN_TEST(test_ungrounded_wye_delta);
  RUN_TEST(test_delta_delta);

  /* Close the Unity Test Framework */
  return UNITY_END();
}