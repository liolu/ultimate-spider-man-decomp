#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern void func_02064fc8();
extern void func_0206f7f0();
extern void func_020708cc();
extern void func_02070950();
extern void func_020709b0();
extern void func_02070c58();
extern void func_02070f20();
extern void func_02070f78();
extern void func_02076d1c();
extern void func_02077e00();
extern void func_0207b1cc();
extern void func_0207b1d0();
extern void func_0207b248();
extern char data_0211be90[];
extern char data_021483ac[];
extern char data_021484fc[];
extern char data_0214866c[];
extern char data_0214868c[];
extern char data_02150c78[];
// clang-format off
asm void func_0207b564(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r5, r2
    mov r2, #0x400
    mov r6, r0
    mov r4, r3
    bl func_0206f7f0
    ldr r1, =data_0211be90
    add r0, r6, #0x1d0
    str r1, [r6, #0x0]
    bl func_02070c58
    add r0, r6, #0x320
    bl func_02070c58
    ldr r0, =0x474
    add r1, r6, #0x1d0
    ldr r3, =0x4a1
    str r1, [r6, #0x470]
    add r2, r6, r0
    mov r1, #0x0
    swpb r0, r1, [r2]
    ldr r0, =0x4ac
    str r1, [r6, #0x480]
    mov r2, #0x1000
    str r2, [r6, #0x484]
    str r1, [r6, #0x488]
    str r1, [r6, #0x48c]
    str r1, [r6, #0x490]
    str r1, [r6, #0x494]
    str r1, [r6, #0x498]
    ldr r2, =0x4b4
    add r3, r6, r3
    add ip, r6, r0
    add lr, r6, r2
    str r1, [r6, #0x49c]
    mov r0, #0x1
    add r2, r6, #0x4a0
    swpb r0, r0, [r2]
    mov r7, #0x6
    swpb r0, r1, [r3]
    add r0, r6, #0x4c0
    str r1, [r6, #0x4a4]
    str r1, [r6, #0x4a8]
    swpb r2, r1, [ip]
    str r7, [r6, #0x4b0]
    swpb r2, r1, [lr]
    str r1, [r6, #0x4b8]
    str r1, [r6, #0x4bc]
    bl func_02077e00
    mov r2, #0x0
    str r2, [r6, #0x4e4]
    str r2, [r6, #0x4e8]
    str r2, [r6, #0x4ec]
    str r2, [r6, #0x4f0]
    str r2, [r6, #0x4f4]
    str r2, [r6, #0x4f8]
    ldr r0, =0x501
    mov r1, r4
    add r4, r6, r0
    str r2, [r6, #0x4fc]
    add r3, r6, #0x500
    swpb r0, r2, [r3]
    ldr r3, =0x508
    swpb r0, r2, [r4]
    add r3, r6, r3
    str r2, [r6, #0x504]
    swpb r0, r2, [r3]
    ldr r0, =0x524
    str r2, [r6, #0x50c]
    add r3, r6, r0
    str r2, [r6, #0x510]
    str r2, [r6, #0x514]
    str r2, [r6, #0x518]
    mov r0, #0x1000
    str r0, [r6, #0x51c]
    str r0, [r6, #0x520]
    swpb r0, r2, [r3]
    ldr r0, =0x52c
    str r2, [r6, #0x528]
    add r3, r6, r0
    swpb r0, r2, [r3]
    ldr r0, =0x541
    str r2, [r6, #0x530]
    add r4, r6, r0
    str r2, [r6, #0x534]
    str r2, [r6, #0x538]
    str r2, [r6, #0x53c]
    add r3, r6, #0x540
    swpb r0, r2, [r3]
    mov r0, r6
    swpb r2, r2, [r4]
    bl func_0207b248
    mov r0, #0xc
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0207b6e4
    bl func_02076d1c
L_0207b6e4:
    str r0, [r6, #0x478]
    ldr r0, [r6, #0x478]
    add r1, r6, #0x1d0
    bl func_02070f78
    ldr r0, =data_021484fc
    ldr r1, =data_021483ac
    bl func_020709b0
    cmp r5, #0x0
    beq L_0207b728
    ldr r0, [r6, #0x478]
    mov r1, r5
    bl func_02070f20
    mov r1, r0
    ldr r0, =data_021484fc
    bl func_02070950
    ldr r0, =data_021484fc
    bl func_020708cc
L_0207b728:
    ldr r1, =data_021484fc
    add r0, r6, #0x1d0
    bl func_020709b0
    mov r0, r6
    bl func_0207b1d0
    ldrb r2, [sp, #0x18]
    ldr ip, =data_02150c78
    ldr r1, =data_0214868c
    mov r5, #0x0
    ldr r0, =data_0214866c
    ldr r4, =0x828
    ldr r3, =0x785
    str ip, [r1, #0x0]
    str r5, [r1, #0x44]
    str r4, [r0, #0x10]
    str r3, [r0, #0x14]
    str r5, [r0, #0x4]
    ldr r1, [r6, #0x470]
    cmp r2, #0x1
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x0]
    str r5, [r0, #0x8]
    str r5, [r0, #0xc]
    bne L_0207b790
    mov r0, r6
    bl func_0207b1cc
L_0207b790:
    mov r0, r6
    bl func_0202f64c
    mov r0, r6
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
