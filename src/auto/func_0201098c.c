#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02010574();
extern void func_0202f5f0();
extern void func_02033790();
extern char data_020afd40[];
extern char data_020f7580[];
extern char data_020f7808[];
extern char data_0213b308[];
extern char data_ov000_02156034[];
// clang-format off
asm void func_0201098c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r4, r1
    mov r5, r0
    cmp r4, #0x1
    bne L_02010a08
    ldr r0, =data_020f7580
    ldr r3, =data_0213b308
    add ip, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldr r8, =data_ov000_02156034
    ldr r7, =data_020afd40
    ldr r6, =data_020f7808
    add r1, r3, #0xc
    mov lr, #0x1
    swpb r0, lr, [r1]
    add r2, r3, #0xd
    swpb r0, lr, [r2]
    str r8, [r3, #0x0]
    mov r0, ip
    str r7, [r3, #0x4]
    str r6, [r3, #0x8]
    bl func_0202f5f0
    mov r0, r5
    mov r1, #0x1
    bl func_02010574
    ldr r0, [r5, #0x164]
    mov r1, #0x1
    ldr r0, [r0, #0xbc]
    str r1, [r0, #0xb0]
L_02010a08:
    mov r0, r5
    mov r1, r4
    bl func_02033790
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
