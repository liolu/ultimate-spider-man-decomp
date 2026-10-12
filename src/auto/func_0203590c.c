#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036b68();
extern void func_02036e58();
extern void func_02037c34();
extern void func_0203c62c();
extern void r1();
// clang-format off
asm void func_0203590c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xbc]
    ldrb r1, [r1, #0x97]
    cmp r1, #0x0
    beq L_02035934
    mov r1, #0x8
    mov r2, #0x1
    mov r3, #0x0
    bl func_02036b68
L_02035934:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    beq L_02035970
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02037c34
L_02035970:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x80
    beq L_020359ac
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02037c34
L_020359ac:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_02035a34
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_02035a34
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    beq L_02035a04
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_02035a04:
    ldr r0, =0x1f9
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_02035a34:
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
