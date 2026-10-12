#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0213bf4d[];
extern char data_0213bf4e[];
extern char data_0213bf50[];
extern char data_0213bf54[];
// clang-format off
asm void func_02018d14(void) {
    mov r2, #0x14
    mul r2, r0, r2
    ldr r0, =data_0213bf4d
    ldr ip, =data_0213bf4e
    add r3, r0, r2
    mov r0, #0x0
    swpb r0, r0, [r3]
    add r3, ip, r2
    mov r0, #0x1
    swpb r0, r0, [r3]
    ldr r3, =data_0213bf50
    ldr ip, [r1, #0x0]
    ldr r0, =data_0213bf54
    str ip, [r3, r2]
    ldr r1, [r1, #0x4]
    str r1, [r0, r2]
    bx lr
}
// clang-format on
