#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern char data_0211cd50[];
// clang-format off
asm void func_0208ba88(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    ldrb r0, [r4, #0x50]
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, =data_0211cd50
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    add r1, r4, #0x50
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
