#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9a84();
extern void func_0200a47c();
extern char data_02147ac8[];
// clang-format off
asm void func_02062b8c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_01ff9a84
    ldrb r0, [r4, #0x15c]
    cmp r0, #0x0
    bne L_02062bbc
    ldr r1, =data_02147ac8
    add r0, r4, #0x3c
    ldr r1, [r1, #0x0]
    bl func_0200a47c
    cmp r0, #0x0
    beq L_02062bc4
L_02062bbc:
    mov r0, #0x1
    b L_02062bc8
L_02062bc4:
    mov r0, #0x0
L_02062bc8:
    add r1, r4, #0x10
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
