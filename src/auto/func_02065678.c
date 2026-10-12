#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02065678(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    cmp r2, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov lr, r0
L_02065694:
    ldrb r3, [r1], #0x1
    mov ip, lr
    swpb r3, r3, [lr]
    add lr, lr, #0x1
    ldrb r3, [ip, #0x0]
    cmp r3, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    subs r2, r2, #0x1
    bne L_02065694
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
