#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006428();
extern void func_0200f7f0();
extern void func_0200f8a8();
extern void func_0200f8f4();
extern void func_020324f8();
extern void func_02046e94();
extern char data_02143e44[];
// clang-format off
asm void func_02032438(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r3, [r4, #0x6f4]
    mov r5, r2
    cmp r3, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    bl func_020324f8
    mvn r0, #0x0
    cmp r5, r0
    bne L_020324a4
    ldr r0, [r4, #0x6f4]
    bl func_0200f8f4
    mov r0, r4
    bl func_02006428
    mov r1, r0
    ldr r0, [r4, #0x6f4]
    bl func_0200f7f0
    add r1, r4, #0x1c
    ldrb r0, [r1, #0x0]
    add sp, sp, #0x4
    orr r0, r0, #0x20
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020324a4:
    ldr r0, [r4, #0x6f4]
    bl func_0200f8a8
    ldr r0, =data_02143e44
    bl func_02046e94
    ldr r1, [r0, #0x64]
    mov r0, #0x24
    mla r0, r5, r0, r1
    ldr r0, [r0, #0x14]
    cmp r0, #0x0
    addgt sp, sp, #0x4
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    mov r0, r4
    bl func_02006428
    mov r1, r0
    ldr r0, [r4, #0x6f4]
    bl func_0200f7f0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
