#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f66c();
extern void r2();
extern char data_0213e1f0[];
// clang-format off
asm void func_0202f5f0(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_0213e1f0
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r4, r0
    bl func_0202f66c
    ldr r2, [r0, #0x0]
    mov r1, r4
    ldr r2, [r2, #0x1c]
    blx r2
    ldr r1, =data_0213e1f0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
