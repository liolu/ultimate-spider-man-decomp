#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208562c();
extern void func_02085e2c();
// clang-format off
asm void func_0208580c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    ldr r0, [r7, #0x9c]
    mov r6, r1
    mov r5, r2
    mov r4, r3
    cmp r0, #0x0
    beq L_02085840
    ldr r1, [r0, #0x8]
    ldr r0, [r6, #0x8]
    cmp r1, r0
    beq L_0208584c
L_02085840:
    ldr r1, [r6, #0x8]
    mov r0, r7
    bl func_02085e2c
L_0208584c:
    str r6, [r7, #0x9c]
    str r5, [r7, #0x98]
    add r1, r7, #0x96
    cmp r5, #0x0
    swpb r0, r4, [r1]
    beq L_02085874
    cmp r5, #0x1
    beq L_02085884
    cmp r5, #0x2
    bne L_02085898
L_02085874:
    ldrh r0, [r6, #0x4]
    mov r0, r0, lsl #0x2
    str r0, [r7, #0xb4]
    b L_02085898
L_02085884:
    mov r0, r7
    mov r1, r6
    bl func_0208562c
    mov r0, r0, lsl #0x2
    str r0, [r7, #0xb4]
L_02085898:
    add r1, r7, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
