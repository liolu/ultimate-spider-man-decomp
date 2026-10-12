#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001ce4();
extern void func_02004830();
extern void func_0202718c();
extern void ip();
extern void r1();
extern char data_021188f8[];
extern char data_02118900[];
extern char data_0211890c[];
extern char data_0213d440[];
// clang-format off
asm void func_0205fb50(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =0x776
    mov r4, r0
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xe0]
    blx r1
    ldr r0, =data_0213d440
    mov r2, #0x0
    add r1, r0, #0x28
    swpb r0, r2, [r1]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x3
    bl func_0202718c
    mov r1, r0
    mov r0, r4
    mov r2, #0x0
    mov r3, r2
    ldr ip, [r0, #0x0]
    ldr ip, [ip, #0xc8]
    blx ip
    ldr r0, =data_021188f8
    ldr r1, =data_02118900
    ldr r2, [r0, #0x0]
    add lr, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_0211890c
    str r0, [r4, #0x78]
    add r3, r4, #0x88
    ldmia r1, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_02001ce4
    mov r0, r4
    mov r1, #0x27
    bl func_02004830
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
