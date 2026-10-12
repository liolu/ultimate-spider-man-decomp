#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0206e704(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x74
    ldr r4, [sp, #0x98]
    mov ip, #0x1
    mov r7, ip, lsl r4
    mov r4, #0x0
    str r4, [sp, #0x0]
    mov r6, ip, lsl r3
    ldr r4, =0x736
    add r3, r2, r3
    mov r5, #0x300
    add r5, r4, r5, lsl r3
    cmp r1, r5, lsl #0x1
    sub r1, r7, #0x1
    str r1, [sp, #0x10]
    sub r1, r6, #0x1
    str r1, [sp, #0x14]
    ldr r1, [sp, #0xa4]
    ldr r4, [sp, #0x0]
    str r1, [sp, #0xa4]
    ldr r1, [sp, #0xac]
    str ip, [sp, #0x4]
    str ip, [sp, #0x8]
    str ip, [sp, #0xc]
    str r1, [sp, #0xac]
    addlo sp, sp, #0x74
    mov r3, r4
    movlo r0, #0x2
    ldmlofd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxlo lr
    cmp r5, #0x0
    mov r7, r4
    bls L_0206e7a0
    mov r6, #0x400
L_0206e78c:
    mov r1, r7, lsl #0x1
    strh r6, [r0, r1]
    add r7, r7, #0x1
    cmp r7, r5
    blo L_0206e78c
L_0206e7a0:
    ldr r9, [sp, #0x9c]
    ldr r1, [sp, #0xa0]
    mov r6, #0x0
    add r8, r9, r1
    mvn r7, #0x0
    mov r5, r6
L_0206e7b8:
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldrb r1, [r9], #0x1
    add r5, r5, #0x1
    cmp r5, #0x5
    orr r6, r1, r6, lsl #0x8
    blt L_0206e7b8
    ldr r1, [sp, #0xac]
    mov r5, #0x0
    str r5, [r1, #0x0]
    ldr r1, [sp, #0xa8]
    str r5, [sp, #0x48]
    cmp r1, #0x0
    bls L_0206f170
    rsb r1, r2, #0x8
    str r1, [sp, #0x2c]
    mov r1, #0x1
    str r1, [sp, #0x4c]
    mov r1, #0xb
    str r1, [sp, #0x58]
    mov r1, #0x9
    str r1, [sp, #0x54]
    mov r1, #0x3
    str r1, [sp, #0x50]
    mov r1, #0x8
    str r1, [sp, #0x5c]
    mov r1, #0x10
    str r1, [sp, #0x60]
    mov r1, #0x4
    str r1, [sp, #0x68]
    mov r1, #0x6
    str r1, [sp, #0x64]
L_0206e844:
    ldr r1, [sp, #0x10]
    cmp r7, #0x1000000
    and r1, r3, r1
    str r1, [sp, #0x18]
    mov r1, r1, lsl #0x1
    str r1, [sp, #0x30]
    ldr r1, [sp, #0x0]
    mov r5, r1, lsl #0x4
    mov r1, r5, lsl #0x1
    str r1, [sp, #0x34]
    ldr r1, [sp, #0x18]
    add r5, r0, r5, lsl #0x1
    add r10, r5, r1, lsl #0x1
    bhs L_0206e89c
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206e89c:
    ldrh r5, [r10, #0x0]
    mov r11, r7, lsr #0xb
    mul r1, r11, r5
    cmp r6, r1
    bhs L_0206ea78
    mov r7, r1
    ldr r1, [sp, #0x0]
    ldr r11, [sp, #0x4c]
    cmp r1, #0x7
    rsb r1, r5, #0x800
    add r1, r5, r1, asr #0x5
    ldr r5, [sp, #0x14]
    strh r1, [r10, #0x0]
    and r5, r3, r5
    mov r10, r5, lsl r2
    ldr r5, [sp, #0x2c]
    ldr r1, =0xe6c
    add r5, r10, r4, asr r5
    mov r4, #0x300
    mul r4, r5, r4
    add r1, r0, r1
    add r1, r1, r4, lsl #0x1
    str r1, [sp, #0x40]
    blt L_0206e9b0
    ldr r1, [sp, #0xa4]
    sub r4, r3, ip
    ldrb r1, [r1, r4]
    str r1, [sp, #0x1c]
L_0206e90c:
    ldr r1, [sp, #0x1c]
    cmp r7, #0x1000000
    mov r1, r1, lsl #0x1
    str r1, [sp, #0x1c]
    and r10, r1, #0x100
    ldr r1, [sp, #0x40]
    add r1, r1, #0x200
    add r1, r1, r10, lsl #0x1
    add r5, r1, r11, lsl #0x1
    bhs L_0206e954
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206e954:
    ldrh lr, [r5, #0x0]
    mov r1, r7, lsr #0xb
    mul r4, r1, lr
    cmp r6, r4
    bhs L_0206e988
    cmp r10, #0x0
    mov r7, r4
    rsb r1, lr, #0x800
    add r1, lr, r1, asr #0x5
    strh r1, [r5, #0x0]
    mov r11, r11, lsl #0x1
    beq L_0206e9a8
    b L_0206e9b0
L_0206e988:
    sub r1, lr, lr, asr #0x5
    strh r1, [r5, #0x0]
    cmp r10, #0x0
    sub r7, r7, r4
    sub r6, r6, r4
    mov r1, r11, lsl #0x1
    add r11, r1, #0x1
    beq L_0206e9b0
L_0206e9a8:
    cmp r11, #0x100
    blt L_0206e90c
L_0206e9b0:
    cmp r11, #0x100
    bge L_0206ea34
L_0206e9b8:
    ldr r1, [sp, #0x40]
    cmp r7, #0x1000000
    add r5, r1, r11, lsl #0x1
    bhs L_0206e9e8
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206e9e8:
    ldrh r4, [r5, #0x0]
    mov r10, r7, lsr #0xb
    mul r1, r10, r4
    cmp r6, r1
    bhs L_0206ea14
    mov r7, r1
    rsb r1, r4, #0x800
    add r1, r4, r1, asr #0x5
    strh r1, [r5, #0x0]
    mov r11, r11, lsl #0x1
    b L_0206ea2c
L_0206ea14:
    sub r4, r4, r4, asr #0x5
    strh r4, [r5, #0x0]
    sub r7, r7, r1
    sub r6, r6, r1
    mov r1, r11, lsl #0x1
    add r11, r1, #0x1
L_0206ea2c:
    cmp r11, #0x100
    blt L_0206e9b8
L_0206ea34:
    ldr r1, [sp, #0x0]
    and r4, r11, #0xff
    cmp r1, #0x4
    ldr r1, [sp, #0xa4]
    add r5, r1, r3
    swpb r1, r4, [r5]
    add r3, r3, #0x1
    ldrlt r1, [sp, #0x48]
    strlt r1, [sp, #0x0]
    blt L_0206f164
    ldr r1, [sp, #0x0]
    cmp r1, #0xa
    sublt r1, r1, #0x3
    strlt r1, [sp, #0x0]
    subge r1, r1, #0x6
    strge r1, [sp, #0x0]
    b L_0206f164
L_0206ea78:
    sub r4, r5, r5, asr #0x5
    strh r4, [r10, #0x0]
    sub r7, r7, r1
    sub r6, r6, r1
    ldr r1, [sp, #0x0]
    ldr r4, [sp, #0x0]
    add r5, r0, #0x180
    cmp r7, #0x1000000
    mov r1, r1, lsl #0x1
    add r10, r5, r4, lsl #0x1
    bhs L_0206eac4
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r4, [r9], #0x1
    orr r6, r4, r6, lsl #0x8
L_0206eac4:
    ldrh r5, [r10, #0x0]
    mov r11, r7, lsr #0xb
    mul r4, r11, r5
    cmp r6, r4
    bhs L_0206eb20
    ldr r1, [sp, #0x0]
    mov r7, r4
    cmp r1, #0x7
    rsb r1, r5, #0x800
    add r1, r5, r1, asr #0x5
    strh r1, [r10, #0x0]
    ldr r1, [sp, #0x8]
    str r1, [sp, #0xc]
    ldr r1, [sp, #0x4]
    str r1, [sp, #0x8]
    ldrlt r1, [sp, #0x48]
    str ip, [sp, #0x4]
    strlt r1, [sp, #0x0]
    ldrge r1, [sp, #0x50]
    strge r1, [sp, #0x0]
    ldr r1, =0x664
    add r5, r0, r1
    b L_0206ed64
L_0206eb20:
    sub r5, r5, r5, asr #0x5
    strh r5, [r10, #0x0]
    sub r7, r7, r4
    sub r6, r6, r4
    cmp r7, #0x1000000
    add r4, r0, #0x198
    add r10, r4, r1
    bhs L_0206eb60
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r4, [r9], #0x1
    orr r6, r4, r6, lsl #0x8
L_0206eb60:
    ldrh r5, [r10, #0x0]
    mov r11, r7, lsr #0xb
    mul r4, r11, r5
    cmp r6, r4
    bhs L_0206ec40
    rsb r1, r5, #0x800
    add r1, r5, r1, asr #0x5
    strh r1, [r10, #0x0]
    ldr r1, [sp, #0x34]
    add r5, r0, #0x1e0
    add r5, r5, r1
    ldr r1, [sp, #0x30]
    cmp r4, #0x1000000
    mov r7, r4
    add r1, r5, r1
    bhs L_0206ebc0
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r4, lsl #0x8
    ldrb r4, [r9], #0x1
    orr r6, r4, r6, lsl #0x8
L_0206ebc0:
    ldrh r10, [r1, #0x0]
    mov r4, r7, lsr #0xb
    mul r5, r4, r10
    cmp r6, r5
    bhs L_0206ec2c
    rsb r4, r10, #0x800
    cmp r3, #0x0
    add r4, r10, r4, asr #0x5
    mov r7, r5
    addeq sp, sp, #0x74
    strh r4, [r1, #0x0]
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, [sp, #0x0]
    sub r4, r3, ip
    cmp r1, #0x7
    ldrlt r1, [sp, #0x54]
    strlt r1, [sp, #0x0]
    ldrge r1, [sp, #0x58]
    strge r1, [sp, #0x0]
    ldr r1, [sp, #0xa4]
    add r5, r1, r3
    ldrb r4, [r1, r4]
    add r3, r3, #0x1
    swpb r1, r4, [r5]
    b L_0206f164
L_0206ec2c:
    sub r4, r10, r10, asr #0x5
    strh r4, [r1, #0x0]
    sub r7, r7, r5
    sub r6, r6, r5
    b L_0206ed44
L_0206ec40:
    sub r5, r5, r5, asr #0x5
    strh r5, [r10, #0x0]
    sub r7, r7, r4
    sub r6, r6, r4
    cmp r7, #0x1000000
    add r4, r0, #0x1b0
    add r10, r4, r1
    bhs L_0206ec80
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r4, [r9], #0x1
    orr r6, r4, r6, lsl #0x8
L_0206ec80:
    ldrh r5, [r10, #0x0]
    mov r11, r7, lsr #0xb
    mul r4, r11, r5
    cmp r6, r4
    bhs L_0206ecac
    rsb r1, r5, #0x800
    add r1, r5, r1, asr #0x5
    mov r7, r4
    ldr r11, [sp, #0x4]
    strh r1, [r10, #0x0]
    b L_0206ed3c
L_0206ecac:
    sub r5, r5, r5, asr #0x5
    strh r5, [r10, #0x0]
    sub r7, r7, r4
    sub r6, r6, r4
    cmp r7, #0x1000000
    add r4, r0, #0x1c8
    add r4, r4, r1
    bhs L_0206ecec
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206ecec:
    ldrh r1, [r4, #0x0]
    mov r5, r7, lsr #0xb
    mul r10, r5, r1
    cmp r6, r10
    bhs L_0206ed18
    rsb r5, r1, #0x800
    add r1, r1, r5, asr #0x5
    mov r7, r10
    ldr r11, [sp, #0x8]
    strh r1, [r4, #0x0]
    b L_0206ed34
L_0206ed18:
    sub r1, r1, r1, asr #0x5
    strh r1, [r4, #0x0]
    ldr r11, [sp, #0xc]
    ldr r1, [sp, #0x8]
    sub r7, r7, r10
    sub r6, r6, r10
    str r1, [sp, #0xc]
L_0206ed34:
    ldr r1, [sp, #0x4]
    str r1, [sp, #0x8]
L_0206ed3c:
    str ip, [sp, #0x4]
    mov ip, r11
L_0206ed44:
    ldr r1, [sp, #0x0]
    cmp r1, #0x7
    ldrlt r1, [sp, #0x5c]
    strlt r1, [sp, #0x0]
    ldrge r1, [sp, #0x58]
    strge r1, [sp, #0x0]
    ldr r1, =0xa68
    add r5, r0, r1
L_0206ed64:
    cmp r7, #0x1000000
    bhs L_0206ed8c
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206ed8c:
    ldrh r10, [r5, #0x0]
    mov r1, r7, lsr #0xb
    mul r4, r1, r10
    cmp r6, r4
    bhs L_0206edd4
    rsb r1, r10, #0x800
    add r1, r10, r1, asr #0x5
    strh r1, [r5, #0x0]
    mov r7, r4
    ldr r1, [sp, #0x18]
    add r4, r5, #0x4
    add r1, r4, r1, lsl #0x4
    str r1, [sp, #0x44]
    ldr r1, [sp, #0x48]
    str r1, [sp, #0x24]
    ldr r1, [sp, #0x50]
    str r1, [sp, #0x20]
    b L_0206ee80
L_0206edd4:
    sub r1, r10, r10, asr #0x5
    strh r1, [r5, #0x0]
    sub r7, r7, r4
    sub r6, r6, r4
    cmp r7, #0x1000000
    add r10, r5, #0x2
    bhs L_0206ee10
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206ee10:
    ldrh r4, [r10, #0x0]
    mov r11, r7, lsr #0xb
    mul r1, r11, r4
    cmp r6, r1
    bhs L_0206ee58
    mov r7, r1
    ldr r1, [sp, #0x18]
    add r5, r5, #0x104
    add r1, r5, r1, lsl #0x4
    str r1, [sp, #0x44]
    rsb r1, r4, #0x800
    add r1, r4, r1, asr #0x5
    strh r1, [r10, #0x0]
    ldr r1, [sp, #0x5c]
    str r1, [sp, #0x24]
    ldr r1, [sp, #0x50]
    str r1, [sp, #0x20]
    b L_0206ee80
L_0206ee58:
    sub r7, r7, r1
    sub r6, r6, r1
    ldr r1, [sp, #0x60]
    sub r4, r4, r4, asr #0x5
    str r1, [sp, #0x24]
    ldr r1, [sp, #0x5c]
    strh r4, [r10, #0x0]
    add r4, r5, #0x204
    str r4, [sp, #0x44]
    str r1, [sp, #0x20]
L_0206ee80:
    ldr lr, [sp, #0x20]
    ldr r10, [sp, #0x4c]
L_0206ee88:
    ldr r1, [sp, #0x44]
    cmp r7, #0x1000000
    add r11, r1, r10, lsl #0x1
    bhs L_0206eeb8
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206eeb8:
    ldrh r5, [r11, #0x0]
    mov r1, r7, lsr #0xb
    mul r4, r1, r5
    cmp r6, r4
    bhs L_0206eee4
    mov r7, r4
    rsb r1, r5, #0x800
    add r1, r5, r1, asr #0x5
    strh r1, [r11, #0x0]
    mov r10, r10, lsl #0x1
    b L_0206eefc
L_0206eee4:
    sub r1, r5, r5, asr #0x5
    strh r1, [r11, #0x0]
    sub r7, r7, r4
    sub r6, r6, r4
    mov r1, r10, lsl #0x1
    add r10, r1, #0x1
L_0206eefc:
    subs lr, lr, #0x1
    bne L_0206ee88
    ldr r4, [sp, #0x4c]
    ldr r1, [sp, #0x20]
    sub r4, r10, r4, lsl r1
    ldr r1, [sp, #0x24]
    add r10, r4, r1
    ldr r1, [sp, #0x0]
    cmp r1, #0x4
    bge L_0206f120
    cmp r10, #0x4
    movlt r4, r10
    add r1, r1, #0x7
    str r1, [sp, #0x0]
    ldrge r4, [sp, #0x50]
    add r1, r0, #0x360
    add r1, r1, r4, lsl #0x7
    ldr lr, [sp, #0x64]
    ldr ip, [sp, #0x4c]
    str r1, [sp, #0x3c]
L_0206ef4c:
    ldr r1, [sp, #0x3c]
    cmp r7, #0x1000000
    add r11, r1, ip, lsl #0x1
    bhs L_0206ef7c
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206ef7c:
    ldrh r5, [r11, #0x0]
    mov r1, r7, lsr #0xb
    mul r4, r1, r5
    cmp r6, r4
    bhs L_0206efa8
    mov r7, r4
    rsb r1, r5, #0x800
    add r1, r5, r1, asr #0x5
    strh r1, [r11, #0x0]
    mov ip, ip, lsl #0x1
    b L_0206efc0
L_0206efa8:
    sub r1, r5, r5, asr #0x5
    strh r1, [r11, #0x0]
    sub r7, r7, r4
    sub r6, r6, r4
    mov r1, ip, lsl #0x1
    add ip, r1, #0x1
L_0206efc0:
    subs lr, lr, #0x1
    bne L_0206ef4c
    sub r1, ip, #0x40
    cmp r1, #0x4
    blt L_0206f114
    cmp r1, #0xe
    mov r4, r1, asr #0x1
    sub r11, r4, #0x1
    and r4, r1, #0x1
    orr ip, r4, #0x2
    bge L_0206f008
    ldr r4, =0x55e
    mov ip, ip, lsl r11
    add r4, r0, r4
    add r4, r4, ip, lsl #0x1
    sub r1, r4, r1, lsl #0x1
    str r1, [sp, #0x38]
    b L_0206f064
L_0206f008:
    sub r11, r11, #0x4
L_0206f00c:
    cmp r7, #0x1000000
    bhs L_0206f034
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206f034:
    mov r7, r7, lsr #0x1
    cmp r6, r7
    mov ip, ip, lsl #0x1
    subhs r6, r6, r7
    orrhs ip, ip, #0x1
    subs r11, r11, #0x1
    bne L_0206f00c
    ldr r1, =0x644
    ldr r11, [sp, #0x68]
    add r1, r0, r1
    str r1, [sp, #0x38]
    mov ip, ip, lsl #0x4
L_0206f064:
    ldr r1, [sp, #0x4c]
    str r1, [sp, #0x28]
    mov r5, r1
L_0206f070:
    ldr r1, [sp, #0x38]
    cmp r7, #0x1000000
    add r4, r1, r5, lsl #0x1
    bhs L_0206f0a0
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r7, r7, lsl #0x8
    ldrb r1, [r9], #0x1
    orr r6, r1, r6, lsl #0x8
L_0206f0a0:
    ldrh r1, [r4, #0x0]
    str r1, [sp, #0x6c]
    ldr lr, [sp, #0x6c]
    mov r1, r7, lsr #0xb
    mul lr, r1, lr
    cmp r6, lr
    bhs L_0206f0d8
    ldr r1, [sp, #0x6c]
    mov r7, lr
    rsb lr, r1, #0x800
    add r1, r1, lr, asr #0x5
    strh r1, [r4, #0x0]
    mov r5, r5, lsl #0x1
    b L_0206f0fc
L_0206f0d8:
    ldr r1, [sp, #0x6c]
    sub r7, r7, lr
    sub r1, r1, r1, asr #0x5
    strh r1, [r4, #0x0]
    mov r1, r5, lsl #0x1
    add r5, r1, #0x1
    ldr r1, [sp, #0x28]
    sub r6, r6, lr
    orr ip, ip, r1
L_0206f0fc:
    ldr r1, [sp, #0x28]
    subs r11, r11, #0x1
    mov r1, r1, lsl #0x1
    str r1, [sp, #0x28]
    bne L_0206f070
    b L_0206f118
L_0206f114:
    mov ip, r1
L_0206f118:
    adds ip, ip, #0x1
    beq L_0206f170
L_0206f120:
    cmp ip, r3
    add r10, r10, #0x2
    addhi sp, sp, #0x74
    movhi r0, #0x1
    ldmhifd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxhi lr
L_0206f138:
    ldr r1, [sp, #0xa4]
    sub r4, r3, ip
    ldrb r4, [r1, r4]
    add r5, r1, r3
    subs r10, r10, #0x1
    swpb r1, r4, [r5]
    add r3, r3, #0x1
    beq L_0206f164
    ldr r1, [sp, #0xa8]
    cmp r3, r1
    blo L_0206f138
L_0206f164:
    ldr r1, [sp, #0xa8]
    cmp r3, r1
    blo L_0206e844
L_0206f170:
    cmp r7, #0x1000000
    bhs L_0206f18c
    cmp r9, r8
    addeq sp, sp, #0x74
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
L_0206f18c:
    ldr r0, [sp, #0xac]
    str r3, [r0, #0x0]
    mov r0, #0x0
    add sp, sp, #0x74
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
