#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209d9e4();
extern void func_0209dc4c();
extern void func_0209dce8();
extern void func_0209f1d8();
extern void func_0209f4f4();
// clang-format off
asm void func_02084a64(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    mov r5, r1
    add r0, r4, #0x248
    mov r1, #0x8000
    bl func_0209dc4c
    str r0, [r4, #0x1bc]
    ldr r2, [r4, #0x1bc]
    mov r1, r5
    add r0, r4, #0x1c0
    mov r3, #0x0
    bl func_0209d9e4
    ldr r0, [r4, #0x1bc]
    bl func_0209dce8
    ldr r1, [r4, #0x1bc]
    mov r0, #0x0
    bl func_0209f4f4
    add r7, r4, #0x15c
    mov r8, #0x0
    mov r5, r8
    mvn r6, #0x0
L_02084ab8:
    mov r0, r7
    bl func_0209f1d8
    str r6, [r4, #0x160]
    str r5, [r4, #0x164]
    str r5, [r4, #0x168]
    add r8, r8, #0x1
    str r6, [r4, #0x16c]
    add r1, r4, #0x170
    cmp r8, #0x4
    swpb r0, r5, [r1]
    add r7, r7, #0x18
    add r4, r4, #0x18
    blt L_02084ab8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
