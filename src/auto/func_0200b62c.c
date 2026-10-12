#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200b56c();
extern void func_0202f64c();
extern char data_020ef9e0[];
extern char data_020efa10[];
extern char data_0213b110[];
// clang-format off
asm void func_0200b62c(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_020efa10
    mov r4, r0
    ldr r2, =data_020ef9e0
    str r1, [r4, #0x0]
    ldr r1, =data_0213b110
    str r2, [r4, #0x0]
    str r4, [r1, #0x0]
    bl func_0202f64c
    mov r0, r4
    bl func_0200b56c
    ldr r0, =data_0213b110
    mov r3, #0x1
    ldr r1, [r0, #0x0]
    mov r0, r4
    add r2, r1, #0x4
    swpb r1, r3, [r2]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
