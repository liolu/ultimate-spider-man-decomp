#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_0202718c();
extern void func_02036994();
extern void func_020369e8();
extern void func_02036afc();
extern void r1();
extern char data_020b5838[];
extern char data_020b5840[];
extern char data_020b584c[];
// clang-format off
asm void func_02038214(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r0, #0x0
    add r1, r4, #0x1d8
    mov r2, #0x1
    str r0, [r4, #0x1d4]
    swpb r0, r2, [r1]
    add r3, r4, #0x1c4
    swpb r2, r2, [r3]
    add r0, r4, #0x190
    mov r1, #0x1b
    bl func_0202718c
    mov r5, r0
    mov r2, #0x0
    mov r0, r4
    mov r1, r5
    mov r3, r2
    bl func_02036afc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    movne r2, #0x1
    moveq r2, #0x0
    mov r0, r4
    mov r1, r5
    bl func_020369e8
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    bl func_02036994
    ldr r0, =data_020b5838
    ldr r1, =data_020b5840
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_020b584c
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, #0x0
    str r1, [r4, #0x30]
    mov r0, r4
    add r1, r4, #0x1b4
    bl func_01ff9acc
    mov r0, #0x14
    str r0, [r4, #0x1e8]
    mov r0, #0x1d
    str r0, [r4, #0x194]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
