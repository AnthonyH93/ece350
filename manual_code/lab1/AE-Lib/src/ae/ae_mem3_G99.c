/**
 * @brief Group 99 Lab1 Memory Test Suite 1 Template File
 */
#include "rtx.h"
#include "uart_polling.h"
#include "printf.h"

int test_mem(void) {
    printf("G99-TS3: START\r\n");
    for ( int i = 0; i < 3; i++ ) {
        printf("G99-TS3: some output \r\n");
    }
    printf("G99-TS3: x/N tests PASSED\r\n");
    printf("G99-TS3: y/N tests FAILED\r\n");
    printf("G99-TS3: END\r\n");
    return 0;
}

