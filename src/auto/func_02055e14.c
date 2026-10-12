#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003afc();
extern char data_02116e0c[];
// clang-format off
asm void func_02055e14(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldr ip, [sp, #0x10]
    mov r4, r0
    str ip, [sp, #0x0]
    bl func_02003afc
    ldr r0, =data_02116e0c
    ldr r2, =0x751
    str r0, [r4, #0x0]
    mvn r0, #0x80000000
    ldr r3, =0x752
    str r0, [r4, #0x748]
    mov ip, #0x0
    str ip, [r4, #0x74c]
    add r1, r4, #0x750
    swpb r0, ip, [r1]
    add r1, r4, r2
    swpb r0, ip, [r1]
    add r1, r4, r3
    swpb r0, ip, [r1]
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
