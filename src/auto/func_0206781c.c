#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_0205ca5c();
extern void func_0208486c();
extern void func_02084998();
extern void func_0208dca8();
extern void func_0208dce8();
extern void func_020a0298();
extern void func_020a0578();
extern char data_020d9394[];
extern char data_02147ad4[];
extern char data_0214876c[];
// clang-format off
asm void func_0206781c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =0x27fffa8
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    ldr r0, =data_0214876c
    bl func_02084998
    ldr r2, =data_02147ad4
    mov r1, #0x1
    ldr r0, =data_020d9394
    swpb r1, r1, [r2]
    bl func_0202f5f0
    mov r1, #0x0
    mov r2, r1
    mov r0, #0xc
    bl func_020a0298
    bl func_0208dce8
    cmp r0, #0x0
    beq L_02067880
    bl func_020a0578
    bl func_0208dca8
L_02067880:
    ldr r1, =data_02147ad4
    mov r0, #0x0
    swpb r0, r0, [r1]
    bl func_0205ca5c
    ldr r0, =data_0214876c
    bl func_0208486c
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
