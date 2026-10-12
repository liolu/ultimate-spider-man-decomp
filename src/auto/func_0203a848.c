#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02035604();
extern void func_02036b68();
extern void func_02036e58();
extern void func_02037c34();
extern void func_0203a72c();
extern void func_0203c62c();
extern void r1();
extern void r3();
// clang-format off
asm void func_0203a848(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    ldr r1, [r4, #0xbc]
    ldrb r1, [r1, #0x97]
    cmp r1, #0x0
    beq L_0203a874
    mov r1, #0xf
    mov r2, #0x1
    mov r3, #0x0
    bl func_02036b68
L_0203a874:
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    bne L_0203a8ac
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203a8a4
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    movne r1, r2
L_0203a8a4:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203a8ac:
    cmp r2, #0x0
    beq L_0203a90c
    ldr r0, [r4, #0x30]
    mov r2, #0x0
    cmp r0, #0x1
    moveq r0, #0x20
    streq r0, [r4, #0x188]
    movne r0, #0x10
    strne r0, [r4, #0x188]
    mov r0, r4
    mov r3, r2
    mov r1, #0x11
    bl func_02036b68
    mov r0, r4
    mov r1, #0x3
    bl func_02035604
    add r1, r4, #0x4c
    ldr r0, [r1, #0x0]
    add sp, sp, #0x8
    str r0, [r4, #0x19c]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x1a0]
    ldmfd sp!, {r4, lr}
    bx lr
L_0203a90c:
    ldr r0, [r4, #0x14]
    ldr r0, [r0, #0x218]
    cmp r0, #0x0
    beq L_0203a974
    ldr r0, [r4, #0x30]
    mov r2, #0x0
    cmp r0, #0x1
    moveq r0, #0x20
    streq r0, [r4, #0x188]
    movne r0, #0x10
    strne r0, [r4, #0x188]
    mov r0, r4
    mov r3, r2
    mov r1, #0x11
    bl func_02036b68
    mov r0, r4
    mov r1, #0x4
    bl func_02035604
    add r1, r4, #0x4c
    ldr r0, [r1, #0x0]
    add sp, sp, #0x8
    str r0, [r4, #0x19c]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x1a0]
    ldmfd sp!, {r4, lr}
    bx lr
L_0203a974:
    ldr r1, [r4, #0x30]
    mov r0, r4
    bl func_0203a72c
    cmp r0, #0x0
    bne L_0203ab54
    ldr r1, [r4, #0x4c]
    ldr r0, [r4, #0x50]
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, [r4, #0x30]
    cmp r0, #0x1
    beq L_0203a9b0
    cmp r0, #0x2
    beq L_0203a9d0
    b L_0203a9ec
L_0203a9b0:
    ldrh r2, [r4, #0x38]
    ldr r0, [r4, #0x4c]
    sub r0, r0, r2, lsr #0x1
    sub r1, r0, #0xa
    sub r0, r1, r2, lsr #0x1
    str r0, [r4, #0x3c]
    str r1, [r4, #0x4c]
    b L_0203a9ec
L_0203a9d0:
    ldrh r2, [r4, #0x38]
    ldr r0, [r4, #0x4c]
    add r0, r0, r2, lsr #0x1
    add r1, r0, #0xa
    sub r0, r1, r2, lsr #0x1
    str r0, [r4, #0x3c]
    str r1, [r4, #0x4c]
L_0203a9ec:
    ldr r0, [r4, #0x60]
    cmp r0, #0x0
    ble L_0203aa74
    mov r0, r4
    ldrh r2, [r4, #0x3a]
    ldr r3, [r0, #0x0]
    add r1, r4, #0x3c
    ldr r3, [r3, #0x78]
    mov r2, r2, lsr #0x1
    blx r3
    ldr r0, [r4, #0x14]
    ldr r0, [r0, #0x218]
    cmp r0, #0x0
    beq L_0203aa60
    ldr r0, [r4, #0x30]
    mov r2, #0x0
    cmp r0, #0x1
    moveq r0, #0x10
    streq r0, [r4, #0x188]
    movne r0, #0x20
    strne r0, [r4, #0x188]
    mov r0, r4
    mov r3, r2
    mov r1, #0x12
    bl func_02036b68
    mov r0, r4
    mov r1, #0x4
    bl func_02035604
    b L_0203ab08
L_0203aa60:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x100]
    blx r1
    b L_0203ab08
L_0203aa74:
    mov r0, r4
    ldrh r2, [r4, #0x3a]
    ldr r3, [r0, #0x0]
    add r1, r4, #0x3c
    ldr r3, [r3, #0x74]
    mov r2, r2, lsr #0x1
    blx r3
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    bne L_0203aac8
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203aac0
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    movne r1, r2
L_0203aac0:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203aac8:
    cmp r2, #0x0
    beq L_0203ab08
    ldr r0, [r4, #0x30]
    mov r2, #0x0
    cmp r0, #0x1
    moveq r0, #0x10
    streq r0, [r4, #0x188]
    movne r0, #0x20
    strne r0, [r4, #0x188]
    mov r0, r4
    mov r3, r2
    mov r1, #0x12
    bl func_02036b68
    mov r0, r4
    mov r1, #0x3
    bl func_02035604
L_0203ab08:
    add r1, r4, #0x4c
    ldr r0, [r1, #0x0]
    str r0, [r4, #0x19c]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x1a0]
    ldrh r0, [r4, #0x38]
    ldr r1, [sp, #0x0]
    ldr r2, [sp, #0x4]
    sub r0, r1, r0, lsr #0x1
    str r0, [r4, #0x3c]
    ldr r0, [sp, #0x0]
    add sp, sp, #0x8
    str r0, [r4, #0x4c]
    ldrh r0, [r4, #0x3a]
    sub r0, r2, r0
    str r0, [r4, #0x40]
    str r2, [r4, #0x50]
    ldmfd sp!, {r4, lr}
    bx lr
L_0203ab54:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc0]
    blx r1
    ldr r0, [r0, #0x8]
    mov r0, r0, lsl #0x19
    movs r0, r0, lsr #0x1f
    bne L_0203ab94
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc0]
    blx r1
    ldr r0, [r0, #0x8]
    mov r0, r0, lsl #0x18
    movs r0, r0, lsr #0x1f
    beq L_0203aba8
L_0203ab94:
    mov r0, r4
    bl func_02037c34
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203aba8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc0]
    blx r1
    ldr r0, [r0, #0x0]
    mov r0, r0, lsl #0x18
    movs r0, r0, lsr #0x1f
    bne L_0203ac18
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc0]
    blx r1
    ldr r0, [r0, #0x0]
    mov r0, r0, lsl #0x19
    movs r0, r0, lsr #0x1f
    bne L_0203ac18
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x110]
    blx r1
    mov r0, r4
    mov r1, #0x10
    mov r2, #0x0
    mov r3, #0x1
    bl func_02036b68
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203ac18:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_0203ad08
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_0203ad08
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203ac64
    ldr r0, [r4, #0x30]
    cmp r0, #0x1
    beq L_0203ad08
L_0203ac64:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203ac88
    ldr r0, [r4, #0x30]
    cmp r0, #0x2
    beq L_0203ad08
L_0203ac88:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    bne L_0203acb8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    cmp r0, #0x0
    bne L_0203acd4
L_0203acb8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203acd4:
    ldr r0, =0x1f9
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203ad08:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x160]
    blx r1
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xe8]
    blx r1
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
