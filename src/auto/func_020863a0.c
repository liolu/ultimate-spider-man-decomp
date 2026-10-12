#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02086404();
extern void func_02086428();
extern void func_02086624();
extern void func_02086974();
extern void func_0208fb84();
extern void func_02093cfc();
// clang-format off
asm void func_020863a0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x45]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    bl func_02086404
    cmp r0, #0x0
    bne L_020863e0
    bl func_02086974
    mov r1, r4
    bl func_02086624
L_020863d0:
    mov r0, r4
    bl func_02086428
    cmp r0, #0x0
    bne L_020863d0
L_020863e0:
    ldrh r0, [r4, #0x46]
    bl func_02093cfc
    mov r0, r4
    bl func_0208fb84
    add r1, r4, #0x45
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
