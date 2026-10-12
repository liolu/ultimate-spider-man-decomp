#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020012d0();
extern void func_02004024();
extern void func_02058688();
extern void func_0205bbd4();
extern void r1();
extern char data_020a7840[];
// clang-format off
asm void func_020034bc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r1, [r4, #0x6f4]
    cmp r1, #0x0
    beq L_02003568
    bl func_02058688
    cmp r0, #0x0
    bne L_0200354c
    ldr r0, [r4, #0x1b8]
    cmp r0, #0x0
    bne L_0200354c
    ldrb r0, [r4, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    ldr r0, [r4, #0x178]
    add r0, r0, #0x4
    bl func_020012d0
    mov r5, r0
    ldr r0, =data_020a7840
    bl func_020012d0
    mov r1, r0
    mov r0, r4
    add r1, r1, r5
    bl func_02004024
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0200354c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x1d4]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02003568:
    bl func_0205bbd4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
