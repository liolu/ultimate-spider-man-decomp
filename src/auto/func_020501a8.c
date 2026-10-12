#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020cea58[];
extern char data_020efa10[];
extern char data_02116528[];
// clang-format off
asm void func_020501a8(void) {
    ldr r3, =data_020efa10
    ldr r2, =data_02116528
    str r3, [r0, #0x0]
    str r2, [r0, #0x0]
    mov r2, #0x100
    str r2, [r0, #0x8]
    str r2, [r0, #0xc]
    mov ip, #0x0
    str ip, [r0, #0x34]
    add r2, r0, #0x3c
    swpb r1, r1, [r2]
    add r2, r0, #0x4
    str ip, [r0, #0x40]
    swpb r1, ip, [r2]
    ldr r1, =data_020cea58
    str ip, [r0, #0x30]
    str ip, [r0, #0x2c]
    ldr r3, [r1, #0x0]
    mov r2, #0x200
    str r3, [r0, #0x1c]
    ldr r1, [r1, #0x4]
    str r1, [r0, #0x20]
    ldr r1, [r0, #0x1c]
    str r1, [r0, #0x14]
    ldr r1, [r0, #0x20]
    str r1, [r0, #0x18]
    str r2, [r0, #0x10]
    str ip, [r0, #0x38]
    bx lr
}
// clang-format on
