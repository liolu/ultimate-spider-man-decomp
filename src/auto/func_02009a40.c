#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004838();
extern void func_0202f5f0();
extern void func_02046fa4();
extern char data_020af800[];
extern char data_020af870[];
extern char data_020b12b8[];
extern char data_020ed078[];
extern char data_020ed084[];
extern char data_020ed29c[];
extern char data_0213b0ac[];
extern char data_0213b0bc[];
extern char data_02143e44[];
// clang-format off
asm void func_02009a40(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    mov r4, r0
    bl func_02004838
    ldrb r0, [r4, #0x774]
    cmp r0, #0x0
    addeq sp, sp, #0x18
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r0, =data_02143e44
    bl func_02046fa4
    cmp r0, #0x0
    beq L_02009acc
    ldr r0, =data_020ed078
    ldr ip, =data_0213b0bc
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    ldr lr, =data_020af800
    ldr r6, =data_020b12b8
    ldr r5, =data_020ed29c
    add r2, ip, #0xc
    mov r1, #0x0
    swpb r1, r1, [r2]
    add r3, ip, #0xd
    mov r4, #0x1
    swpb r1, r4, [r3]
    str lr, [ip, #0x0]
    str r6, [ip, #0x4]
    str r5, [ip, #0x8]
    bl func_0202f5f0
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02009acc:
    ldr r0, =data_020ed084
    ldr ip, =data_0213b0ac
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    ldr r6, =data_020af870
    ldr r5, =data_020b12b8
    ldr r4, =data_020ed29c
    add r2, ip, #0xc
    mov r1, #0x0
    swpb r1, r1, [r2]
    add r3, ip, #0xd
    mov lr, #0x1
    swpb r1, lr, [r3]
    str r6, [ip, #0x0]
    str r5, [ip, #0x4]
    str r4, [ip, #0x8]
    bl func_0202f5f0
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
