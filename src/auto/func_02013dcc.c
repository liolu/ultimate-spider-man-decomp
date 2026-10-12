#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02015034();
extern void r1();
extern char data_02143e44[];
// clang-format off
asm void func_02013dcc(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    add r0, r0, #0x4
    bl func_02015034
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x30]
    blx r1
    ldr r0, =data_02143e44
    mov r2, #0x1
    add r1, r0, #0x34
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
