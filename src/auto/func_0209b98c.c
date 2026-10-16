/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_0209560c(void);
extern u32 func_02095620(u32 state);
extern void func_0209567c(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_0209b98c(u32 flags);
extern u32 func_0209bd38(void);
extern u32 data_02152ae0;
extern UnkSndCommand *data_02152aec;
extern UnkSndCommand *data_02152adc;
extern s32 data_02152af0;
extern s32 data_02152af8;
extern UnkSndCommand *data_02152b00[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_0209b98c(u32 flags) {
    u32 enabled = func_0209560c();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_02152ae0 == func_0209bd38()) {
            func_02095620(enabled);
            func_0209567c(100);
            enabled = func_0209560c();
        }
    } else if (data_02152ae0 == func_0209bd38()) {
        func_02095620(enabled);
        return 0;
    }

    head = data_02152b00[data_02152af0];
    data_02152af0++;
    if (data_02152af0 > 8) {
        data_02152af0 = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_02152aec != 0) {
        data_02152aec->next = head;
    } else {
        data_02152adc = head;
    }
    data_02152aec = tail;
    data_02152af8--;
    data_02152ae0++;

    func_02095620(enabled);
    return head;
}
