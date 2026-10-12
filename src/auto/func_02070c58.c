#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02070c58(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x34
    mov r7, r0
    mov r6, #0x0
    str r6, [r7, #0x14c]
    ldr r5, =0xe66
    ldr r1, =0x28cc
    add r0, sp, #0x18
    add r3, sp, #0x0
    str r6, [sp, #0x1c]
    str r5, [sp, #0x20]
    str r1, [sp, #0x18]
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldmia r3, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    str r5, [sp, #0x2c]
    add r0, sp, #0x24
    add r4, sp, #0xc
    str r6, [sp, #0x24]
    str r6, [sp, #0x28]
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    ldmia r4, {r0, r1, r2}
    add r3, r7, #0xc
    stmia r3, {r0, r1, r2}
    ldr r1, =0x14cc
    mov r0, #0x2000
    str r1, [r7, #0x18]
    str r1, [r7, #0x1c]
    str r0, [r7, #0x20]
    str r0, [r7, #0x24]
    ldr r1, =0x733
    mov r0, #0xcc
    str r1, [r7, #0x28]
    str r0, [r7, #0x2c]
    str r6, [r7, #0x30]
    str r0, [r7, #0x34]
    mov r0, #0x12c0
    str r0, [r7, #0x38]
    str r0, [r7, #0x3c]
    ldr r1, =0xfffff574
    mov r0, #0x4b0
    str r1, [r7, #0x40]
    str r1, [r7, #0x44]
    str r6, [r7, #0x48]
    str r0, [r7, #0x4c]
    ldr r1, =0x1388
    ldr r0, =0x1324
    str r1, [r7, #0x50]
    str r0, [r7, #0x54]
    ldr r2, =0x708
    ldr r0, =0xb54
    str r2, [r7, #0x58]
    str r0, [r7, #0x5c]
    ldr r1, =0x18ce
    str r6, [r7, #0x60]
    str r1, [r7, #0x64]
    ldr r0, =0x1194
    mov r5, #0x64
    str r0, [r7, #0x68]
    mov r0, #0x384
    str r0, [r7, #0x6c]
    str r2, [r7, #0x70]
    ldr r0, =0x5dc
    mov r4, #0xc8
    str r0, [r7, #0x74]
    str r5, [r7, #0x78]
    ldr r0, =0x578
    str r4, [r7, #0x7c]
    str r0, [r7, #0x80]
    str r0, [r7, #0x84]
    mov lr, #0x1f4
    ldr ip, =0x15e
    str lr, [r7, #0x88]
    mov r3, #0xfa0
    str ip, [r7, #0x8c]
    str r3, [r7, #0x90]
    mov r2, #0x19
    str r2, [r7, #0x94]
    mov r0, #0x1e
    str r0, [r7, #0x98]
    mov r1, #0x32
    str r1, [r7, #0x9c]
    str ip, [r7, #0xa0]
    mov r0, #0x3e8
    str r0, [r7, #0xa4]
    mov r0, #0x1f40
    ldr r9, =0x36b0
    str r0, [r7, #0xa8]
    str r9, [r7, #0xac]
    mov r8, #0x190
    str r8, [r7, #0xb0]
    ldr r9, =0xea6
    ldr r8, =0x226
    str r9, [r7, #0xb4]
    str r8, [r7, #0xb8]
    mov r8, #0x4
    str r8, [r7, #0xbc]
    ldr r9, =0xf08
    ldr r8, =0xda7
    str r9, [r7, #0xc0]
    str r5, [r7, #0xc4]
    str r3, [r7, #0xc8]
    str r5, [r7, #0xcc]
    str r5, [r7, #0xd0]
    str r5, [r7, #0xd4]
    str r5, [r7, #0xd8]
    str r8, [r7, #0xdc]
    str r4, [r7, #0xe0]
    mov r5, #0x1
    add r4, r7, #0xe4
    swpb r3, r5, [r4]
    ldr r4, =0x380e
    mov r3, #0xc7
    str r4, [r7, #0xe8]
    str r6, [r7, #0xec]
    str r6, [r7, #0xf0]
    str r6, [r7, #0xf4]
    str r6, [r7, #0xf8]
    str r6, [r7, #0xfc]
    str r6, [r7, #0x100]
    str r6, [r7, #0x104]
    str r3, [r7, #0x108]
    str r5, [r7, #0x10c]
    str r2, [r7, #0x110]
    mov r2, #0x258
    str r2, [r7, #0x114]
    str r0, [r7, #0x118]
    ldr r0, =0xfffff75d
    ldr r2, =0x2ee
    str r0, [r7, #0x11c]
    str r2, [r7, #0x120]
    str lr, [r7, #0x124]
    mov r0, #0xba
    str r0, [r7, #0x128]
    str r2, [r7, #0x12c]
    ldr r2, =0xbb8
    ldr r0, =0x1fe
    str r2, [r7, #0x130]
    str r0, [r7, #0x134]
    str r1, [r7, #0x138]
    mov r0, #0x2d0
    str r0, [r7, #0x13c]
    mov r0, #0x3c
    str r0, [r7, #0x140]
    str ip, [r7, #0x144]
    mov r0, #0x1000
    str r0, [r7, #0x148]
    mov r0, r7
    str r6, [r7, #0x14c]
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
