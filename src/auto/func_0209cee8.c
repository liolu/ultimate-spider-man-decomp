/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_0209b1f8(u32 chBitMask, int volume, int shift);
extern s32 func_0209bdd4(int volume);
typedef struct UnkSleepCallbackInfo {
    void (*func)(void *);
    void *arg;
    struct UnkSleepCallbackInfo *next;
} UnkSleepCallbackInfo;
typedef void (*UnkStrmCallback)(int status, int chNum, void **buffer, u32 len, int format, void *arg);
typedef struct UnkSndStrm {
    UnkLink link;
    UnkSleepCallbackInfo preSleepInfo;
    UnkSleepCallbackInfo postSleepInfo;
    int format;
    BOOL active : 1;
    BOOL started : 1;
    u32 bufSize;
    int interval;
    UnkStrmCallback callback;
    void *arg;
    int curBlock;
    int volume;
    int alarmNo;
    u32 chBitMask;
    int chNum;
    u8 chNo[16];
} UnkSndStrm;
typedef struct UnkSndStrmChannel {
    u8 *bufAddr;
    int volume;
} UnkSndStrmChannel;
extern UnkSndStrmChannel data_02155044[16];

/* func_02073f14 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_stream.c (license: none),
 * reused by tools/donor_match.py */
void func_0209cee8(UnkSndStrm *strm, int volume) {
    int chNo;
    int i;

    strm->volume = volume;

    for (i = 0; i < strm->chNum; i++) {
        s32 vol;
        chNo = strm->chNo[i];
        vol  = func_0209bdd4(strm->volume + data_02155044[chNo].volume);

        func_0209b1f8(1 << chNo, vol & 0xFF, vol >> 8);
    }
}
