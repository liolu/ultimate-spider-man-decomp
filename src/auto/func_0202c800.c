#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200d6e8();
extern void func_02028f2c();
extern void func_0202c44c();
extern void func_0202c6a0();
extern void func_0202c948();
extern void func_0202cb84();
extern void func_0204a770();
extern void func_0205c950();
extern void func_02065628();
extern void func_02065678();
extern void func_0206570c();
extern char data_020b1468[];
extern char data_021014fc[];
extern char data_02101508[];
extern char data_02101594[];
extern char data_021015a0[];
extern char data_0213d8fc[];
extern char data_0213d90c[];
extern char data_02146128[];
extern char data_ov000_0215600c[];
// clang-format off
asm void func_0202c800(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    mov r5, r1
    mov r4, r0
    mov r0, r5
    bl func_0206570c
    mov r2, r0
    mov r1, r5
    mov r0, #0x0
    bl func_0200d6e8
    mov r1, r0
    ldrh r0, [r4, #0xdc]
    bl func_0202c44c
    ldr r0, =data_02146128
    bl func_0205c950
    bl func_02028f2c
    bl func_0204a770
    cmp r0, #0x0
    beq L_0202c8b8
    ldr r0, =data_02101594
    mov r1, r5
    bl func_02065628
    cmp r0, #0x0
    bne L_0202c8b8
    ldr r0, =data_021014fc
    ldr ip, =data_0213d8fc
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, r3
    mov r0, r4
    ldr r7, =data_ov000_0215600c
    ldr r6, =data_020b1468
    ldr lr, =data_021015a0
    add r3, ip, #0xc
    mov r5, #0x1
    swpb r2, r5, [r3]
    add r4, ip, #0xd
    swpb r2, r5, [r4]
    str r7, [ip, #0x0]
    str r6, [ip, #0x4]
    str lr, [ip, #0x8]
    bl func_0202c6a0
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c8b8:
    mov r0, r4
    mov r1, r5
    bl func_0202c948
    mov r5, r0
    ldr r0, =data_0213d90c
    mov r1, r5
    mov r2, #0x14
    bl func_02065678
    ldr r2, =data_0213d90c
    mov r0, r4
    add r3, r2, #0x13
    mov r2, #0x0
    swpb r2, r2, [r3]
    mov r1, r5
    bl func_0202cb84
    ldr r1, =data_0213d90c
    ldr r2, =data_02101508
    str r0, [r1, #0x14]
    add r3, sp, #0xc
    ldmia r2, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, r3
    bl func_0202c6a0
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
