#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028f2c();
extern void func_02046c64();
extern void func_02046c6c();
extern void func_0204709c();
extern void func_020470a0();
extern void func_0204a770();
extern void func_0204a808();
extern void func_02082e38();
// clang-format off
asm void func_0208246c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x3c
    mov r4, r0
    swpb r0, r1, [r4]
    ldrb r0, [r4, #0x0]
    cmp r0, #0x1
    addne sp, sp, #0x3c
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
    mov r9, #0x0
    mov r8, r9
    add r7, sp, #0x0
    mov r5, #0x64
L_020824a0:
    mov r0, r8
    bl func_02028f2c
    bl func_0204a770
    cmp r0, #0x0
    bne L_02082520
    mov r0, r7
    bl func_020470a0
    mov r0, r8
    bl func_02028f2c
    mov r1, r7
    bl func_0204a808
    mov r0, r7
    bl func_02046c6c
    mov r6, r0
    mov r0, r7
    bl func_02046c64
    mov r1, r0
    mul r0, r6, r5
    bl func_02082e38
    cmp r9, r0
    bge L_02082518
    mov r0, r7
    bl func_02046c6c
    mov r6, r0
    mov r0, r7
    bl func_02046c64
    mov r1, r0
    mul r0, r6, r5
    bl func_02082e38
    mov r9, r0
L_02082518:
    mov r0, r7
    bl func_0204709c
L_02082520:
    add r8, r8, #0x1
    cmp r8, #0x3
    blt L_020824a0
    str r9, [r4, #0x38]
    add sp, sp, #0x3c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
