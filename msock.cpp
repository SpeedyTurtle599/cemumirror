/* Generated by Nim Compiler v1.6.10 */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
struct tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ;
struct NimStringDesc;
struct TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc : public TGenericSeq {
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray__nHXaesL0DJZHyVS07ARPRA[1];
typedef NU8 tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg;
typedef NU8 tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg;
typedef NIM_CHAR tyArray__QQGLPNVVwLhYjkngqAxXQQ[4001];
struct tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ {
NI fd;
NIM_BOOL isBuffered;
tyArray__QQGLPNVVwLhYjkngqAxXQQ buffer;
NI currPos;
NI bufLen;
NI32 lastError;
tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain;
tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType;
tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol;
};
typedef NU8 tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg;
extern "C" N_LIB_PRIVATE N_NIMCALL(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ*, makeSocket)(NimStringDesc* ip, NI port);
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ*, newSocket__pureZnet_198)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol, NIM_BOOL buffered, NIM_BOOL inheritable);
N_LIB_PRIVATE N_NIMCALL(void, connect__pureZnet_1107)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* socket_0, NimStringDesc* address, NU16 port);
extern "C" N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, recv)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* sock, NI size);
static N_INLINE(NimStringDesc*, recv__pureZnet_660)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* socket_0, NI size, NI timeout, tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg flags);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(NI, recv__pureZnet_652)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* socket_0, NimStringDesc*& data, NI size, NI timeout, tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg flags);
extern "C" N_LIB_PRIVATE N_NIMCALL(void, send)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* sock, NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(void, send__pureZnet_754)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* socket_0, NimStringDesc* data, tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg flags);
extern "C" N_LIB_PRIVATE N_NIMCALL(void, close)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* sock);
N_LIB_PRIVATE N_NIMCALL(void, close__pureZnet_505)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* socket_0, tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg flags);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_LIB_PRIVATE N_NOINLINE(void, nimGC_setStackBottom)(void* theStackBottom);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystematsiodotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystematsiodotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystemdotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystemdotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatswindowsatswinleandotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatswindowsatswinleandotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatstimesdotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatstimesdotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsosdotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsosdotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsnativesocketsdotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsnativesocketsdotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatsstdatsmonotimesdotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsnetdotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
STRING_LITERAL(TM__jX4F7m7vnVMCP9aFdJ0yDdw_3, "Making socket...", 16);
static NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA TM__jX4F7m7vnVMCP9aFdJ0yDdw_2 = {((NimStringDesc*) &TM__jX4F7m7vnVMCP9aFdJ0yDdw_3)}
;
STRING_LITERAL(TM__jX4F7m7vnVMCP9aFdJ0yDdw_5, "Connecting to server...", 23);
static NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA TM__jX4F7m7vnVMCP9aFdJ0yDdw_4 = {((NimStringDesc*) &TM__jX4F7m7vnVMCP9aFdJ0yDdw_5)}
;
STRING_LITERAL(TM__jX4F7m7vnVMCP9aFdJ0yDdw_7, "Connected!", 10);
static NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA TM__jX4F7m7vnVMCP9aFdJ0yDdw_6 = {((NimStringDesc*) &TM__jX4F7m7vnVMCP9aFdJ0yDdw_7)}
;
STRING_LITERAL(TM__jX4F7m7vnVMCP9aFdJ0yDdw_9, "Receiving data.", 15);
static NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA TM__jX4F7m7vnVMCP9aFdJ0yDdw_8 = {((NimStringDesc*) &TM__jX4F7m7vnVMCP9aFdJ0yDdw_9)}
;
STRING_LITERAL(TM__jX4F7m7vnVMCP9aFdJ0yDdw_11, "Sending data.", 13);
static NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA TM__jX4F7m7vnVMCP9aFdJ0yDdw_10 = {((NimStringDesc*) &TM__jX4F7m7vnVMCP9aFdJ0yDdw_11)}
;
STRING_LITERAL(TM__jX4F7m7vnVMCP9aFdJ0yDdw_13, "Closing socket.", 15);
static NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA TM__jX4F7m7vnVMCP9aFdJ0yDdw_12 = {((NimStringDesc*) &TM__jX4F7m7vnVMCP9aFdJ0yDdw_13)}
;
N_LIB_PRIVATE N_NIMCALL(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ*, makeSocket)(NimStringDesc* ip, NI port) {
	tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* result;
{	result = NIM_NIL;
	echoBinSafe(TM__jX4F7m7vnVMCP9aFdJ0yDdw_2, 1);
	tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* T1_ = newSocket__pureZnet_198(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 2), ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 1), ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6), NIM_TRUE, NIM_FALSE);
	tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* socket_1 = T1_;
	echoBinSafe(TM__jX4F7m7vnVMCP9aFdJ0yDdw_4, 1);
	connect__pureZnet_1107(socket_1, ip, ((NU16) (port)));
	echoBinSafe(TM__jX4F7m7vnVMCP9aFdJ0yDdw_6, 1);
	result = socket_1;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NimStringDesc*, recv__pureZnet_660)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* socket_0, NI size, NI timeout, tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg flags) {
	NimStringDesc* result;
	result = NIM_NIL;
	if ((size) < ((NI) 0) || (size) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(size, ((NI) 0), ((NI) IL64(9223372036854775807))); }
	result = mnewString(((NI) (size)));
	NI T1_ = recv__pureZnet_652(socket_0, result, size, timeout, flags);
	(void)(T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, recv)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* sock, NI size) {
	NimStringDesc* result;
{	result = NIM_NIL;
	echoBinSafe(TM__jX4F7m7vnVMCP9aFdJ0yDdw_8, 1);
	result = recv__pureZnet_660(sock, size, ((NI) -1), 2);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, send)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* sock, NimStringDesc* data) {
	echoBinSafe(TM__jX4F7m7vnVMCP9aFdJ0yDdw_10, 1);
	send__pureZnet_754(sock, data, 2);
}
N_LIB_PRIVATE N_NIMCALL(void, close)(tyObject_SocketImpl__aIhANOOoETolVz9cccNO9cRQ* sock) {
	echoBinSafe(TM__jX4F7m7vnVMCP9aFdJ0yDdw_12, 1);
	close__pureZnet_505(sock, 2);
}
static N_INLINE(void, initStackBottomWith)(void* locals) {
	nimGC_setStackBottom(locals);
}

N_LIB_PRIVATE void PreMainInner(void) {
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystematsiodotnim_Init000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatswindowsatswinleandotnim_Init000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatstimesdotnim_Init000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsosdotnim_Init000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsnativesocketsdotnim_Init000();
}

N_LIB_PRIVATE int cmdCount;
N_LIB_PRIVATE char** cmdLine;
N_LIB_PRIVATE char** gEnv;
N_LIB_PRIVATE void PreMain(void) {
	void (*volatile inner)(void);
	inner = PreMainInner;
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystematsiodotnim_DatInit000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystemdotnim_DatInit000();
	initStackBottomWith((void *)&inner);
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystemdotnim_Init000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatswindowsatswinleandotnim_DatInit000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatstimesdotnim_DatInit000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsosdotnim_DatInit000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsnativesocketsdotnim_DatInit000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatsstdatsmonotimesdotnim_DatInit000();
	atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsnetdotnim_DatInit000();
	(*inner)();
}

N_LIB_PRIVATE N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{
}
}

