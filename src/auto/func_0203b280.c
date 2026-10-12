#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020342a0();
extern void func_020342e4();
extern void func_02035604();
extern void func_02036088();
extern void func_02036a3c();
extern void func_02036b68();
extern void func_02036e58();
extern void func_0203a72c();
extern void func_0203af1c();
extern void func_0203b120();
extern void func_0203c62c();
extern void r1();
// clang-format off
asm void func_0203b280(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x15e]
    cmp r1, #0x0
    bne L_0203b300
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    beq L_0203b2f4
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x210]
    cmp r0, #0x0
    bne L_0203b2ec
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203b2e4
    ldr r0, [r0, #0x210]
    cmp r0, #0x0
    movne r1, r2
L_0203b2e4:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203b2ec:
    cmp r2, #0x0
    beq L_0203b368
L_0203b2f4:
    mov r0, r4
    bl func_02036088
    b L_0203b368
L_0203b300:
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x10
    beq L_0203b360
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x214]
    cmp r0, #0x0
    bne L_0203b358
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203b350
    ldr r0, [r0, #0x214]
    cmp r0, #0x0
    movne r1, r2
L_0203b350:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203b358:
    cmp r2, #0x0
    beq L_0203b368
L_0203b360:
    mov r0, r4
    bl func_02036088
L_0203b368:
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x218]
    cmp r0, #0x0
    bne L_0203b3a0
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203b398
    ldr r0, [r0, #0x218]
    cmp r0, #0x0
    movne r1, r2
L_0203b398:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203b3a0:
    cmp r2, #0x0
    beq L_0203b3b8
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x1
    bl func_02036a3c
L_0203b3b8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_0203b41c
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_0203b41c
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0203b41c:
    mov r0, r4
    bl func_020342e4
    cmp r0, #0x0
    beq L_0203b470
    mov r2, #0x0
    mov ip, #0x40
    mov r0, r4
    mov r3, r2
    mov r1, #0x11
    str ip, [r4, #0x188]
    bl func_02036b68
    mov r0, r4
    mov r1, #0x1
    bl func_02035604
    add r1, r4, #0x4c
    ldr r0, [r1, #0x0]
    str r0, [r4, #0x19c]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x1a0]
    ldmfd sp!, {r4, lr}
    bx lr
L_0203b470:
    mov r0, r4
    bl func_020342a0
    cmp r0, #0x0
    beq L_0203b4c4
    mov r2, #0x0
    mov ip, #0x40
    mov r0, r4
    mov r3, r2
    mov r1, #0x11
    str ip, [r4, #0x188]
    bl func_02036b68
    mov r0, r4
    mov r1, #0x2
    bl func_02035604
    add r1, r4, #0x4c
    ldr r0, [r1, #0x0]
    str r0, [r4, #0x19c]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x1a0]
    ldmfd sp!, {r4, lr}
    bx lr
L_0203b4c4:
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x218]
    cmp r0, #0x0
    bne L_0203b4fc
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203b4f4
    ldr r0, [r0, #0x218]
    cmp r0, #0x0
    movne r1, r2
L_0203b4f4:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203b4fc:
    cmp r2, #0x0
    bne L_0203b524
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203b524:
    ldr r1, [r4, #0x30]
    mov r0, r4
    bl func_0203a72c
    cmp r0, #0x0
    bne L_0203b55c
    mov r0, r4
    bl func_0203af1c
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_0203b120
    ldmfd sp!, {r4, lr}
    bx lr
L_0203b55c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x160]
    blx r1
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xe8]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
