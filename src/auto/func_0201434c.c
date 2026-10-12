#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014e50();
extern void func_020150d8();
extern char data_02143e44[];
// clang-format off
asm void func_0201434c(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_02143e44
    mov ip, #0x1
    add r3, r2, #0x34
    swpb r2, ip, [r3]
    mov r4, r0
    ldr r0, [r1, #0x0]
    bl func_02014e50
    mov r1, r0
    add r0, r4, #0x4
    mov r2, #0x1
    bl func_020150d8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
