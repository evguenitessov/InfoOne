/*
 ============================================================================
 Name        : PruebaTestUnitario.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include <CUnit/TestRun.h>
#include <CUnit/Basic.h>
#include <assert.h>

int suma(int x, int y);
int maxi(int i1, int i2);
void test_maxi(void);

int main(void)
{
	//printf("La suma de 2 y 3 es: %d", suma(2, 3));

	//printf("%d", maxi(1,2));

	test_maxi();

	return EXIT_SUCCESS;
}

int suma(int x, int y)
{
	return (x + y);
}


int maxi(int i1, int i2)
{
  return (i1 > i2) ? i1 : i2;
}

void test_maxi(void)
{
  CU_ASSERT_EQUAL(suma(1,2), 3);
  //CU_ASSERT(maxi(0,-2) == 0);
  //CU_ASSERT(maxi(2,2) == 2);
}




