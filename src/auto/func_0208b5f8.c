#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208b64c();
extern void func_0208b6e4();
extern char data_02150c38[];
extern char data_02150c3c[];
extern char data_02150c54[];
// clang-format off
asm void func_0208b5f8(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r1, =data_02150c38
    ldrb r1, [r1, #0x0]
    cmp r1, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {lr}
    bxne lr
    ldr r1, =data_02150c54
    ldr r2, =data_02150c3c
    mov r3, #0x1
    str r0, [r1, #0x0]
    swpb r0, r3, [r2]
    bl func_0208b6e4
    bl func_0208b64c
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
