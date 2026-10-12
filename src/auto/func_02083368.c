#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02095a50();
extern char data_023c0000[];
// clang-format off
asm void func_02083368(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldrb r0, [r5, #0xc]
    cmp r0, #0x0
    beq L_02083398
    mov r4, #0x3
L_02083384:
    mov r0, r4
    bl func_02095a50
    ldrb r0, [r5, #0xc]
    cmp r0, #0x0
    bne L_02083384
L_02083398:
    ldr r1, =data_023c0000
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
