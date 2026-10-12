#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa324();
extern void func_01ffcd3c();
extern void func_02008d98();
extern void func_02008e0c();
extern void func_02009050();
extern void func_0200a47c();
extern void func_0208565c();
extern void func_020859b8();
extern void func_02085b54();
extern char data_02147ac8[];
// clang-format off
asm void func_020092a0(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl func_01ffa324
    ldr r0, [r4, #0x1a4]
    sub r0, r0, #0x64
    str r0, [r4, #0x94]
    ldr r0, [r4, #0x1a0]
    sub r0, r0, #0x64
    str r0, [r4, #0x98]
    ldr r0, [r4, #0x1a0]
    add r0, r0, #0x64
    str r0, [r4, #0x9c]
    ldr r0, [r4, #0x1a4]
    add r0, r0, #0x64
    str r0, [r4, #0xa0]
    ldrb r0, [r4, #0x15c]
    cmp r0, #0x0
    bne L_02009304
    ldr r0, =data_02147ac8
    add r1, r4, #0x3c
    ldr r0, [r0, #0x0]
    bl func_0200a47c
    cmp r0, #0x0
    beq L_0200930c
L_02009304:
    mov r0, #0x1
    b L_02009310
L_0200930c:
    mov r0, #0x0
L_02009310:
    add r1, r4, #0x10
    swpb r0, r0, [r1]
    ldr r0, [r4, #0xbc]
    cmp r0, #0x0
    beq L_0200934c
    ldrb r1, [r4, #0x10]
    cmp r1, #0x0
    beq L_02009338
    bl func_02085b54
    b L_0200933c
L_02009338:
    bl func_020859b8
L_0200933c:
    add r1, r4, #0x154
    ldr r0, [r1, #0x0]
    add r0, r0, #0x4
    str r0, [r1, #0x0]
L_0200934c:
    ldr r0, [r4, #0xbc]
    bl func_0208565c
    mov r0, r4
    bl func_01ffcd3c
    ldr r1, [r4, #0x1a8]
    ldr r0, [r4, #0x1b0]
    cmp r0, r1
    bgt L_020093a0
    str r0, [sp, #0x0]
    mov r0, r4
    str r1, [sp, #0x4]
    mov ip, #0x0
    add r1, r4, #0x188
    add r2, r4, #0x178
    add r3, r4, #0x180
    str ip, [sp, #0x8]
    bl func_02009050
    add r1, r4, #0x1b0
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
L_020093a0:
    ldr r1, [r4, #0x1ac]
    ldr r0, [r4, #0x1b4]
    cmp r0, r1
    bgt L_020093e4
    str r0, [sp, #0x0]
    mov r0, r4
    str r1, [sp, #0x4]
    mov ip, #0x0
    add r1, r4, #0x1a0
    add r2, r4, #0x190
    add r3, r4, #0x198
    str ip, [sp, #0x8]
    bl func_02009050
    add r1, r4, #0x1b4
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
L_020093e4:
    mov r0, r4
    bl func_02008e0c
    add r2, r4, #0x1b8
    ldr r1, [r2, #0x0]
    mov r0, r4
    add r1, r1, #0x1
    str r1, [r2, #0x0]
    ldr r1, [r4, #0x1c8]
    bl func_02008d98
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
