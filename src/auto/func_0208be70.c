#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb5e4();
extern void func_02064fc8();
extern void func_02087ff4();
extern void func_0208b428();
extern void func_0208b670();
extern void func_0208b6e4();
extern void func_0208b6f4();
extern char data_020efa10[];
extern char data_0211cd64[];
extern char func_0208bf58[];
extern char func_0208bf74[];
extern char func_0208bfa0[];
// clang-format off
asm void func_0208be70(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_020efa10
    mov r4, r0
    ldr r0, =data_0211cd64
    str r2, [r4, #0x0]
    str r0, [r4, #0x0]
    add r2, r4, #0x4
    swpb r0, r1, [r2]
    mov r0, #0x0
    str r0, [r4, #0x8]
    add r1, r4, #0x50
    swpb r0, r0, [r1]
    bl func_0208b6f4
    add r0, r0, #0x20
    bl func_01ffb5e4
    str r0, [r4, #0x158]
    ldr r2, [r4, #0x158]
    mov r3, #0x0
    ands r0, r2, #0x1f
    beq L_0208bed0
L_0208bec0:
    add r3, r3, #0x1
    add r0, r2, r3
    ands r0, r0, #0x1f
    bne L_0208bec0
L_0208bed0:
    ldr r1, =func_0208bfa0
    add r0, r2, r3
    bl func_0208b670
    bl func_0208b6e4
    ldr r1, =func_0208bf74
    str r1, [r0, #0x538]
    bl func_0208b6e4
    ldrb r1, [r4, #0x4]
    ldr r2, =func_0208bf58
    bl func_0208b428
    ldr r0, =0x51c
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0208bf0c
    bl func_02087ff4
L_0208bf0c:
    str r0, [r4, #0xc]
    ldr r0, [r4, #0xc]
    mov r2, #0x1
    str r0, [r4, #0x10]
    mov r1, #0x0
L_0208bf20:
    add r0, r4, r2, lsl #0x2
    add r2, r2, #0x1
    str r1, [r0, #0x10]
    cmp r2, #0x10
    blt L_0208bf20
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
