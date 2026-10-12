#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200bcb8();
extern void func_0202f5f0();
extern void func_02036450();
extern void func_02054edc();
extern void func_0206f9f8();
extern void func_0207ef14();
extern void func_0207f094();
extern void func_0207f308();
extern void func_0208253c();
extern void func_02087f14();
extern void func_0208b6b8();
extern void func_0208b6c8();
extern void func_0208b6e4();
extern void func_0208bc24();
extern void func_0208bfbc();
extern void func_020977e4();
extern void r1();
extern char data_020d93a0[];
extern char data_0213b6e0[];
extern char data_02150bb8[];
// clang-format off
asm void func_0207fa20(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0208b6c8
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    bl func_0208b6b8
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    bl func_0208b6e4
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_0207fb44
    ldrb r0, [r4, #0x610]
    cmp r0, #0x0
    bne L_0207fa80
    bl func_0208bfbc
    add r1, r4, #0xf4
    mov r2, #0x3
    bl func_0208bc24
    add r1, r4, #0x610
    mov r0, #0x1
    swpb r0, r0, [r1]
L_0207fa80:
    add r0, r4, #0xf4
    bl func_02087f14
    cmp r0, #0x1
    bne L_0207fa98
    mov r0, r4
    bl func_0207ef14
L_0207fa98:
    mov r0, r4
    bl func_0200bcb8
    ldr r1, [r4, #0xc4]
    ldr r0, [r4, #0xf0]
    add r1, r4, r1, lsl #0x2
    ldr r1, [r1, #0xbc]
    add r1, r1, #0x4c
    bl func_0206f9f8
    ldr r0, [r4, #0xf0]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r1, [r4, #0xe8]
    cmp r1, #0x3
    beq L_0207fb44
    ldr r0, [r4, #0xec]
    cmp r0, #0x78
    bne L_0207fb34
    cmp r1, #0x1
    bne L_0207fb18
    ldr r0, [r4, #0xd8]
    cmp r0, #0x2
    beq L_0207fb00
    ldr r0, [r4, #0xdc]
    cmp r0, #0x2
    bne L_0207fb0c
L_0207fb00:
    ldr r0, =data_020d93a0
    bl func_0202f5f0
    b L_0207fb44
L_0207fb0c:
    mov r0, r4
    bl func_0207f308
    b L_0207fb44
L_0207fb18:
    cmp r1, #0x2
    movne r0, #0x3
    strne r0, [r4, #0xe8]
    bne L_0207fb44
    ldr r0, =data_020d93a0
    bl func_0202f5f0
    b L_0207fb44
L_0207fb34:
    add r1, r4, #0xec
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
L_0207fb44:
    ldr r0, =data_0213b6e0
    ldr r1, =0x66666667
    ldr ip, [r0, #0x0]
    ldr r2, =0x14
    smull r0, r3, r1, ip
    mov r3, r3, asr #0x3
    mov r0, ip, lsr #0x1f
    add r3, r0, r3
    smull r0, r1, r2, r3
    subs r3, ip, r0
    bne L_0207fbf8
    str ip, [r4, #0x614]
    ldr r0, [r4, #0xbc]
    bl func_02036450
    str r0, [r4, #0x618]
    ldr r0, [r4, #0xbc]
    ldr r0, [r0, #0x4c]
    str r0, [r4, #0x61c]
    ldr r0, [r4, #0xbc]
    ldr r0, [r0, #0x50]
    str r0, [r4, #0x620]
    ldr r0, [r4, #0xc0]
    bl func_02036450
    str r0, [r4, #0x624]
    ldr r0, [r4, #0xc0]
    ldr r0, [r0, #0x4c]
    str r0, [r4, #0x628]
    ldr r0, [r4, #0xc0]
    ldr r0, [r0, #0x50]
    str r0, [r4, #0x62c]
    bl func_0208b6e4
    add r1, r0, #0x700
    ldrh r3, [r1, #0x8a]
    mov r1, #0x36
    add r2, r4, #0x600
    mla r0, r3, r1, r0
    add r0, r0, #0x600
    ldrh r1, [r0, #0x7c]
    ldr r0, =data_02150bb8
    strh r1, [r2, #0x30]
    bl func_0208253c
    cmp r0, #0x0
    bne L_0207fbf8
    mov r0, r4
    bl func_0207f094
L_0207fbf8:
    bl func_0208b6e4
    bl func_020977e4
    mov r0, r0, lsl #0x10
    ldr r2, [r4, #0x638]
    mov r1, r0, lsr #0x10
    ldr r0, [r2, #0x20]
    bl func_02054edc
    ldr r0, [r4, #0x638]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
