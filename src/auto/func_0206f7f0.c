#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206f618();
extern char data_020efa10[];
extern char data_0211aeb4[];
// clang-format off
asm void func_0206f7f0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    ldr r4, =data_020efa10
    mov r5, r0
    str r4, [r5, #0x0]
    ldr r3, =data_0211aeb4
    mov r6, #0x0
    str r3, [r5, #0x0]
    str r6, [r5, #0x1c4]
    add r3, r5, #0x1c8
    mov r4, r1
    swpb r1, r6, [r3]
    mov r7, r2
    str r4, [r5, #0x1cc]
    str r7, [sp, #0x0]
    str r4, [sp, #0x4]
    mov r1, #0x1000
    str r1, [sp, #0x8]
    add r6, r5, #0x64
    ldr r1, =0x744
    ldr r2, =0xe42
    ldr r3, =0x1547
    str r6, [sp, #0xc]
    bl func_0206f618
    str r7, [sp, #0x0]
    str r4, [sp, #0x4]
    ldr r6, =0xda8
    ldr r1, =0x744
    ldr r2, =0xe42
    ldr r3, =0x1547
    mov r0, r5
    str r6, [sp, #0x8]
    add r4, r5, #0xa4
    str r4, [sp, #0xc]
    bl func_0206f618
    add r6, r5, #0x64
    mov ip, r4
    add lr, r5, #0x144
    ldmia r6!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    ldmia r6!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    ldmia r6!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1, r2, r3}
    stmia lr, {r0, r1, r2, r3}
    add r4, r5, #0x184
    ldmia ip!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia ip!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia ip!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia ip, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r0, r5
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
