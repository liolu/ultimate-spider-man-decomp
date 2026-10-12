#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c9ac();
extern void func_02024c20();
extern void func_0202f64c();
extern void func_02030f84();
extern void func_02054c48();
extern void func_020556d8();
extern void func_02055758();
extern void func_02064fc8();
extern char data_020b45f0[];
extern char data_020b4600[];
extern char data_020b4608[];
extern char data_020efef4[];
extern char data_0213a710[];
extern char data_0213a728[];
extern char data_0213afa8[];
extern char data_02143e44[];
// clang-format off
asm void func_0200cd68(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, #0x40
    bl func_02064fc8
    movs r1, r0
    beq L_0200cd90
    ldr r1, =data_0213a728
    mov r2, #0x1
    bl func_02024c20
    mov r1, r0
L_0200cd90:
    ldr r2, =data_020b45f0
    mov r0, r4
    bl func_02055758
    ldr r1, =data_020efef4
    mov r0, #0x168
    str r1, [r4, #0x0]
    str r0, [r4, #0x28]
    mov r0, #0x0
    str r0, [r4, #0x2c]
    ldr r0, [r4, #0x20]
    mov r2, #0x10
    ldr r1, [r0, #0x24]
    cmp r1, #0x0
    ldreq r0, [r0, #0x14]
    ldreq r1, [r0, #0x8]
    add r0, r4, #0x30
    bl func_02030f84
    mov r0, #0x40
    bl func_02064fc8
    movs r1, r0
    beq L_0200cdf4
    ldr r1, =data_0213a710
    mov r2, #0x1
    bl func_02024c20
    mov r1, r0
L_0200cdf4:
    ldr r2, =data_020b4600
    add r0, r4, #0x5c
    bl func_020556d8
    mov r0, #0x40
    bl func_02064fc8
    movs r1, r0
    beq L_0200ce20
    ldr r1, =data_0213afa8
    mov r2, #0x1
    bl func_02024c20
    mov r1, r0
L_0200ce20:
    ldr r2, =data_020b4608
    add r0, r4, #0x84
    bl func_020556d8
    add r1, r4, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xad
    swpb r0, r2, [r1]
    mov r1, #0x2
    ldr r0, [r4, #0x7c]
    bl func_02054c48
    ldr r0, [r4, #0x20]
    mov r1, #0x2
    bl func_02054c48
    ldr r1, =data_02143e44
    mov r0, r4
    ldr r1, [r1, #0x14]
    bl func_0200c9ac
    mov r0, r4
    bl func_0202f64c
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
