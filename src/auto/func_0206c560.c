/* compiler: 1.2/sp2p3  */
#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02065440();
extern void func_0206bb20();
extern void func_0206bc94();
extern void func_0206bfcc();
extern void func_0206dc90();
extern void func_0206dde8();
extern void func_0206dfe4();
extern char data_020d86c0[];
extern char data_0211acdc[];
extern char data_0211acf4[];
extern char data_0211ad10[];
extern char data_0211ad24[];
extern char data_0211ad40[];
extern char data_0211ad54[];
extern char data_0211ad68[];
extern char data_0211ad88[];
extern char data_0211adac[];
extern char data_0211adc8[];
extern char data_0211ade4[];
extern char data_0211ae00[];
extern char data_0211ae18[];
extern char data_0211ae34[];
extern char data_0211ae4c[];
extern char data_0211ae6c[];
extern char data_0211ae84[];
// clang-format off
asm void func_0206c560(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xfc
    movs r9, r0
    str r1, [sp, #0x8]
    beq L_0206c5a4
    ldr r8, [r9, #0x1c]
    cmp r8, #0x0
    beq L_0206c5a4
    ldr r0, [r9, #0xc]
    cmp r0, #0x0
    beq L_0206c5a4
    ldr r0, [r9, #0x0]
    cmp r0, #0x0
    bne L_0206c5b4
    ldr r0, [r9, #0x4]
    cmp r0, #0x0
    beq L_0206c5b4
L_0206c5a4:
    add sp, sp, #0xfc
    mvn r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0206c5b4:
    ldr r0, [r8, #0x0]
    cmp r0, #0xb
    moveq r0, #0xc
    streq r0, [r8, #0x0]
    ldr r0, [r9, #0x10]
    ldr r6, [r9, #0x4]
    str r0, [sp, #0xc]
    str r0, [sp, #0x14]
    mov r0, #0x0
    str r0, [sp, #0x1c]
    str r0, [sp, #0xb0]
    str r0, [sp, #0xc8]
    str r0, [sp, #0xc4]
    mov r0, #0x1
    str r0, [sp, #0x34]
    ldr r0, [sp, #0x1c]
    ldr r11, [r9, #0xc]
    str r0, [sp, #0xdc]
    mov r0, #0x19
    str r0, [sp, #0xe0]
    mov r0, #0x16
    str r0, [sp, #0xd8]
    mov r0, #0x15
    str r0, [sp, #0xd4]
    mov r0, #0x13
    str r0, [sp, #0xb8]
    mov r0, #0x14
    str r0, [sp, #0xd0]
    mov r0, #0x12
    str r0, [sp, #0x98]
    mov r0, #0x6
    str r0, [sp, #0x68]
    mov r0, #0x2
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x1c]
    ldr r7, [r9, #0x0]
    str r0, [sp, #0xbc]
    mov r0, #0x11
    str r0, [sp, #0xc0]
    mov r0, #0x1b
    str r0, [sp, #0x3c]
    mov r0, #0x9
    str r0, [sp, #0x40]
    ldr r0, [sp, #0x1c]
    ldr r5, [r8, #0x30]
    str r0, [sp, #0xa8]
    mov r0, #0x10
    str r0, [sp, #0xac]
    mov r0, #0x7
    str r0, [sp, #0x70]
    ldr r0, [sp, #0x1c]
    ldr r4, [r8, #0x34]
    str r0, [sp, #0xb4]
    str r0, [sp, #0xa0]
    mov r0, #0xe
    str r0, [sp, #0xa4]
    mov r0, #0xf
    str r0, [sp, #0x9c]
    mov r0, #0xd
    str r0, [sp, #0x94]
    ldr r0, [sp, #0x1c]
    str r6, [sp, #0x10]
    str r0, [sp, #0x84]
    mov r0, #0xa
    str r0, [sp, #0x88]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x8c]
    mov r0, #0xb
    str r0, [sp, #0x44]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x7c]
    str r0, [sp, #0x4c]
    mov r0, #0x4
    str r0, [sp, #0x50]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x54]
    mov r0, #0x3
    str r0, [sp, #0x58]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x5c]
    str r0, [sp, #0x60]
    mov r0, #0x5
    str r0, [sp, #0x64]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x6c]
    str r0, [sp, #0x74]
    mov r0, #0x8
    str r0, [sp, #0x78]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x38]
    mov r0, #0xc
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x28]
    str r0, [sp, #0x30]
    str r0, [sp, #0x48]
    str r0, [sp, #0x80]
    mov r0, #0x18
    str r0, [sp, #0x90]
    mov r0, #0x17
    str r0, [sp, #0xcc]
L_0206c748:
    ldr r0, [r8, #0x0]
    cmp r0, #0x1d
    addls pc, pc, r0, lsl #0x2
    b L_0206dae0
L_0206c758:
    b L_0206c7d0
    b L_0206c948
    b L_0206c9ec
    b L_0206ca70
    b L_0206cadc
    b L_0206cb58
    b L_0206cbc0
    b L_0206cc2c
    b L_0206cc98
    b L_0206cd20
    b L_0206cd88
    b L_0206cde4
    b L_0206cdf0
    b L_0206ceb0
    b L_0206cf1c
    b L_0206cf8c
    b L_0206d088
    b L_0206d140
    b L_0206d43c
    b L_0206d5e4
    b L_0206d64c
    b L_0206d7d0
    b L_0206d868
    b L_0206d920
    b L_0206d94c
    b L_0206da4c
    b L_0206dab8
    b L_0206dac4
    b L_0206dad0
    b L_0206dae0
L_0206c7d0:
    ldr r1, [r8, #0x8]
    cmp r1, #0x0
    ldreq r0, [sp, #0x24]
    streq r0, [r8, #0x0]
    beq L_0206c748
    cmp r4, #0x10
    bhs L_0206c80c
L_0206c7ec:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_0206c7ec
L_0206c80c:
    ands r0, r1, #0x2
    beq L_0206c870
    ldr r0, =0x8b1f
    cmp r5, r0
    bne L_0206c870
    ldr r0, [sp, #0x28]
    mov r1, r0
    mov r2, r0
    bl func_0206bc94
    str r0, [r8, #0x14]
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x2c]
    add r1, sp, #0xec
    bl func_0206bc94
    str r0, [r8, #0x14]
    ldr r0, [sp, #0x34]
    ldr r5, [sp, #0x30]
    str r0, [r8, #0x0]
    mov r4, r5
    b L_0206c748
L_0206c870:
    ldr r0, [sp, #0x38]
    str r0, [r8, #0x10]
    ldr r0, [r8, #0x8]
    ands r0, r0, #0x1
    beq L_0206c8b4
    and r0, r5, #0xff
    mov r0, r0, lsl #0x8
    ldr r1, =0x8421085
    add r0, r0, r5, lsr #0x8
    umull r1, r2, r0, r1
    sub r1, r0, r2
    add r2, r2, r1, lsr #0x1
    ldr r1, =0x1f
    mov r2, r2, lsr #0x4
    umull r2, r3, r1, r2
    subs r2, r0, r2
    beq L_0206c8c8
L_0206c8b4:
    ldr r0, =data_0211acdc
    str r0, [r9, #0x18]
    ldr r0, [sp, #0x3c]
    str r0, [r8, #0x0]
    b L_0206c748
L_0206c8c8:
    and r0, r5, #0xf
    cmp r0, #0x8
    ldrne r0, =data_0211acf4
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    mov r5, r5, lsr #0x4
    and r0, r5, #0xf
    add r1, r0, #0x8
    ldr r0, [r8, #0x1c]
    sub r4, r4, #0x4
    cmp r1, r0
    ldrhi r0, =data_0211ad10
    strhi r0, [r9, #0x18]
    ldrhi r0, [sp, #0x3c]
    strhi r0, [r8, #0x0]
    bhi L_0206c748
    ldr r0, [sp, #0x38]
    mov r1, r0
    mov r2, r0
    bl func_0206bb20
    str r0, [r8, #0x14]
    ands r0, r5, #0x200
    ldr r0, [r8, #0x14]
    ldr r5, [sp, #0x48]
    str r0, [r9, #0x30]
    ldrne r0, [sp, #0x40]
    mov r4, r5
    ldreq r0, [sp, #0x44]
    str r0, [r8, #0x0]
    b L_0206c748
L_0206c948:
    cmp r4, #0x10
    bhs L_0206c970
L_0206c950:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_0206c950
L_0206c970:
    str r5, [r8, #0x10]
    ldr r1, [r8, #0x10]
    and r0, r1, #0xff
    cmp r0, #0x8
    ldrne r0, =data_0211acf4
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ands r0, r1, #0xe000
    ldrne r0, =data_0211ad24
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ands r0, r1, #0x200
    beq L_0206c9dc
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x2c]
    add r1, sp, #0xec
    bl func_0206bc94
    str r0, [r8, #0x14]
L_0206c9dc:
    ldr r0, [sp, #0x2c]
    ldr r5, [sp, #0x4c]
    str r0, [r8, #0x0]
    mov r4, r5
L_0206c9ec:
    cmp r4, #0x20
    bhs L_0206ca14
L_0206c9f4:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_0206c9f4
L_0206ca14:
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x200
    beq L_0206ca60
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    add r0, sp, #0xee
    mov r1, r5, lsr #0x10
    swpb r1, r1, [r0]
    add r0, sp, #0xef
    mov r1, r5, lsr #0x18
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x50]
    add r1, sp, #0xec
    bl func_0206bc94
    str r0, [r8, #0x14]
L_0206ca60:
    ldr r0, [sp, #0x58]
    ldr r5, [sp, #0x54]
    str r0, [r8, #0x0]
    mov r4, r5
L_0206ca70:
    cmp r4, #0x10
    bhs L_0206ca98
L_0206ca78:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_0206ca78
L_0206ca98:
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x200
    beq L_0206cacc
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x2c]
    add r1, sp, #0xec
    bl func_0206bc94
    str r0, [r8, #0x14]
L_0206cacc:
    ldr r0, [sp, #0x50]
    ldr r5, [sp, #0x5c]
    str r0, [r8, #0x0]
    mov r4, r5
L_0206cadc:
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x400
    beq L_0206cb50
    cmp r4, #0x10
    bhs L_0206cb10
L_0206caf0:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_0206caf0
L_0206cb10:
    str r5, [r8, #0x38]
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x200
    beq L_0206cb48
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x2c]
    add r1, sp, #0xec
    bl func_0206bc94
    str r0, [r8, #0x14]
L_0206cb48:
    ldr r5, [sp, #0x60]
    mov r4, r5
L_0206cb50:
    ldr r0, [sp, #0x64]
    str r0, [r8, #0x0]
L_0206cb58:
    ldr r1, [r8, #0x10]
    ands r0, r1, #0x400
    beq L_0206cbb8
    ldr r10, [r8, #0x38]
    cmp r10, r6
    movhi r10, r6
    cmp r10, #0x0
    beq L_0206cbac
    ands r0, r1, #0x200
    beq L_0206cb94
    ldr r0, [r8, #0x14]
    mov r1, r7
    mov r2, r10
    bl func_0206bc94
    str r0, [r8, #0x14]
L_0206cb94:
    sub r6, r6, r10
    add r7, r7, r10
    add r1, r8, #0x38
    ldr r0, [r1, #0x0]
    sub r0, r0, r10
    str r0, [r1, #0x0]
L_0206cbac:
    ldr r0, [r8, #0x38]
    cmp r0, #0x0
    bne L_0206daf0
L_0206cbb8:
    ldr r0, [sp, #0x68]
    str r0, [r8, #0x0]
L_0206cbc0:
    ldr r1, [r8, #0x10]
    ands r0, r1, #0x800
    beq L_0206cc24
    cmp r6, #0x0
    beq L_0206daf0
    ldr r10, [sp, #0x6c]
L_0206cbd8:
    ldrb r0, [r7, r10]
    add r10, r10, #0x1
    str r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_0206cbf4
    cmp r10, r6
    blo L_0206cbd8
L_0206cbf4:
    ands r0, r1, #0x2000
    beq L_0206cc10
    ldr r0, [r8, #0x14]
    mov r1, r7
    mov r2, r10
    bl func_0206bc94
    str r0, [r8, #0x14]
L_0206cc10:
    ldr r0, [sp, #0x18]
    sub r6, r6, r10
    cmp r0, #0x0
    add r7, r7, r10
    bne L_0206daf0
L_0206cc24:
    ldr r0, [sp, #0x70]
    str r0, [r8, #0x0]
L_0206cc2c:
    ldr r1, [r8, #0x10]
    ands r0, r1, #0x1000
    beq L_0206cc90
    cmp r6, #0x0
    beq L_0206daf0
    ldr r10, [sp, #0x74]
L_0206cc44:
    ldrb r0, [r7, r10]
    add r10, r10, #0x1
    str r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_0206cc60
    cmp r10, r6
    blo L_0206cc44
L_0206cc60:
    ands r0, r1, #0x2000
    beq L_0206cc7c
    ldr r0, [r8, #0x14]
    mov r1, r7
    mov r2, r10
    bl func_0206bc94
    str r0, [r8, #0x14]
L_0206cc7c:
    ldr r0, [sp, #0x20]
    sub r6, r6, r10
    cmp r0, #0x0
    add r7, r7, r10
    bne L_0206daf0
L_0206cc90:
    ldr r0, [sp, #0x78]
    str r0, [r8, #0x0]
L_0206cc98:
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x200
    beq L_0206ccf8
    cmp r4, #0x10
    bhs L_0206cccc
L_0206ccac:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_0206ccac
L_0206cccc:
    ldr r1, [r8, #0x14]
    ldr r0, =0xffff
    and r0, r1, r0
    cmp r5, r0
    ldrne r0, =data_0211ad40
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ldr r5, [sp, #0x7c]
    mov r4, r5
L_0206ccf8:
    ldr r0, [sp, #0x80]
    mov r1, r0
    mov r2, r0
    bl func_0206bc94
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    str r0, [r9, #0x30]
    ldr r0, [sp, #0x44]
    str r0, [r8, #0x0]
    b L_0206c748
L_0206cd20:
    cmp r4, #0x20
    bhs L_0206cd48
L_0206cd28:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_0206cd28
L_0206cd48:
    mov r2, r5, lsr #0x18
    and r3, r2, #0xff
    mov r2, r5, lsr #0x8
    and r2, r2, #0xff00
    and r0, r5, #0xff00
    add r2, r3, r2
    and r1, r5, #0xff
    add r0, r2, r0, lsl #0x8
    add r0, r0, r1, lsl #0x18
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    ldr r5, [sp, #0x84]
    str r0, [r9, #0x30]
    ldr r0, [sp, #0x88]
    mov r4, r5
    str r0, [r8, #0x0]
L_0206cd88:
    ldr r0, [r8, #0xc]
    cmp r0, #0x0
    bne L_0206cdc0
    ldr r0, [sp, #0xc]
    str r11, [r9, #0xc]
    str r0, [r9, #0x10]
    str r7, [r9, #0x0]
    str r6, [r9, #0x4]
    str r5, [r8, #0x30]
    add sp, sp, #0xfc
    str r4, [r8, #0x34]
    mov r0, #0x2
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0206cdc0:
    ldr r0, [sp, #0x8c]
    mov r1, r0
    mov r2, r0
    bl func_0206bb20
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    str r0, [r9, #0x30]
    ldr r0, [sp, #0x44]
    str r0, [r8, #0x0]
L_0206cde4:
    ldr r0, [sp, #0x8]
    cmp r0, #0x5
    beq L_0206daf0
L_0206cdf0:
    ldr r0, [r8, #0x4]
    cmp r0, #0x0
    beq L_0206ce14
    ldr r0, [sp, #0x90]
    str r0, [r8, #0x0]
    and r0, r4, #0x7
    mov r5, r5, lsr r0
    sub r4, r4, r0
    b L_0206c748
L_0206ce14:
    cmp r4, #0x3
    bhs L_0206ce3c
L_0206ce1c:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x3
    blo L_0206ce1c
L_0206ce3c:
    and r0, r5, #0x1
    str r0, [r8, #0x4]
    mov r0, r5, lsr #0x1
    and r0, r0, #0x3
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0206cea4
L_0206ce58:
    b L_0206ce68
    b L_0206ce74
    b L_0206ce88
    b L_0206ce94
L_0206ce68:
    ldr r0, [sp, #0x94]
    str r0, [r8, #0x0]
    b L_0206cea4
L_0206ce74:
    mov r0, r8
    bl func_0206dde8
    ldr r0, [sp, #0x98]
    str r0, [r8, #0x0]
    b L_0206cea4
L_0206ce88:
    ldr r0, [sp, #0x9c]
    str r0, [r8, #0x0]
    b L_0206cea4
L_0206ce94:
    ldr r0, =data_0211ad54
    str r0, [r9, #0x18]
    ldr r0, [sp, #0x3c]
    str r0, [r8, #0x0]
L_0206cea4:
    mov r5, r5, lsr #0x3
    sub r4, r4, #0x3
    b L_0206c748
L_0206ceb0:
    and r0, r4, #0x7
    mov r5, r5, lsr r0
    sub r4, r4, r0
    cmp r4, #0x20
    bhs L_0206cee4
L_0206cec4:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_0206cec4
L_0206cee4:
    ldr r0, =0xffff
    and r1, r5, r0
    eor r0, r0, r5, lsr #0x10
    cmp r1, r0
    ldrne r0, =data_0211ad68
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ldr r5, [sp, #0xa0]
    ldr r0, [sp, #0xa4]
    str r1, [r8, #0x38]
    str r0, [r8, #0x0]
    mov r4, r5
L_0206cf1c:
    ldr r10, [r8, #0x38]
    cmp r10, #0x0
    beq L_0206cf80
    ldr r0, [sp, #0xc]
    cmp r10, r6
    movhi r10, r6
    cmp r10, r0
    movhi r10, r0
    cmp r10, #0x0
    beq L_0206daf0
    mov r0, r11
    mov r1, r7
    mov r2, r10
    bl func_02065440
    ldr r0, [sp, #0xc]
    add r1, r8, #0x38
    sub r0, r0, r10
    str r0, [sp, #0xc]
    ldr r0, [r1, #0x0]
    sub r6, r6, r10
    sub r0, r0, r10
    add r7, r7, r10
    add r11, r11, r10
    str r0, [r1, #0x0]
    b L_0206c748
L_0206cf80:
    ldr r0, [sp, #0x44]
    str r0, [r8, #0x0]
    b L_0206c748
L_0206cf8c:
    cmp r4, #0xe
    bhs L_0206cfb4
L_0206cf94:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0xe
    blo L_0206cf94
L_0206cfb4:
    ldr r0, =0x101
    and r1, r5, #0x1f
    add r0, r1, r0
    str r0, [r8, #0x58]
    mov r0, r5, lsr #0x5
    and r0, r0, #0x1f
    add r0, r0, #0x1
    str r0, [r8, #0x5c]
    mov r0, r5, lsr #0xa
    and r0, r0, #0xf
    add r0, r0, #0x4
    str r0, [r8, #0x54]
    ldr r1, [r8, #0x58]
    ldr r0, =0x11e
    mov r5, r5, lsr #0xe
    sub r4, r4, #0xe
    cmp r1, r0
    bhi L_0206d008
    ldr r0, [r8, #0x5c]
    cmp r0, #0x1e
    bls L_0206d01c
L_0206d008:
    ldr r0, =data_0211ad88
    str r0, [r9, #0x18]
    ldr r0, [sp, #0x3c]
    str r0, [r8, #0x0]
    b L_0206c748
L_0206d01c:
    ldr r0, [sp, #0xa8]
    str r0, [r8, #0x60]
    ldr r0, [sp, #0xac]
    str r0, [r8, #0x0]
    b L_0206d088
L_0206d030:
    cmp r4, #0x3
    bhs L_0206d058
L_0206d038:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x3
    blo L_0206d038
L_0206d058:
    add r3, r8, #0x60
    ldr r0, [r3, #0x0]
    and r2, r5, #0x7
    add r0, r0, #0x1
    str r0, [r3, #0x0]
    ldr r0, =data_020d86c0
    mov r1, r1, lsl #0x1
    ldrh r0, [r0, r1]
    mov r5, r5, lsr #0x3
    sub r4, r4, #0x3
    add r0, r8, r0, lsl #0x1
    strh r2, [r0, #0x68]
L_0206d088:
    ldr r1, [r8, #0x60]
    ldr r0, [r8, #0x54]
    cmp r1, r0
    blo L_0206d030
    cmp r1, #0x13
    bhs L_0206d0d4
L_0206d0a0:
    add r2, r8, #0x60
    ldr r0, [r2, #0x0]
    mov r1, r1, lsl #0x1
    add r0, r0, #0x1
    str r0, [r2, #0x0]
    ldr r0, =data_020d86c0
    ldrh r0, [r0, r1]
    add r1, r8, r0, lsl #0x1
    ldr r0, [sp, #0xb0]
    strh r0, [r1, #0x68]
    ldr r1, [r8, #0x60]
    cmp r1, #0x13
    blo L_0206d0a0
L_0206d0d4:
    ldr r0, =0x528
    add r1, r8, #0x4c
    add r0, r8, r0
    str r0, [r8, #0x64]
    ldr r0, [r8, #0x64]
    ldr r2, [sp, #0xb8]
    str r0, [r8, #0x44]
    ldr r0, [sp, #0x70]
    add r3, r8, #0x64
    str r0, [r8, #0x4c]
    str r1, [sp, #0x0]
    add r0, r8, #0x2e8
    str r0, [sp, #0x4]
    ldr r0, [sp, #0xb4]
    add r1, r8, #0x68
    bl func_0206dfe4
    str r0, [sp, #0x1c]
    cmp r0, #0x0
    ldrne r0, =data_0211adac
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ldr r0, [sp, #0xbc]
    str r0, [r8, #0x60]
    ldr r0, [sp, #0xc0]
    str r0, [r8, #0x0]
L_0206d140:
    ldr r1, [r8, #0x58]
    ldr r0, [r8, #0x5c]
    ldr r2, [r8, #0x60]
    add r1, r1, r0
    cmp r2, r1
    bhs L_0206d380
L_0206d158:
    ldr r3, [r8, #0x4c]
    ldr r0, [sp, #0x34]
    ldr r10, [r8, #0x44]
    mov r0, r0, lsl r3
    sub r0, r0, #0x1
    and r0, r5, r0
    mov r3, r0, lsl #0x2
    add r0, r10, r0, lsl #0x2
    ldrh r3, [r10, r3]
    ldrh r0, [r0, #0x2]
    strh r3, [sp, #0xe4]
    strh r0, [sp, #0xe6]
    ldrb r0, [sp, #0xe5]
    cmp r4, r0
    bhs L_0206d1b0
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    b L_0206d158
L_0206d1b0:
    ldrh r3, [sp, #0xe6]
    cmp r3, #0x10
    bhs L_0206d208
    cmp r4, r0
    bhs L_0206d1e4
L_0206d1c4:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r1, [r7], #0x1
    add r5, r5, r1, lsl r4
    add r4, r4, #0x8
    cmp r4, r0
    blo L_0206d1c4
L_0206d1e4:
    add r1, r8, r2, lsl #0x1
    mov r5, r5, lsr r0
    sub r4, r4, r0
    add r2, r8, #0x60
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1
    str r0, [r2, #0x0]
    strh r3, [r1, #0x68]
    b L_0206d368
L_0206d208:
    cmp r3, #0x10
    bne L_0206d27c
    add r10, r0, #0x2
    cmp r4, r10
    bhs L_0206d23c
L_0206d21c:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    cmp r4, r10
    blo L_0206d21c
L_0206d23c:
    cmp r2, #0x0
    mov r5, r5, lsr r0
    sub r4, r4, r0
    ldreq r0, =data_0211adc8
    streq r0, [r9, #0x18]
    ldreq r0, [sp, #0x3c]
    streq r0, [r8, #0x0]
    beq L_0206d380
    sub r0, r2, #0x1
    add r0, r8, r0, lsl #0x1
    ldrh r0, [r0, #0x68]
    and r3, r5, #0x3
    add r3, r3, #0x3
    mov r5, r5, lsr #0x2
    sub r4, r4, #0x2
    b L_0206d318
L_0206d27c:
    cmp r3, #0x11
    bne L_0206d2d0
    add r10, r0, #0x3
    cmp r4, r10
    bhs L_0206d2b0
L_0206d290:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    cmp r4, r10
    blo L_0206d290
L_0206d2b0:
    mov r5, r5, lsr r0
    and r3, r5, #0x7
    sub r0, r4, r0
    sub r4, r0, #0x3
    ldr r0, [sp, #0xc4]
    add r3, r3, #0x3
    mov r5, r5, lsr #0x3
    b L_0206d318
L_0206d2d0:
    add r10, r0, #0x7
    cmp r4, r10
    bhs L_0206d2fc
L_0206d2dc:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    cmp r4, r10
    blo L_0206d2dc
L_0206d2fc:
    mov r5, r5, lsr r0
    and r3, r5, #0x7f
    sub r0, r4, r0
    sub r4, r0, #0x7
    ldr r0, [sp, #0xc8]
    add r3, r3, #0xb
    mov r5, r5, lsr #0x7
L_0206d318:
    add r2, r2, r3
    cmp r2, r1
    ldrhi r0, =data_0211adc8
    strhi r0, [r9, #0x18]
    ldrhi r0, [sp, #0x3c]
    strhi r0, [r8, #0x0]
    bhi L_0206d380
    cmp r3, #0x0
    sub r3, r3, #0x1
    beq L_0206d368
L_0206d340:
    add r1, r8, #0x60
    ldr r10, [r1, #0x0]
    ldr r2, [r8, #0x60]
    add r10, r10, #0x1
    add r2, r8, r2, lsl #0x1
    str r10, [r1, #0x0]
    cmp r3, #0x0
    strh r0, [r2, #0x68]
    sub r3, r3, #0x1
    bne L_0206d340
L_0206d368:
    ldr r1, [r8, #0x58]
    ldr r0, [r8, #0x5c]
    ldr r2, [r8, #0x60]
    add r1, r1, r0
    cmp r2, r1
    blo L_0206d158
L_0206d380:
    ldr r0, =0x528
    add r1, r8, #0x4c
    add r0, r8, r0
    str r0, [r8, #0x64]
    ldr r0, [r8, #0x64]
    add r3, r8, #0x64
    str r0, [r8, #0x44]
    ldr r0, [sp, #0x40]
    str r0, [r8, #0x4c]
    str r1, [sp, #0x0]
    add r0, r8, #0x2e8
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x34]
    ldr r2, [r8, #0x58]
    add r1, r8, #0x68
    bl func_0206dfe4
    str r0, [sp, #0x1c]
    cmp r0, #0x0
    ldrne r0, =data_0211ade4
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ldr r0, [r8, #0x64]
    add r1, r8, #0x50
    str r0, [r8, #0x48]
    ldr r0, [sp, #0x68]
    add r3, r8, #0x68
    str r0, [r8, #0x50]
    str r1, [sp, #0x0]
    add r0, r8, #0x2e8
    str r0, [sp, #0x4]
    ldr r1, [r8, #0x58]
    ldr r0, [sp, #0x2c]
    add r1, r3, r1, lsl #0x1
    ldr r2, [r8, #0x5c]
    add r3, r8, #0x64
    bl func_0206dfe4
    str r0, [sp, #0x1c]
    cmp r0, #0x0
    ldrne r0, =data_0211ae00
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ldr r0, [sp, #0x98]
    str r0, [r8, #0x0]
L_0206d43c:
    cmp r6, #0x6
    blo L_0206d49c
    ldr r1, [sp, #0xc]
    ldr r0, =0x102
    cmp r1, r0
    blo L_0206d49c
    mov r0, r1
    str r11, [r9, #0xc]
    str r0, [r9, #0x10]
    str r7, [r9, #0x0]
    str r6, [r9, #0x4]
    str r5, [r8, #0x30]
    ldr r1, [sp, #0x14]
    str r4, [r8, #0x34]
    mov r0, r9
    bl func_0206bfcc
    ldr r0, [r9, #0x10]
    ldr r11, [r9, #0xc]
    str r0, [sp, #0xc]
    ldr r7, [r9, #0x0]
    ldr r6, [r9, #0x4]
    ldr r5, [r8, #0x30]
    ldr r4, [r8, #0x34]
    b L_0206c748
L_0206d49c:
    ldr r1, [r8, #0x4c]
    ldr r0, [sp, #0x34]
    ldr r2, [r8, #0x44]
    mov r0, r0, lsl r1
    sub r0, r0, #0x1
L_0206d4b0:
    and r1, r5, r0
    mov r3, r1, lsl #0x2
    add r1, r2, r1, lsl #0x2
    ldrh r3, [r2, r3]
    ldrh r1, [r1, #0x2]
    strh r3, [sp, #0xf4]
    strh r1, [sp, #0xf6]
    ldrb r10, [sp, #0xf5]
    cmp r4, r10
    bhs L_0206d4f4
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r1, [r7], #0x1
    add r5, r5, r1, lsl r4
    add r4, r4, #0x8
    b L_0206d4b0
L_0206d4f4:
    ldrb r0, [sp, #0xf4]
    cmp r0, #0x0
    beq L_0206d588
    ands r0, r0, #0xf0
    bne L_0206d588
    ldrh r1, [sp, #0xf4]
    ldrh r0, [sp, #0xf6]
    strh r1, [sp, #0xe8]
    strh r0, [sp, #0xea]
    ldrb r1, [sp, #0xe9]
    ldrb r0, [sp, #0xe8]
    ldrh ip, [sp, #0xea]
    add r3, r1, r0
    ldr r0, [sp, #0x34]
    mov r0, r0, lsl r3
    sub r0, r0, #0x1
L_0206d534:
    and r3, r5, r0
    add r10, ip, r3, lsr r1
    mov r3, r10, lsl #0x2
    add r10, r2, r10, lsl #0x2
    ldrh r3, [r2, r3]
    ldrh r10, [r10, #0x2]
    strh r3, [sp, #0xf4]
    strh r10, [sp, #0xf6]
    ldrb r10, [sp, #0xf5]
    add r3, r1, r10
    cmp r4, r3
    bhs L_0206d580
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    b L_0206d534
L_0206d580:
    mov r5, r5, lsr r1
    sub r4, r4, r1
L_0206d588:
    ldrh r0, [sp, #0xf6]
    mov r5, r5, lsr r10
    str r0, [r8, #0x38]
    ldrb r1, [sp, #0xf4]
    sub r4, r4, r10
    cmp r1, #0x0
    ldreq r0, [sp, #0xcc]
    streq r0, [r8, #0x0]
    beq L_0206c748
    ands r0, r1, #0x20
    ldrne r0, [sp, #0x44]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ands r0, r1, #0x40
    ldrne r0, =data_0211ae18
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    and r0, r1, #0xf
    str r0, [r8, #0x40]
    ldr r0, [sp, #0xb8]
    str r0, [r8, #0x0]
L_0206d5e4:
    ldr r1, [r8, #0x40]
    cmp r1, #0x0
    beq L_0206d644
    cmp r4, r1
    bhs L_0206d618
L_0206d5f8:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, r1
    blo L_0206d5f8
L_0206d618:
    ldr r0, [sp, #0x34]
    add r2, r8, #0x38
    mov r0, r0, lsl r1
    sub r0, r0, #0x1
    ldr r1, [r2, #0x0]
    and r0, r5, r0
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldr r0, [r8, #0x40]
    mov r5, r5, lsr r0
    sub r4, r4, r0
L_0206d644:
    ldr r0, [sp, #0xd0]
    str r0, [r8, #0x0]
L_0206d64c:
    ldr r1, [r8, #0x50]
    ldr r0, [sp, #0x34]
    ldr r2, [r8, #0x48]
    mov r0, r0, lsl r1
    sub r0, r0, #0x1
L_0206d660:
    and r1, r5, r0
    mov r3, r1, lsl #0x2
    add r1, r2, r1, lsl #0x2
    ldrh r3, [r2, r3]
    ldrh r1, [r1, #0x2]
    strh r3, [sp, #0xf0]
    strh r1, [sp, #0xf2]
    ldrb r10, [sp, #0xf1]
    cmp r4, r10
    bhs L_0206d6a4
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r1, [r7], #0x1
    add r5, r5, r1, lsl r4
    add r4, r4, #0x8
    b L_0206d660
L_0206d6a4:
    ldrb r0, [sp, #0xf0]
    ands r0, r0, #0xf0
    bne L_0206d790
    ldrh r1, [sp, #0xf0]
    ldrh r0, [sp, #0xf2]
    strh r1, [sp, #0xf8]
    strh r0, [sp, #0xfa]
    ldrb r1, [sp, #0xf9]
    ldrb r0, [sp, #0xf8]
    ldrh ip, [sp, #0xfa]
    add r3, r1, r0
    ldr r0, [sp, #0x34]
    mov r0, r0, lsl r3
    sub r0, r0, #0x1
L_0206d6dc:
    and r3, r5, r0
    add r10, ip, r3, lsr r1
    mov r3, r10, lsl #0x2
    add r10, r2, r10, lsl #0x2
    ldrh r3, [r2, r3]
    ldrh r10, [r10, #0x2]
    strh r3, [sp, #0xf0]
    strh r10, [sp, #0xf2]
    ldrb r10, [sp, #0xf1]
    add r3, r1, r10
    cmp r4, r3
    bhs L_0206d788
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    b L_0206d6dc
L_0206d788:
    mov r5, r5, lsr r1
    sub r4, r4, r1
L_0206d790:
    ldrb r0, [sp, #0xf0]
    mov r5, r5, lsr r10
    ands r0, r0, #0x40
    ldrne r0, =data_0211ae34
    sub r4, r4, r10
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ldrh r0, [sp, #0xf2]
    str r0, [r8, #0x3c]
    ldrb r0, [sp, #0xf0]
    and r0, r0, #0xf
    str r0, [r8, #0x40]
    ldr r0, [sp, #0xd4]
    str r0, [r8, #0x0]
L_0206d7d0:
    ldr r1, [r8, #0x40]
    cmp r1, #0x0
    beq L_0206d830
    cmp r4, r1
    bhs L_0206d804
L_0206d7e4:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, r1
    blo L_0206d7e4
L_0206d804:
    ldr r0, [sp, #0x34]
    add r2, r8, #0x3c
    mov r0, r0, lsl r1
    sub r0, r0, #0x1
    ldr r1, [r2, #0x0]
    and r0, r5, r0
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldr r0, [r8, #0x40]
    mov r5, r5, lsr r0
    sub r4, r4, r0
L_0206d830:
    ldr r2, [r8, #0x24]
    ldr r1, [sp, #0x14]
    ldr r0, [r8, #0x3c]
    add r2, r2, r1
    ldr r1, [sp, #0xc]
    sub r1, r2, r1
    cmp r0, r1
    ldrhi r0, =data_0211ae4c
    strhi r0, [r9, #0x18]
    ldrhi r0, [sp, #0x3c]
    strhi r0, [r8, #0x0]
    bhi L_0206c748
    ldr r0, [sp, #0xd8]
    str r0, [r8, #0x0]
L_0206d868:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0206daf0
    ldr r1, [sp, #0x14]
    sub r1, r1, r0
    ldr r0, [r8, #0x3c]
    cmp r0, r1
    bls L_0206d8c8
    sub r0, r0, r1
    ldr r1, [r8, #0x28]
    cmp r0, r1
    ldrls r2, [r8, #0x2c]
    subls r1, r1, r0
    addls r1, r2, r1
    bls L_0206d8b8
    sub r0, r0, r1
    ldr r1, [r8, #0x20]
    ldr r2, [r8, #0x2c]
    sub r1, r1, r0
    add r1, r2, r1
L_0206d8b8:
    ldr r2, [r8, #0x38]
    cmp r0, r2
    movhi r0, r2
    b L_0206d8d0
L_0206d8c8:
    sub r1, r11, r0
    ldr r0, [r8, #0x38]
L_0206d8d0:
    ldr r2, [sp, #0xc]
    add r3, r8, #0x38
    cmp r0, r2
    movhi r0, r2
    ldr r2, [sp, #0xc]
    sub r2, r2, r0
    str r2, [sp, #0xc]
    ldr r2, [r3, #0x0]
    sub r2, r2, r0
    str r2, [r3, #0x0]
L_0206d8f8:
    ldrb r2, [r1], #0x1
    subs r0, r0, #0x1
    swpb r2, r2, [r11]
    add r11, r11, #0x1
    bne L_0206d8f8
    ldr r0, [r8, #0x38]
    cmp r0, #0x0
    ldreq r0, [sp, #0x98]
    streq r0, [r8, #0x0]
    b L_0206c748
L_0206d920:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_0206daf0
    ldr r1, [r8, #0x38]
    sub r0, r0, #0x1
    str r0, [sp, #0xc]
    swpb r0, r1, [r11]
    add r11, r11, #0x1
    ldr r0, [sp, #0x98]
    str r0, [r8, #0x0]
    b L_0206c748
L_0206d94c:
    ldr r0, [r8, #0x8]
    cmp r0, #0x0
    beq L_0206da44
    cmp r4, #0x20
    bhs L_0206d980
L_0206d960:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_0206d960
L_0206d980:
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0xc]
    add r3, r9, #0x14
    subs r2, r1, r0
    ldr r0, [r3, #0x0]
    add r1, r8, #0x18
    add r0, r0, r2
    str r0, [r3, #0x0]
    ldr r0, [r1, #0x0]
    add r0, r0, r2
    str r0, [r1, #0x0]
    beq L_0206d9e4
    ldr r0, [r8, #0x10]
    cmp r0, #0x0
    beq L_0206d9cc
    ldr r0, [r8, #0x14]
    sub r1, r11, r2
    bl func_0206bc94
    b L_0206d9d8
L_0206d9cc:
    ldr r0, [r8, #0x14]
    sub r1, r11, r2
    bl func_0206bb20
L_0206d9d8:
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    str r0, [r9, #0x30]
L_0206d9e4:
    ldr r0, [sp, #0xc]
    str r0, [sp, #0x14]
    ldr r0, [r8, #0x10]
    cmp r0, #0x0
    movne r1, r5
    bne L_0206da20
    and r1, r5, #0xff
    and r0, r5, #0xff00
    mov r2, r5, lsr #0x18
    and r3, r2, #0xff
    mov r2, r5, lsr #0x8
    and r2, r2, #0xff00
    add r2, r3, r2
    add r0, r2, r0, lsl #0x8
    add r1, r0, r1, lsl #0x18
L_0206da20:
    ldr r0, [r8, #0x14]
    cmp r0, r1
    ldrne r0, =data_0211ae6c
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    ldr r5, [sp, #0xdc]
    mov r4, r5
L_0206da44:
    ldr r0, [sp, #0xe0]
    str r0, [r8, #0x0]
L_0206da4c:
    ldr r0, [r8, #0x8]
    cmp r0, #0x0
    beq L_0206dab0
    ldr r0, [r8, #0x10]
    cmp r0, #0x0
    beq L_0206dab0
    cmp r4, #0x20
    bhs L_0206da8c
L_0206da6c:
    cmp r6, #0x0
    beq L_0206daf0
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_0206da6c
L_0206da8c:
    ldr r0, [r8, #0x18]
    cmp r5, r0
    ldrne r0, =data_0211ae84
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_0206c748
    mov r5, #0x0
    mov r4, r5
L_0206dab0:
    mov r0, #0x1a
    str r0, [r8, #0x0]
L_0206dab8:
    mov r0, #0x1
    str r0, [sp, #0x1c]
    b L_0206daf0
L_0206dac4:
    mvn r0, #0x2
    str r0, [sp, #0x1c]
    b L_0206daf0
L_0206dad0:
    add sp, sp, #0xfc
    mvn r0, #0x3
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0206dae0:
    add sp, sp, #0xfc
    mvn r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0206daf0:
    ldr r0, [sp, #0xc]
    str r11, [r9, #0xc]
    str r0, [r9, #0x10]
    str r7, [r9, #0x0]
    str r6, [r9, #0x4]
    str r5, [r8, #0x30]
    str r4, [r8, #0x34]
    ldr r0, [r8, #0x20]
    cmp r0, #0x0
    bne L_0206db34
    ldr r0, [r8, #0x0]
    cmp r0, #0x18
    bge L_0206db5c
    ldr r1, [r9, #0x10]
    ldr r0, [sp, #0x14]
    cmp r0, r1
    beq L_0206db5c
L_0206db34:
    ldr r1, [sp, #0x14]
    mov r0, r9
    bl func_0206dc90
    cmp r0, #0x0
    movne r0, #0x1c
    strne r0, [r8, #0x0]
    addne sp, sp, #0xfc
    mvnne r0, #0x3
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_0206db5c:
    add r2, r9, #0x8
    ldr r4, [r9, #0x4]
    ldr r0, [sp, #0x10]
    ldr r1, [r2, #0x0]
    sub r0, r0, r4
    str r0, [sp, #0x10]
    ldr r3, [r9, #0x10]
    add r0, r1, r0
    str r0, [r2, #0x0]
    add r2, r9, #0x14
    ldr r0, [sp, #0x14]
    ldr r1, [r2, #0x0]
    sub r0, r0, r3
    str r0, [sp, #0x14]
    add r0, r1, r0
    str r0, [r2, #0x0]
    add r2, r8, #0x18
    ldr r1, [r2, #0x0]
    ldr r0, [sp, #0x14]
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldr r0, [r8, #0x8]
    cmp r0, #0x0
    beq L_0206dc14
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_0206dc14
    ldr r0, [r8, #0x10]
    cmp r0, #0x0
    beq L_0206dbf0
    ldr r2, [sp, #0x14]
    ldr r3, [r9, #0xc]
    mov r1, r2
    ldr r0, [r8, #0x14]
    sub r1, r3, r1
    bl func_0206bc94
    b L_0206dc08
L_0206dbf0:
    ldr r2, [sp, #0x14]
    ldr r3, [r9, #0xc]
    mov r1, r2
    ldr r0, [r8, #0x14]
    sub r1, r3, r1
    bl func_0206bb20
L_0206dc08:
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    str r0, [r9, #0x30]
L_0206dc14:
    ldr r0, [r8, #0x0]
    ldr r1, [r8, #0x34]
    cmp r0, #0xb
    moveq r2, #0x80
    ldr r0, [r8, #0x4]
    movne r2, #0x0
    cmp r0, #0x0
    movne r3, #0x40
    ldr r0, [sp, #0x10]
    moveq r3, #0x0
    cmp r0, #0x0
    add r0, r1, r3
    add r0, r0, r2
    str r0, [r9, #0x2c]
    bne L_0206dc5c
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_0206dc68
L_0206dc5c:
    ldr r0, [sp, #0x8]
    cmp r0, #0x4
    bne L_0206dc78
L_0206dc68:
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    mvneq r0, #0x4
    streq r0, [sp, #0x1c]
L_0206dc78:
    ldr r0, [sp, #0x1c]
    add sp, sp, #0xfc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
