#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02082650();
extern char data_020b46b0[];
extern char data_020b46bc[];
// clang-format off
asm void func_020826a8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r3, #0x0
    swpb r1, r3, [r4]
    add r2, r4, #0x1
    swpb r1, r3, [r2]
    ldr r2, =data_020b46b0
    ldr r1, =data_020b46bc
    ldr r2, [r2, #0x0]
    ldr r1, [r1, #0x0]
    sub r1, r2, r1
    str r1, [r4, #0x34]
    bl func_02082650
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
