
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 unk0[5];
    u8 flag : 1;
} UnkStruct;

/* func_02012500 from projets/rayman-rr/src/auto/func_02012500.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
u32 func_0208e19c(void) {
    UnkStruct *p = (UnkStruct *) 0x027FFC30;
    return p->flag;
}
