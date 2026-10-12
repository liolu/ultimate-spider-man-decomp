#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020708cc();
extern void func_02070950();
extern void func_02070f20();
// clang-format off
asm void func_0207b1d0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x478]
    mov r1, #0xf0000001
    bl func_02070f20
    mov r1, r0
    add r0, r4, #0x1d0
    bl func_02070950
    add r0, r4, #0x1d0
    bl func_020708cc
    ldr r0, =0x47c
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
