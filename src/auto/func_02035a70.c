#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036088();
extern void func_02036ba8();
extern void func_02036c30();
extern void func_02036e58();
extern void func_02037b20();
extern void func_0203c62c();
extern void r1();
// clang-format off
asm void func_02035a70(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, [r4, #0xbc]
    ldrb r1, [r2, #0x96]
    cmp r1, #0x0
    bne L_02035a9c
    ldrb r1, [r2, #0x97]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    bl func_02036088
L_02035a9c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    beq L_02035ae8
    mov r0, r4
    bl func_02036c30
    cmp r0, #0x0
    beq L_02035ae8
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02037b20
L_02035ae8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x10
    beq L_02035b34
    mov r0, r4
    bl func_02036ba8
    cmp r0, #0x0
    beq L_02035b34
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02037b20
L_02035b34:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_02035b98
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_02035b98
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02035b98:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x160]
    blx r1
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xe8]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
