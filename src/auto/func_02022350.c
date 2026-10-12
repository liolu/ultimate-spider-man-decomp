#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ef74();
extern char data_020b3740[];
extern char data_0213d440[];
extern char data_02143e44[];
// clang-format off
asm void func_02022350(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_02143e44
    ldr r2, =data_0213d440
    ldr lr, [r0, #0x4]
    ldr r3, [r0, #0x8]
    mov r1, #0xc
    mul r1, r3, r1
    ldr ip, =data_020b3740
    mov r0, #0x30
    mla r0, lr, r0, ip
    ldr r0, [r1, r0]
    mvn r1, #0x0
    cmp r0, r1
    add r2, r2, #0x29
    mov r3, #0x1
    swpb r1, r3, [r2]
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    bl func_0200ef74
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
