#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024c20();
extern void func_02064fc8();
extern void func_0206fb3c();
extern void func_0206fea0();
extern void func_0206feb8();
extern void r1();
// clang-format off
asm void func_0200f22c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r4, r0
    ldr r0, [r4, #0x180]
    cmp r0, r1
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    str r1, [r4, #0x180]
    ldr r0, [r4, #0x180]
    cmp r0, #0x0
    beq L_0200f334
    cmp r0, #0x1
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, [r4, #0x178]
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, r4, #0x15c
    mov ip, #0x1
    swpb r0, ip, [r1]
    ldr r1, [r4, #0xbc]
    mov r3, #0x0
    add r2, r1, #0xd9
    swpb r1, ip, [r2]
    mov r0, #0xc8
    ldr r1, [r4, #0xbc]
    add r2, r1, #0xd9
    swpb r1, r3, [r2]
    bl func_02064fc8
    movs r6, r0
    beq L_0200f304
    mov r0, #0x40
    add r5, r4, #0x4c
    bl func_02064fc8
    movs r1, r0
    beq L_0200f2e4
    ldr r1, [r4, #0x178]
    mov r2, #0x0
    ldr r1, [r1, #0x4]
    bl func_02024c20
    mov r1, r0
L_0200f2e4:
    mov ip, #0x0
    str ip, [sp, #0x0]
    mov r0, r6
    mov r2, r5
    mov r3, #0x1
    str ip, [sp, #0x4]
    bl func_0206fb3c
    mov r6, r0
L_0200f304:
    str r6, [r4, #0x17c]
    ldr r0, [r4, #0x17c]
    mov r1, #0x1
    ldr r0, [r0, #0xbc]
    bl func_0206feb8
    ldr r0, [r4, #0x17c]
    mov r1, #0x1
    ldr r0, [r0, #0xbc]
    bl func_0206fea0
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0200f334:
    add r1, r4, #0x15c
    mov r2, #0x0
    swpb r0, r2, [r1]
    ldr r0, [r4, #0xbc]
    add r1, r0, #0xd9
    swpb r0, r2, [r1]
    ldr r0, [r4, #0x17c]
    cmp r0, #0x0
    beq L_0200f364
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_0200f364:
    mov r0, #0x0
    str r0, [r4, #0x17c]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
