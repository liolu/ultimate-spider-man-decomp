#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5a0();
extern void func_0205ca5c();
extern void func_020949ec();
extern void func_02096244();
extern void func_0209fb74();
extern void func_0209fc78();
extern void func_0209fd04();
extern char data_0211cc5c[];
extern char data_02150c30[];
// clang-format off
asm void func_0208778c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r1, #0x1
    mov r4, r0
    bl func_0202f5a0
    ldr r0, =data_0211cc5c
    add r1, r4, #0x30
    str r0, [r4, #0x0]
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_02150c30
    str r4, [r0, #0x0]
    bl func_020949ec
    cmp r0, #0x0
    bne L_0208780c
    bl func_02096244
    bl func_0209fd04
    bl func_0205ca5c
    add r0, sp, #0x0
    bl func_0209fc78
    cmp r0, #0x0
    bne L_02087804
    ldr r3, =0x27a
    ldr r2, =0xe66
    ldr r1, =0x28d
    ldr r0, =0x12f6
    strh r3, [sp, #0x0]
    strh r2, [sp, #0x4]
    strh r1, [sp, #0x2]
    strh r0, [sp, #0x6]
L_02087804:
    add r0, sp, #0x0
    bl func_0209fb74
L_0208780c:
    mov r3, #0x0
    str r3, [r4, #0x1c]
    ldr r0, [r4, #0x1c]
    add r1, r4, #0x21
    str r0, [r4, #0x18]
    swpb r0, r3, [r1]
    add r1, r4, #0x20
    ldrb r0, [r4, #0x21]
    add r5, r4, #0x23
    add r6, r4, #0x22
    swpb r0, r0, [r1]
    mov r2, #0x1
    swpb r0, r3, [r5]
    ldrb r0, [r4, #0x23]
    swpb r0, r0, [r6]
    str r2, [r4, #0x24]
    mov r1, r3
L_02087850:
    add r0, r4, r3, lsl #0x4
    str r1, [r0, #0xb8]
    ldr r5, [r0, #0xb8]
    add r3, r3, #0x1
    str r5, [r0, #0xb4]
    add lr, r0, #0xbd
    swpb ip, r1, [lr]
    add lr, r0, #0xbc
    ldrb ip, [r0, #0xbd]
    add r5, r0, #0xbf
    add r6, r0, #0xbe
    swpb ip, ip, [lr]
    cmp r3, #0x10
    swpb ip, r1, [r5]
    ldrb r5, [r0, #0xbf]
    swpb r5, r5, [r6]
    str r2, [r0, #0xc0]
    blt L_02087850
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
