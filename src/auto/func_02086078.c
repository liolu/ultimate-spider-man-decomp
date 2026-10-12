#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffe78c();
extern void func_02064fbc();
extern void func_02064fc8();
extern void func_02083610();
extern void func_02085c74();
extern void func_02085cb8();
extern void func_02085d78();
extern void func_02085f10();
extern void func_02085fac();
extern void func_02090a48();
extern char data_02150c18[];
extern char data_02150c1c[];
// clang-format off
asm void func_02086078(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r2, #0x0
    str r2, [r4, #0x88]
    str r2, [r4, #0x8c]
    ldr r0, [r1, #0x0]
    add ip, r4, #0x94
    str r0, [r4, #0x90]
    mov r0, #0x1
    swpb r3, r0, [ip]
    add ip, r4, #0x95
    swpb r3, r0, [ip]
    add ip, r4, #0x96
    swpb r3, r0, [ip]
    add ip, r4, #0x97
    swpb r3, r2, [ip]
    mov lr, #0x3
    str r2, [r4, #0x98]
    str r1, [r4, #0x9c]
    str r1, [r4, #0xa0]
    str r2, [r4, #0xb0]
    ldrh r1, [r1, #0x4]
    add r3, r4, #0xd8
    add ip, r4, #0xd9
    mov r1, r1, lsl #0x2
    str r1, [r4, #0xb4]
    str r2, [r4, #0xbc]
    str lr, [r4, #0xc0]
    str lr, [r4, #0xc4]
    str r0, [r4, #0xc8]
    swpb r1, r2, [r3]
    add r3, r4, #0xda
    swpb r1, r2, [ip]
    mov ip, #0x1f
    swpb r1, r2, [r3]
    add r3, r4, #0xf0
    str ip, [r4, #0xdc]
    str ip, [r4, #0xe0]
    str ip, [r4, #0xe4]
    str r2, [r4, #0xe8]
    str r2, [r4, #0xec]
    swpb r1, r2, [r3]
    add r1, r4, #0xf1
    swpb r0, r0, [r1]
    ldr r0, =data_02150c18
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02086158
    mov r0, #0x20
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02086150
    mov r1, #0x20
    bl func_02083610
L_02086150:
    ldr r1, =data_02150c1c
    str r0, [r1, #0x0]
L_02086158:
    ldr r0, =data_02150c18
    mov r2, #0x0
    ldr r1, [r0, #0x0]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    mov r1, r2
L_02086170:
    add r0, r4, r2, lsl #0x2
    add r2, r2, #0x1
    str r1, [r0, #0xa4]
    cmp r2, #0x3
    blo L_02086170
    mov r0, r4
    bl func_02085fac
    mov r0, r4
    bl func_02085f10
    ldr r1, [r4, #0xa0]
    mov r0, r4
    ldr r2, [r1, #0x0]
    mov r1, #0x0
    ldr r2, [r2, #0x8]
    bl func_02085d78
    mov r0, r4
    bl func_02085cb8
    mov r0, r4
    bl func_02085c74
    add r0, r4, #0x28
    bl func_02090a48
    add r0, r4, #0x58
    bl func_02090a48
    mov r1, #0x0
    str r1, [r4, #0x0]
    str r1, [r4, #0x4]
    mvn r0, #0x0
    str r0, [r4, #0x10]
    str r1, [r4, #0x14]
    str r1, [r4, #0x18]
    str r0, [r4, #0x24]
    ldr r0, [r4, #0xd4]
    cmp r0, #0x0
    beq L_020862c0
    mov r0, #0x18
    bl func_02064fc8
    movs r6, r0
    beq L_02086248
    ldr r1, [r4, #0xcc]
    mov r0, #0x28
    ldr r5, [r1, #0x38]
    mul r0, r5, r0
    str r5, [r6, #0x0]
    str r5, [r6, #0x8]
    str r5, [r6, #0x10]
    bl func_02064fbc
    mov r5, r5, lsl #0x4
    str r0, [r6, #0x4]
    mov r0, r5
    bl func_02064fbc
    str r0, [r6, #0xc]
    mov r0, r5
    bl func_02064fbc
    str r0, [r6, #0x14]
L_02086248:
    mov r0, #0x18
    str r6, [r4, #0x0]
    bl func_02064fc8
    movs r6, r0
    beq L_0208629c
    ldr r1, [r4, #0xcc]
    mov r0, #0x28
    ldr r5, [r1, #0x38]
    mul r0, r5, r0
    str r5, [r6, #0x0]
    str r5, [r6, #0x8]
    str r5, [r6, #0x10]
    bl func_02064fbc
    mov r5, r5, lsl #0x4
    str r0, [r6, #0x4]
    mov r0, r5
    bl func_02064fbc
    str r0, [r6, #0xc]
    mov r0, r5
    bl func_02064fbc
    str r0, [r6, #0x14]
L_0208629c:
    str r6, [r4, #0x14]
    ldr r0, [r4, #0xd4]
    ldr r1, [r4, #0x0]
    ldr r2, [r4, #0xb4]
    bl func_01ffe78c
    ldr r0, [r4, #0xd4]
    ldr r1, [r4, #0x14]
    ldr r2, [r4, #0xb4]
    bl func_01ffe78c
L_020862c0:
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
