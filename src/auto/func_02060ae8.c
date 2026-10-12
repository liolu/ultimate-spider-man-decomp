#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004830();
extern void func_02061924();
// clang-format off
asm void func_02060ae8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r2, r4, #0x1d
    ldrb r1, [r2, #0x0]
    ldr r0, =0x778
    bic r1, r1, #0x20
    add r0, r4, r0
    swpb r1, r1, [r2]
    bl func_02061924
    mov r0, r4
    mov r1, #0x2c
    bl func_02004830
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
