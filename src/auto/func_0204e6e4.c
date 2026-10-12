#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbe48();
extern void func_0200a294();
extern void func_02027100();
extern void func_0202718c();
extern void func_0202719c();
extern void func_0204f6f8();
extern void func_02062fc0();
extern void func_02064fc8();
extern void func_02083d0c();
extern void r1();
extern char data_020cea4c[];
extern char data_0211639c[];
// clang-format off
asm void func_0204e6e4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    mov r4, r3
    ldrh r3, [r4, #0x0]
    mov r6, r0
    mov r5, r1
    mov r0, r3, lsl #0x1f
    movs r0, r0, lsr #0x1f
    ldrh r0, [r4, #0x0]
    movne r3, #0x1
    moveq r3, #0x0
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    movne r0, #0x1
    moveq r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r1, [r5, #0x4]
    mov r0, r6
    bl func_02062fc0
    ldr r2, =data_0211639c
    mov r1, r5
    add r0, r6, #0x178
    str r2, [r6, #0x0]
    bl func_0202719c
    mov r2, #0x0
    str r2, [r6, #0x17c]
    str r2, [r6, #0x1e0]
    add r1, r6, #0x1e4
    swpb r0, r2, [r1]
    str r2, [r6, #0x1e8]
    str r2, [r6, #0x1ec]
    mov r0, #0x28
    str r2, [r6, #0x1f0]
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0204e788
    ldr r1, [r5, #0x18]
    mov r2, r6
    bl func_0204f6f8
L_0204e788:
    str r0, [r6, #0x1f4]
    mov r3, #0x0
    str r3, [r6, #0x358]
    ldr r1, [r5, #0x4]
    ldr r0, =data_020cea4c
    str r1, [r6, #0x35c]
    str r3, [r6, #0x360]
    add lr, sp, #0x8
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    add ip, r6, #0x364
    ldmia lr, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add ip, r6, #0x370
    ldmia lr, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    mov r0, #0x1
    str r0, [r6, #0x37c]
    str r3, [r6, #0x380]
    str r3, [r6, #0x384]
    str r3, [r6, #0x388]
    ldr r0, =0x3b5
    str r3, [r6, #0x38c]
    add r1, r6, #0x398
    add r2, r6, r0
    swpb r0, r3, [r1]
    ldr ip, [sp, #0x28]
    ldrsh lr, [r4, #0x8]
    ldr r0, [sp, #0x2c]
    add r1, r6, #0x3b4
    str lr, [r6, #0x39c]
    str r5, [r6, #0x3a0]
    str r3, [r6, #0x3a4]
    str r3, [r6, #0x3a8]
    str ip, [r6, #0x3ac]
    str r0, [r6, #0x3b0]
    swpb r0, r3, [r1]
    add r5, r6, #0x4c
    swpb r0, r3, [r2]
    ldrsh r2, [r4, #0xa]
    add r0, r6, #0x178
    mov r1, #0x87
    str r2, [r6, #0x3b8]
    ldrsb r2, [r4, #0xe]
    str r2, [r6, #0x3bc]
    ldrh r2, [r4, #0xc]
    str r2, [r6, #0x3c0]
    str r3, [r6, #0x78]
    ldr r2, [r5, #0x0]
    str r2, [r6, #0x390]
    ldr r2, [r5, #0x4]
    str r2, [r6, #0x394]
    bl func_02027100
    cmp r0, #0x0
    beq L_0204e884
    add r0, r6, #0x178
    mov r1, #0x87
    bl func_0202718c
    ldr r0, [r0, #0x1c]
    bl func_02083d0c
    mov r1, r0
    mov r0, r6
    bl func_01ffbe48
L_0204e884:
    ldrb r0, [sp, #0x30]
    cmp r0, #0x0
    beq L_0204e8ac
    mov r0, #0x18
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0204e8a8
    mov r1, r6
    bl func_0200a294
L_0204e8a8:
    str r0, [r6, #0x3a4]
L_0204e8ac:
    ldrb r0, [sp, #0x34]
    cmp r0, #0x0
    beq L_0204e8d4
    ldr r1, [r4, #0x4]
    mov r0, r6
    str r1, [r6, #0x24]
    str r4, [r6, #0xb4]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0204e8d4:
    mov r0, r6
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
