/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE390_Error_Without_Action__fgets_char_01_good();");
	CWE390_Error_Without_Action__fgets_char_01_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_02_good();");
	CWE390_Error_Without_Action__fgets_char_02_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_03_good();");
	CWE390_Error_Without_Action__fgets_char_03_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_04_good();");
	CWE390_Error_Without_Action__fgets_char_04_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_05_good();");
	CWE390_Error_Without_Action__fgets_char_05_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_06_good();");
	CWE390_Error_Without_Action__fgets_char_06_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_07_good();");
	CWE390_Error_Without_Action__fgets_char_07_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_08_good();");
	CWE390_Error_Without_Action__fgets_char_08_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_09_good();");
	CWE390_Error_Without_Action__fgets_char_09_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_10_good();");
	CWE390_Error_Without_Action__fgets_char_10_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_11_good();");
	CWE390_Error_Without_Action__fgets_char_11_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_12_good();");
	CWE390_Error_Without_Action__fgets_char_12_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_13_good();");
	CWE390_Error_Without_Action__fgets_char_13_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_14_good();");
	CWE390_Error_Without_Action__fgets_char_14_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_15_good();");
	CWE390_Error_Without_Action__fgets_char_15_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_16_good();");
	CWE390_Error_Without_Action__fgets_char_16_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_17_good();");
	CWE390_Error_Without_Action__fgets_char_17_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_18_good();");
	CWE390_Error_Without_Action__fgets_char_18_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_01_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_01_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_02_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_02_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_03_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_03_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_04_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_04_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_05_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_05_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_06_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_06_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_07_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_07_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_08_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_08_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_09_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_09_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_10_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_10_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_11_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_11_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_12_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_12_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_13_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_13_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_14_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_14_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_15_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_15_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_16_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_16_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_17_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_17_good();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_18_good();");
	CWE390_Error_Without_Action__fgets_wchar_t_18_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_01_good();");
	CWE390_Error_Without_Action__fopen_01_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_02_good();");
	CWE390_Error_Without_Action__fopen_02_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_03_good();");
	CWE390_Error_Without_Action__fopen_03_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_04_good();");
	CWE390_Error_Without_Action__fopen_04_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_05_good();");
	CWE390_Error_Without_Action__fopen_05_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_06_good();");
	CWE390_Error_Without_Action__fopen_06_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_07_good();");
	CWE390_Error_Without_Action__fopen_07_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_08_good();");
	CWE390_Error_Without_Action__fopen_08_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_09_good();");
	CWE390_Error_Without_Action__fopen_09_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_10_good();");
	CWE390_Error_Without_Action__fopen_10_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_11_good();");
	CWE390_Error_Without_Action__fopen_11_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_12_good();");
	CWE390_Error_Without_Action__fopen_12_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_13_good();");
	CWE390_Error_Without_Action__fopen_13_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_14_good();");
	CWE390_Error_Without_Action__fopen_14_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_15_good();");
	CWE390_Error_Without_Action__fopen_15_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_16_good();");
	CWE390_Error_Without_Action__fopen_16_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_17_good();");
	CWE390_Error_Without_Action__fopen_17_good();

	printLine("Calling CWE390_Error_Without_Action__fopen_18_good();");
	CWE390_Error_Without_Action__fopen_18_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_01_good();");
	CWE390_Error_Without_Action__sqrt_01_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_02_good();");
	CWE390_Error_Without_Action__sqrt_02_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_03_good();");
	CWE390_Error_Without_Action__sqrt_03_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_04_good();");
	CWE390_Error_Without_Action__sqrt_04_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_05_good();");
	CWE390_Error_Without_Action__sqrt_05_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_06_good();");
	CWE390_Error_Without_Action__sqrt_06_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_07_good();");
	CWE390_Error_Without_Action__sqrt_07_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_08_good();");
	CWE390_Error_Without_Action__sqrt_08_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_09_good();");
	CWE390_Error_Without_Action__sqrt_09_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_10_good();");
	CWE390_Error_Without_Action__sqrt_10_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_11_good();");
	CWE390_Error_Without_Action__sqrt_11_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_12_good();");
	CWE390_Error_Without_Action__sqrt_12_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_13_good();");
	CWE390_Error_Without_Action__sqrt_13_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_14_good();");
	CWE390_Error_Without_Action__sqrt_14_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_15_good();");
	CWE390_Error_Without_Action__sqrt_15_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_16_good();");
	CWE390_Error_Without_Action__sqrt_16_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_17_good();");
	CWE390_Error_Without_Action__sqrt_17_good();

	printLine("Calling CWE390_Error_Without_Action__sqrt_18_good();");
	CWE390_Error_Without_Action__sqrt_18_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE390_Error_Without_Action__empty_catch_01::good();");
	CWE390_Error_Without_Action__empty_catch_01::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_02::good();");
	CWE390_Error_Without_Action__empty_catch_02::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_03::good();");
	CWE390_Error_Without_Action__empty_catch_03::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_04::good();");
	CWE390_Error_Without_Action__empty_catch_04::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_05::good();");
	CWE390_Error_Without_Action__empty_catch_05::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_06::good();");
	CWE390_Error_Without_Action__empty_catch_06::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_07::good();");
	CWE390_Error_Without_Action__empty_catch_07::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_08::good();");
	CWE390_Error_Without_Action__empty_catch_08::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_09::good();");
	CWE390_Error_Without_Action__empty_catch_09::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_10::good();");
	CWE390_Error_Without_Action__empty_catch_10::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_11::good();");
	CWE390_Error_Without_Action__empty_catch_11::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_12::good();");
	CWE390_Error_Without_Action__empty_catch_12::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_13::good();");
	CWE390_Error_Without_Action__empty_catch_13::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_14::good();");
	CWE390_Error_Without_Action__empty_catch_14::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_15::good();");
	CWE390_Error_Without_Action__empty_catch_15::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_16::good();");
	CWE390_Error_Without_Action__empty_catch_16::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_17::good();");
	CWE390_Error_Without_Action__empty_catch_17::good();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_18::good();");
	CWE390_Error_Without_Action__empty_catch_18::good();

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE390_Error_Without_Action__fgets_char_01_bad();");
	CWE390_Error_Without_Action__fgets_char_01_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_02_bad();");
	CWE390_Error_Without_Action__fgets_char_02_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_03_bad();");
	CWE390_Error_Without_Action__fgets_char_03_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_04_bad();");
	CWE390_Error_Without_Action__fgets_char_04_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_05_bad();");
	CWE390_Error_Without_Action__fgets_char_05_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_06_bad();");
	CWE390_Error_Without_Action__fgets_char_06_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_07_bad();");
	CWE390_Error_Without_Action__fgets_char_07_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_08_bad();");
	CWE390_Error_Without_Action__fgets_char_08_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_09_bad();");
	CWE390_Error_Without_Action__fgets_char_09_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_10_bad();");
	CWE390_Error_Without_Action__fgets_char_10_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_11_bad();");
	CWE390_Error_Without_Action__fgets_char_11_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_12_bad();");
	CWE390_Error_Without_Action__fgets_char_12_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_13_bad();");
	CWE390_Error_Without_Action__fgets_char_13_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_14_bad();");
	CWE390_Error_Without_Action__fgets_char_14_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_15_bad();");
	CWE390_Error_Without_Action__fgets_char_15_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_16_bad();");
	CWE390_Error_Without_Action__fgets_char_16_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_17_bad();");
	CWE390_Error_Without_Action__fgets_char_17_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_char_18_bad();");
	CWE390_Error_Without_Action__fgets_char_18_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_01_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_01_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_02_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_02_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_03_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_03_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_04_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_04_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_05_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_05_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_06_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_06_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_07_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_07_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_08_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_08_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_09_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_09_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_10_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_10_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_11_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_11_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_12_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_12_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_13_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_13_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_14_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_14_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_15_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_15_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_16_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_16_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_17_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_17_bad();

	printLine("Calling CWE390_Error_Without_Action__fgets_wchar_t_18_bad();");
	CWE390_Error_Without_Action__fgets_wchar_t_18_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_01_bad();");
	CWE390_Error_Without_Action__fopen_01_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_02_bad();");
	CWE390_Error_Without_Action__fopen_02_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_03_bad();");
	CWE390_Error_Without_Action__fopen_03_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_04_bad();");
	CWE390_Error_Without_Action__fopen_04_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_05_bad();");
	CWE390_Error_Without_Action__fopen_05_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_06_bad();");
	CWE390_Error_Without_Action__fopen_06_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_07_bad();");
	CWE390_Error_Without_Action__fopen_07_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_08_bad();");
	CWE390_Error_Without_Action__fopen_08_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_09_bad();");
	CWE390_Error_Without_Action__fopen_09_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_10_bad();");
	CWE390_Error_Without_Action__fopen_10_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_11_bad();");
	CWE390_Error_Without_Action__fopen_11_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_12_bad();");
	CWE390_Error_Without_Action__fopen_12_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_13_bad();");
	CWE390_Error_Without_Action__fopen_13_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_14_bad();");
	CWE390_Error_Without_Action__fopen_14_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_15_bad();");
	CWE390_Error_Without_Action__fopen_15_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_16_bad();");
	CWE390_Error_Without_Action__fopen_16_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_17_bad();");
	CWE390_Error_Without_Action__fopen_17_bad();

	printLine("Calling CWE390_Error_Without_Action__fopen_18_bad();");
	CWE390_Error_Without_Action__fopen_18_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_01_bad();");
	CWE390_Error_Without_Action__sqrt_01_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_02_bad();");
	CWE390_Error_Without_Action__sqrt_02_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_03_bad();");
	CWE390_Error_Without_Action__sqrt_03_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_04_bad();");
	CWE390_Error_Without_Action__sqrt_04_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_05_bad();");
	CWE390_Error_Without_Action__sqrt_05_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_06_bad();");
	CWE390_Error_Without_Action__sqrt_06_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_07_bad();");
	CWE390_Error_Without_Action__sqrt_07_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_08_bad();");
	CWE390_Error_Without_Action__sqrt_08_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_09_bad();");
	CWE390_Error_Without_Action__sqrt_09_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_10_bad();");
	CWE390_Error_Without_Action__sqrt_10_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_11_bad();");
	CWE390_Error_Without_Action__sqrt_11_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_12_bad();");
	CWE390_Error_Without_Action__sqrt_12_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_13_bad();");
	CWE390_Error_Without_Action__sqrt_13_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_14_bad();");
	CWE390_Error_Without_Action__sqrt_14_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_15_bad();");
	CWE390_Error_Without_Action__sqrt_15_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_16_bad();");
	CWE390_Error_Without_Action__sqrt_16_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_17_bad();");
	CWE390_Error_Without_Action__sqrt_17_bad();

	printLine("Calling CWE390_Error_Without_Action__sqrt_18_bad();");
	CWE390_Error_Without_Action__sqrt_18_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	printLine("Calling CWE390_Error_Without_Action__empty_catch_01::bad();");
	CWE390_Error_Without_Action__empty_catch_01::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_02::bad();");
	CWE390_Error_Without_Action__empty_catch_02::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_03::bad();");
	CWE390_Error_Without_Action__empty_catch_03::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_04::bad();");
	CWE390_Error_Without_Action__empty_catch_04::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_05::bad();");
	CWE390_Error_Without_Action__empty_catch_05::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_06::bad();");
	CWE390_Error_Without_Action__empty_catch_06::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_07::bad();");
	CWE390_Error_Without_Action__empty_catch_07::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_08::bad();");
	CWE390_Error_Without_Action__empty_catch_08::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_09::bad();");
	CWE390_Error_Without_Action__empty_catch_09::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_10::bad();");
	CWE390_Error_Without_Action__empty_catch_10::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_11::bad();");
	CWE390_Error_Without_Action__empty_catch_11::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_12::bad();");
	CWE390_Error_Without_Action__empty_catch_12::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_13::bad();");
	CWE390_Error_Without_Action__empty_catch_13::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_14::bad();");
	CWE390_Error_Without_Action__empty_catch_14::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_15::bad();");
	CWE390_Error_Without_Action__empty_catch_15::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_16::bad();");
	CWE390_Error_Without_Action__empty_catch_16::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_17::bad();");
	CWE390_Error_Without_Action__empty_catch_17::bad();

	printLine("Calling CWE390_Error_Without_Action__empty_catch_18::bad();");
	CWE390_Error_Without_Action__empty_catch_18::bad();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 