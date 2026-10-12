#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209f150();
extern void func_0209f278();
// clang-format off
asm void func_02084248(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r3, #0x18
    mul r4, r1, r3
    mov r7, r0
    add r0, r7, #0x15c
    add r5, r0, r4
    mov r0, r5
    mov r6, r2
    bl func_0209f150
    cmp r0, #0x0
    beq L_0208428c
    cmp r6, #0x0
    ldrne r1, [r6, #0x0]
    mov r0, r5
    moveq r1, #0x1e
    bl func_0209f278
L_0208428c:
    add r0, r7, r4
    mvn r1, #0x0
    str r1, [r0, #0x160]
    str r1, [r0, #0x16c]
    add r1, r0, #0x170
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
