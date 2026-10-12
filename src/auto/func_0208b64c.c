#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02150c38[];
extern char func_02089b0c[];
// clang-format off
asm void func_0208b64c(void) {
    mov r1, #0xb
    str r1, [r0, #0x8]
    ldr r2, =data_02150c38
    mov r1, #0x1
    ldr ip, =func_02089b0c
    swpb r1, r1, [r2]
    bx ip
}
// clang-format on
