#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern void func_0208246c();
extern void func_02082564();
extern void func_02087ff4();
extern void func_0208bc24();
extern void func_0208bfbc();
extern void func_0208bfe8();
extern void func_02095748();
extern void func_02096c18();
extern char data_020efa10[];
extern char data_0211c36c[];
extern char data_02150b64[];
extern char data_02150bb8[];
extern char data_02150c34[];
extern char data_02150c44[];
extern char data_02150c4c[];
extern char data_02150c5c[];
// clang-format off
asm void func_02081258(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x64
    ldr r2, =data_020efa10
    mov r5, r0
    ldr r0, =data_0211c36c
    str r2, [r5, #0x0]
    str r0, [r5, #0x0]
    mov r2, #0x0
    add r0, r5, #0x10
    mov r4, r1
    str r2, [r5, #0xc]
    bl func_02087ff4
    ldr r0, =0x52c
    ldr r3, =0x534
    ldr ip, =0x535
    add r2, r5, r0
    mov r1, #0x0
    swpb r0, r1, [r2]
    add r2, r5, r3
    str r1, [r5, #0x530]
    swpb r0, r1, [r2]
    add r2, r5, ip
    swpb r0, r1, [r2]
    ldr r2, =data_02150b64
    cmp r4, #0x0
    swpb r0, r1, [r2]
    str r4, [r5, #0x8]
    bne L_0208130c
    ldr r0, =data_02150bb8
    mov r1, #0x1
    bl func_0208246c
    add r0, sp, #0x10
    bl func_02095748
    ldrh r4, [sp, #0x28]
    ldr r0, =data_02150bb8
    add r2, sp, #0x14
    add r3, sp, #0x0
    mov r1, #0x0
    str r4, [sp, #0x0]
    bl func_02082564
    mov r0, #0x1
    bl func_0208bfe8
    mov r0, #0x0
    str r0, [r5, #0x4]
    b L_02081324
L_0208130c:
    ldr r0, =data_02150bb8
    bl func_0208246c
    mov r0, #0x1
    bl func_0208bfe8
    mov r0, #0x1
    str r0, [r5, #0x4]
L_02081324:
    bl func_0208bfbc
    add r1, r5, #0x10
    mov r2, #0x1
    bl func_0208bc24
    mov r0, r5
    bl func_0202f64c
    ldr r4, =0x80001a
    ldr r1, =data_02150c5c
    ldr r2, =data_02150c34
    mov r3, #0x1
    str r4, [r1, #0x0]
    swpb r1, r3, [r2]
    add r0, sp, #0x4
    bl func_02096c18
    ldr r0, [sp, #0x4]
    ldr r1, =data_02150c44
    mov r3, r0, lsl #0xc
    ldr r2, [sp, #0x8]
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r4, [sp, #0xc]
    orr r2, r3, r2, lsl #0x6
    ldr r1, =data_02150c4c
    orr r2, r4, r2
    mov r0, r5
    strh r2, [r1, #0x0]
    add sp, sp, #0x64
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
