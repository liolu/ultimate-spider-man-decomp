#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02054b18();
extern char data_02116d6c[];
// clang-format off
asm void func_02054fd0(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_02116d6c
    mov r4, r0
    str r3, [r4, #0x0]
    mov lr, #0x0
    str lr, [r4, #0xc]
    str lr, [r4, #0x28]
    str lr, [r4, #0x2c]
    str lr, [r4, #0x30]
    add ip, r4, #0x34
    swpb r3, lr, [ip]
    add ip, r4, #0x35
    swpb r3, lr, [ip]
    add r3, r4, #0x36
    swpb r2, r2, [r3]
    mov r2, lr
    str lr, [r4, #0x24]
    bl func_02054b18
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
