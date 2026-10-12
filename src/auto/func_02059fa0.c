#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209ab0c();
extern char data_020efa10[];
extern char data_021181c8[];
extern char data_0214611c[];
extern char data_02146120[];
// clang-format off
asm void func_02059fa0(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_021181c8
    mov r4, r0
    ldr r2, =data_0214611c
    str r1, [r4, #0x0]
    mov ip, #0x0
    ldr r3, =data_02146120
    swpb r1, ip, [r2]
    ldr r1, =data_020efa10
    str ip, [r3, #0x0]
    str r1, [r4, #0x0]
    bl func_0209ab0c
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
