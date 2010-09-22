/* Automatically generated by
	CCodeGenerator VMMaker-oscog.32 uuid: 610266ce-1a35-4d42-8ff9-b30ed3736b19
 */


/*** Function Prototypes ***/
sqInt abortOffset(void);
void addCogMethodsToHeapMap(void);
sqInt bytecodePCForstartBcpcin(sqInt mcpc, sqInt startbcpc, CogBlockMethod *cogMethod);
sqInt canLinkToYoungClasses(void);
sqInt canMapBytecodePCsToNativePCs(void);
extern void (*ceCaptureCStackPointers)();
sqInt ceCPICMissreceiver(CogMethod *cPIC, sqInt receiver);
extern void (*ceEnterCogCodePopReceiverAndClassRegs)();
extern void (*ceEnterCogCodePopReceiverReg)();
sqInt ceSICMiss(sqInt receiver);
void checkAssertsEnabledInCogit(void);
sqInt checkIntegrityOfObjectReferencesInCode(sqInt fullGCFlag);
char * codeEntryFor(char *address);
char * codeEntryNameFor(char *address);
sqInt cogCodeBase(void);
sqInt cogCodeConstituents(void);
CogMethod * cogHomeMethod(CogBlockMethod *aCogMethod);
void cogitPostGCAction(void);
CogMethod * cogselector(sqInt aMethodObj, sqInt aSelectorOop);
void compactCogCompiledCode(void);
void enterCogCodePopReceiver(void);
void enterCogCodePopReceiverAndClassRegs(void);
CogBlockMethod * findEnclosingMethodForinHomeMethod(sqInt mcpc, CogMethod *cogMethod);
CogBlockMethod * findMethodForStartBcpcinHomeMethod(sqInt startbcpc, CogMethod *cogMethod);
sqInt genQuickReturnConst(void);
sqInt genQuickReturnInstVar(void);
sqInt genQuickReturnSelf(void);
void initializeCodeZoneFromupTo(sqInt startAddress, sqInt endAddress);
sqInt interpretOffset(void);
sqInt isSendReturnPC(sqInt retpc);
void linkSendAtintocheckedreceiver(sqInt callSiteReturnAddress, CogMethod *sendingMethod, CogMethod *targetMethod, sqInt checked, sqInt receiver);
sqInt mapAtmethodObjstartmcpcbcpcperformUntilarg(sqInt mapStart, sqInt aMethodObj, sqInt startmcpc, sqInt startbcpc, sqInt (*functionSymbol)(char annotation, char *mcpc, sqInt bcpc, sqInt numBytes, void *arg), void *arg);
void mapObjectReferencesInMachineCode(sqInt inFullGC);
void markAndTraceObjectsOrFreeMachineCode(sqInt inFullGC);
void markMethodAndReferents(CogBlockMethod *aCogMethod);
usqInt maxCogMethodAddress(void);
CogMethod * methodFor(void *address);
sqInt minCogMethodAddress(void);
sqInt mnuOffset(void);
sqInt patchToOpenPICFornumArgsreceiver(sqInt selector, sqInt numArgs, sqInt receiver);
sqInt pcisWithinMethod(char *address, CogMethod *cogMethod);
void printCogMethodFor(void *address);
void printCogMethods(void);
void printCogMethodsOfType(sqInt cmType);
void printCogMethodsWithSelector(sqInt selectorOop);
sqInt printOnTrace(void);
void printTrampolineTable(void);
void recordCallOffsetInof(CogMethod *cogMethod, void *callLabelArg);
sqInt recordPrimTraceFunc(void);
void rewritePrimInvocationInto(CogMethod *cogMethod, void (*primFunctionPointer)(void));
void setBreakMethod(sqInt anObj);
void setPostCompileHook(void (*aFunction)(CogMethod *, void *));
void setSelectorOfto(CogMethod *cogMethod, sqInt aSelectorOop);
sqInt stackPageHeadroomBytes(void);
sqInt traceLinkedSendOffset(void);
void unlinkAllSends(void);
void unlinkSendsOf(sqInt selector);
void unlinkSendsToFree(void);
void unlinkSendsTo(CogMethod *targetMethod);
void voidCogCompiledCode(void);


/*** Global Variables ***/
extern sqInt blockNoContextSwitchOffset;
extern sqInt breakPC;
extern void * CFramePointer;
extern void * CStackPointer;
extern sqInt ceBaseFrameReturnTrampoline;
extern sqInt ceCannotResumeTrampoline;
extern void (*ceCaptureCStackPointers)(void);
extern sqInt ceCheckForInterruptTrampoline;
extern void (*ceEnterCogCodePopReceiverAndClassRegs)(void);
extern void (*ceEnterCogCodePopReceiverReg)(void);
extern unsigned long (*ceGetSP)(void);
extern sqInt ceReturnToInterpreterTrampoline;
extern unsigned long (*ceTryLockVMOwner)(void);
extern void (*ceUnlockVMOwner)(void);
extern sqInt cFramePointerInUse;
extern sqInt cmEntryOffset;
extern sqInt cmNoCheckEntryOffset;
extern unsigned long debugPrimCallStackOffset;
extern void * EnilopmartCFP;
extern void * EnilopmartCSP;
extern void (*realCEEnterCogCodePopReceiverAndClassRegs)(void);
extern void (*realCEEnterCogCodePopReceiverReg)(void);
extern int traceLinkedSends ;
extern sqInt traceStores;


/*** Macros ***/
#define ceBaseFrameReturnPC() ceBaseFrameReturnTrampoline
#define ceCannotResumePC() ((usqInt)ceCannotResumeTrampoline)
#define ceReturnToInterpreterPC() ((usqInt)ceReturnToInterpreterTrampoline)
#define cFramePointerInUse() cFramePointerInUse
#define entryOffset() cmEntryOffset
#define getCFramePointer() CFramePointer
#define getCStackPointer() CStackPointer
#define noCheckEntryOffset() cmNoCheckEntryOffset
#define noContextSwitchBlockEntryOffset() blockNoContextSwitchOffset
#define recordEventTrace() (traceLinkedSends & 4)
#define recordPrimTrace() (traceLinkedSends & 2)
#define recordSendTrace() (traceLinkedSends & 1)
#define setCFramePointer(theFP) (CFramePointer = theFP)
#define setCStackPointer(theSP) (CStackPointer = theSP)
#define tryLockVMOwner() ceTryLockVMOwner()
#define unlockVMOwner() ceUnlockVMOwner()

