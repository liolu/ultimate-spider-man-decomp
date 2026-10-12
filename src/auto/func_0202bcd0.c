#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ddc0();
extern void func_02028dfc();
extern void func_02028f2c();
extern void func_0202dc04();
extern void func_0202f5f0();
extern void func_02046c6c();
extern void func_02046c74();
extern void func_02046e20();
extern void func_02046e94();
extern void func_0204a874();
extern void func_0205c950();
extern void func_02065628();
extern void func_02070344();
extern void func_0207036c();
extern void func_02082014();
extern void func_020822e8();
extern char data_020af318[];
extern char data_020b1468[];
extern char data_020b42b8[];
extern char data_020b42c4[];
extern char data_020b42d0[];
extern char data_020d9364[];
extern char data_020d9394[];
extern char data_02101198[];
extern char data_021011a4[];
extern char data_021011b0[];
extern char data_021011bc[];
extern char data_021011c8[];
extern char data_021011d4[];
extern char data_021011e0[];
extern char data_021011ec[];
extern char data_021011f8[];
extern char data_02101204[];
extern char data_021012fc[];
extern char data_02101310[];
extern char data_02101324[];
extern char data_02101338[];
extern char data_0213d8e0[];
extern char data_0213d8e4[];
extern char data_02143e44[];
extern char data_02146128[];
extern char data_02150bb8[];
// clang-format off
asm void func_0202bcd0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x78
    mov r5, r0
    ldr r0, [r5, #0x4]
    mov r4, r1
    sub r0, r0, #0x10
    cmp r0, #0x12
    addls pc, pc, r0, lsl #0x2
    b L_0202c290
L_0202bcf4:
    b L_0202be10
    b L_0202bde4
    b L_0202bd40
    b L_0202bd60
    b L_0202bd80
    b L_0202bec4
    b L_0202bf04
    b L_0202bf44
    b L_0202bf70
    b L_0202bf84
    b L_0202c12c
    b L_0202c170
    b L_0202c1b4
    b L_0202c1f8
    b L_0202c22c
    b L_0202c258
    b L_0202c288
    b L_0202c290
    b L_0202c290
L_0202bd40:
    ldr r2, [r5, #0xc]
    ldr r0, =data_02143e44
    mov r1, #0x0
    str r2, [r0, #0x4]
    str r1, [r0, #0x8]
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bd60:
    ldr r2, [r5, #0xc]
    ldr r1, =data_02143e44
    ldr r0, =data_020af318
    str r2, [r1, #0x14]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bd80:
    ldr r5, [r5, #0xc]
    ldr r2, =0x66666667
    mov r1, r5, lsr #0x1f
    smull r0, r3, r2, r5
    smull r0, r4, r2, r5
    mov r3, r3, asr #0x2
    mov r4, r4, asr #0x2
    ldr r2, =0xa
    add r3, r1, r3
    add r4, r1, r4
    smull r0, r1, r2, r3
    sub r3, r5, r0
    ldr r0, =data_02143e44
    sub r1, r4, #0x1
    sub r2, r3, #0x1
    bl func_02046c74
    ldr r0, =data_02146128
    bl func_0205c950
    bl func_02028f2c
    ldr r1, =data_02143e44
    bl func_0204a874
    bl func_02028dfc
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bde4:
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r0, =data_020b42d0
    bl func_0202f5f0
    ldr r0, =data_020b42c4
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202be10:
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r0, =data_020b42d0
    bl func_0202f5f0
    ldr r0, =data_02143e44
    bl func_02046e94
    ldr r4, [r0, #0x68]
    ldr r0, =data_02143e44
    bl func_02046e94
    cmp r4, #0x0
    ldr r6, [r0, #0x6c]
    beq L_0202be94
    ldr r5, =data_0213d8e4
    ldr r0, =data_02101198
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    ldr lr, =data_020b1468
    add r2, r5, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r3, r5, #0xd
    swpb r1, ip, [r3]
    str r4, [r5, #0x0]
    str lr, [r5, #0x4]
    str r6, [r5, #0x8]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202be94:
    ldr r0, =data_021011a4
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, =data_0213d8e0
    mov r2, #0x0
    mov r0, r3
    str r2, [r1, #0x0]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bec4:
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    bl func_0202dc04
    ldr r0, =data_020b42d0
    bl func_0202f5f0
    ldr r0, =data_021011bc
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bf04:
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    bl func_0202dc04
    ldr r0, =data_020b42d0
    bl func_0202f5f0
    ldr r0, =data_021011c8
    add r3, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bf44:
    ldr r0, =data_02150bb8
    bl func_02082014
    cmp r0, #0x0
    addne sp, sp, #0x78
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, =data_020d9364
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bf70:
    ldr r0, =data_020d9394
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bf84:
    ldr r0, =data_021011e0
    add r3, sp, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_021012fc
    add r1, r5, #0xc
    bl func_02065628
    cmp r0, #0x0
    bne L_0202bff8
    ldr r0, =data_02150bb8
    mov r1, #0x0
    bl func_020822e8
    cmp r0, #0x1
    addne sp, sp, #0x78
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r0, =data_020b42d0
    bl func_0202f5f0
    mov r1, #0x0
    add r0, sp, #0x30
    str r1, [sp, #0x38]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202bff8:
    ldr r0, =data_02101310
    add r1, r5, #0xc
    bl func_02065628
    cmp r0, #0x0
    bne L_0202c05c
    ldr r0, =data_02150bb8
    mov r1, #0x1
    bl func_020822e8
    cmp r0, #0x1
    addne sp, sp, #0x78
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r0, =data_020b42d0
    bl func_0202f5f0
    mov r1, #0x1
    add r0, sp, #0x30
    str r1, [sp, #0x38]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c05c:
    ldr r0, =data_02101324
    add r1, r5, #0xc
    bl func_02065628
    cmp r0, #0x0
    bne L_0202c0c0
    ldr r0, =data_02150bb8
    mov r1, #0x2
    bl func_020822e8
    cmp r0, #0x1
    addne sp, sp, #0x78
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r0, =data_020b42d0
    bl func_0202f5f0
    mov r1, #0x2
    add r0, sp, #0x30
    str r1, [sp, #0x38]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c0c0:
    ldr r0, =data_02101338
    add r1, r5, #0xc
    bl func_02065628
    cmp r0, #0x0
    addne sp, sp, #0x78
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, =data_02150bb8
    mov r1, #0x3
    bl func_020822e8
    cmp r0, #0x1
    addne sp, sp, #0x78
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r0, =data_020b42d0
    bl func_0202f5f0
    mov r1, #0x3
    add r0, sp, #0x30
    str r1, [sp, #0x38]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c12c:
    ldr r0, =data_02143e44
    bl func_02046c6c
    ldr r1, [r5, #0xc]
    cmp r0, r1
    addge sp, sp, #0x78
    ldmgefd sp!, {r4, r5, r6, lr}
    bxge lr
    ldr r0, =data_021011f8
    add r3, sp, #0x3c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    str r4, [sp, #0x44]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c170:
    ldr r1, [r5, #0xc]
    ldr r0, =data_02143e44
    bl func_02046e20
    cmp r0, #0x0
    addne sp, sp, #0x78
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, =data_021011ec
    add r3, sp, #0x48
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    str r4, [sp, #0x50]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c1b4:
    ldr r0, =data_02143e44
    bl func_02046c6c
    ldr r1, [r5, #0xc]
    cmp r0, r1
    addge sp, sp, #0x78
    ldmgefd sp!, {r4, r5, r6, lr}
    bxge lr
    ldr r0, =data_021011b0
    add r3, sp, #0x54
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    str r4, [sp, #0x5c]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c1f8:
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r0, =data_020b42b8
    bl func_0202f5f0
    mov r1, #0x1
    mov r2, r1
    mov r0, #0x2
    bl func_02070344
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c22c:
    ldr r0, =data_021011d4
    add r3, sp, #0x60
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r5, #0xc]
    mov r0, r3
    str r1, [sp, #0x68]
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c258:
    ldr r0, =data_02101204
    add r3, sp, #0x6c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_02146128
    bl func_0205c950
    str r0, [sp, #0x74]
    add r0, sp, #0x6c
    bl func_0202f5f0
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202c288:
    ldr r0, [r5, #0xc]
    bl func_0200ddc0
L_0202c290:
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
