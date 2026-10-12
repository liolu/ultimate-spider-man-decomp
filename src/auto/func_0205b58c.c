#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cd8();
extern void func_02003eec();
extern void func_02003efc();
extern void func_02003f0c();
extern void func_02003f6c();
extern void func_02004830();
extern void func_0202718c();
extern void ip();
extern void r1();
extern void r3();
// clang-format off
asm void func_0205b58c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r3, [r0, #0x0]
    mov r7, r0
    ldr r3, [r3, #0x148]
    mov r6, r1
    mov r5, r2
    blx r3
    mov r4, r0
    mov r0, r7
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x180]
    blx r1
    mov r1, r0
    mov r0, r4
    bl func_0202718c
    mov r4, r0
    mov r0, r7
    mov r1, r4
    mov r2, #0x0
    bl func_02003cd8
    mov r0, r7
    ldr ip, [r0, #0x0]
    mov r2, #0x0
    ldr ip, [ip, #0xc8]
    mov r1, r4
    mov r3, r2
    blx ip
    cmp r6, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    add r1, r7, #0x1f8
    swpb r0, r0, [r1]
    cmp r5, #0x0
    ldr r0, =0x1f9
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r7, r0
    cmp r6, #0x0
    swpb r0, r2, [r1]
    beq L_0205b648
    ldrb r2, [r7, #0x15e]
    mov r0, r7
    mov r1, r6
    mov r3, #0x0
    bl func_02003f6c
    b L_0205b65c
L_0205b648:
    ldrb r2, [r7, #0x15e]
    mov r0, r7
    mov r1, r4
    mov r3, #0x0
    bl func_02003efc
L_0205b65c:
    cmp r5, #0x0
    beq L_0205b67c
    ldrb r2, [r7, #0x15f]
    mov r0, r7
    mov r1, r5
    mov r3, #0x0
    bl func_02003f0c
    b L_0205b690
L_0205b67c:
    ldrb r2, [r7, #0x15f]
    mov r0, r7
    mov r1, r4
    mov r3, #0x0
    bl func_02003eec
L_0205b690:
    mov r2, #0x0
    mov r0, r7
    mov r1, #0x1b
    str r2, [r7, #0x30]
    bl func_02004830
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
