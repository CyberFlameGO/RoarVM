/* Automatically generated by
	CCodeGeneratorGlobalStructure VMMaker-oscog.29 uuid: c043454b-2bd2-4f79-8308-9c6c82ecf645
 */


/*** Function Prototypes ***/
sqInt addressCouldBeObj(sqInt address);
sqInt addressCouldBeOop(sqInt address);
usqInt argumentCountAddress(void);
sqInt argumentCountOfMethodHeader(sqInt header);
sqInt argumentCountOf(sqInt methodPointer);
void assertValidMachineCodeFrame(sqInt instrPtr);
void beRootIfOld(sqInt oop);
void callForCogCompiledCodeCompaction(void);
sqInt canContextSwitchIfActivating(sqInt methodHeader);
void ceActivateFailingPrimitiveMethod(sqInt aPrimitiveMethod);
sqInt ceBaseFrameReturn(sqInt returnValue);
sqInt ceCannotResume(void);
void ceCheckForInterrupts(void);
void ceCheckProfileTick(void);
sqInt ceContextinstVar(sqInt maybeContext, sqInt slotIndex);
void ceContextinstVarvalue(sqInt maybeMarriedContext, sqInt slotIndex, sqInt anOop);
sqInt ceInterpretMethodFromPICreceiver(sqInt aMethodObj, sqInt rcvr);
void ceMNUFromPICMNUMethodreceiver(sqInt aMethodObj, sqInt rcvr);
sqInt ceNewArraySlotSize(sqInt slotSize);
sqInt ceNonLocalReturn(sqInt returnValue);
sqInt cePositive32BitIntegerFor(usqInt anInteger);
sqInt cePushActiveContext(void);
sqInt ceReturnToInterpreter(sqInt anOop);
sqInt ceSendFromInLineCacheMiss(CogMethod *oPIC);
sqInt ceSendMustBeBoolean(sqInt anObject);
sqInt ceSendsupertonumArgs(sqInt selector, sqInt superNormalBar, sqInt rcvr, sqInt numArgs);
void ceStackOverflow(sqInt contextSwitchIfNotNil);
void ceStoreCheck(sqInt anOop);
void ceTraceBlockActivation(void);
void ceTraceLinkedSend(sqInt theReceiver);
void ceTraceStoreOfinto(sqInt aValue, sqInt anObject);
sqInt characterTable(void);
void checkAssertsEnabledInCoInterpreter(void);
sqInt classArray(void);
sqInt classFieldOffset(void);
sqInt classFloat(void);
sqInt classFloatCompactIndex(void);
sqInt classHeader(sqInt oop);
sqInt classSmallInteger(void);
void clearTraceLog(void);
CogMethod * cogMethodOf(sqInt aMethodOop);
sqInt compactClassFieldLSB(void);
sqInt compactClassFieldWidth(void);
sqInt compactClassIndexOfHeader(sqInt header);
sqInt compactClassIndexOf(sqInt oop);
sqInt compactClassTable(void);
sqInt createClosureNumArgsnumCopiedstartpc(sqInt numArgs, sqInt numCopied, sqInt initialIP);
sqInt doSignalSemaphoreWithIndex(sqInt index);
void dumpPrimTraceLog(void);
void dumpTraceLog(void);
extern void error(char *s);
void executeCogMethodFromLinkedSendwithReceiver(CogMethod *cogMethod, sqInt rcvr);
void executeCogMethodFromLinkedSendwithReceiverandCacheTag(CogMethod *cogMethod, sqInt rcvr, sqInt cacheTag);
sqInt failed(void);
sqInt falseObject(void);
sqInt fetchByteofObject(sqInt byteIndex, sqInt oop);
void findString(char *aCString);
sqInt formatOfClass(sqInt classPointer);
usqInt framePointerAddress(void);
usqInt freeStartAddress(void);
void (*functionPointerForCompiledMethodprimitiveIndex(sqInt methodObj, sqInt primIndex))(void) ;
void (*functionPointerForinClass(sqInt primIdx,sqInt theClass))(void) ;
usqLong getNextWakeupUsecs(void);
void ifValidWriteBackStackPointers(void *theCFP, void *theCSP);
sqInt instanceSizeOf(sqInt classObj);
sqInt instantiateClassindexableSize(sqInt classPointer, sqInt size);
usqInt instructionPointerAddress(void);
sqInt isMarked(sqInt oop);
sqInt isNonIntegerObject(sqInt objectPointer);
sqInt isQuickPrimitiveIndex(sqInt anInteger);
sqInt isReallyYoungObject(sqInt obj);
sqInt isYoung(sqInt oop);
sqInt isKindOfClass(sqInt oop, sqInt aClass);
sqInt lastPointerOf(sqInt oop);
sqInt leakCheckBecome(void);
sqInt leakCheckFullGC(void);
sqInt leakCheckIncrementalGC(void);
sqInt lengthOf(sqInt oop);
sqInt literalCountOfHeader(sqInt headerPointer);
sqInt literalofMethod(sqInt offset, sqInt methodPointer);
sqInt lookupreceiver(sqInt selector, sqInt rcvr);
void markActiveMethodsAndReferents(void);
void markAndTrace(sqInt oop);
void maybeFlagMethodAsInterpreted(sqInt aMethod);
void * methodCacheAddress(void);
sqInt methodHasCogMethod(sqInt aMethodOop);
sqInt methodPrimitiveIndex(void);
sqInt methodShouldBeCogged(sqInt aMethodObj);
sqInt methodwithInitialPCHasErrorCode(sqInt methodObj, sqInt initialPC);
usqInt newMethodAddress(void);
usqInt nextProfileTickAddress(void);
sqInt nilObject(void);
sqInt nullHeaderForMachineCodeMethod(void);
sqInt objectAfter(sqInt oop);
sqInt objectIsOld(sqInt anObject);
sqInt popRemappableOop(void);
sqInt popStack(void);
sqInt primErrTable(void);
usqInt primFailCodeAddress(void);
void primitiveClosureValueNoContextSwitch(void);
sqInt primitiveErrorTable(void);
sqInt primitiveFailFor(sqInt reasonCode);
sqInt primitiveFailureCode(void);
usqInt primitiveFunctionPointerAddress(void);
sqInt primitiveIndexOfMethodHeader(sqInt methodHeader);
sqInt primitiveIndexOf(sqInt methodPointer);
sqInt primitivePropertyFlags(sqInt primIndex);
void * primTraceLogAddress(void);
usqInt primTraceLogIndexAddress(void);
void printAllStacks(void);
void printCallStackOfContext(sqInt aContext);
void printChar(sqInt aByte);
void printCogMethod(CogMethod *cogMethod);
void printHex(sqInt n);
void printMethodReferencesTo(sqInt anOop);
void printReferencesTo(sqInt anOop);
void print(char *s);
void pushRemappableOop(sqInt oop);
sqInt quickPrimitiveConstantFor(sqInt aQuickPrimitiveIndex);
int (*quickPrimitiveGeneratorFor(sqInt aQuickPrimitiveIndex))(void) ;
sqInt quickPrimitiveInstVarIndexFor(sqInt primIndex);
sqInt rawHeaderOf(sqInt methodPointer);
void rawHeaderOfput(sqInt methodOop, void *cogMethod);
sqInt remap(sqInt oop);
usqInt scavengeThresholdAddress(void);
void scheduleIncrementalGC(void);
void setBreakSelector(char *aString);
void setNextWakeupUsecs(usqLong value);
sqInt specialSelectorNumArgs(sqInt index);
sqInt specialSelector(sqInt index);
usqInt stackLimitAddress(void);
usqInt stackPointerAddress(void);
sqInt stackTop(void);
sqInt stackValue(sqInt offset);
sqInt startOfMemory(void);
sqInt startPCOfMethodHeader(sqInt aCompiledMethodHeader);
sqInt startPCOfMethod(sqInt aCompiledMethod);
sqInt storePointerUncheckedofObjectwithValue(sqInt fieldIndex, sqInt oop, sqInt valuePointer);
sqInt stringForCString(const char *aCString);
sqInt tempCountOfMethodHeader(sqInt header);
sqInt tempCountOf(sqInt methodPointer);
void tenuringIncrementalGC(void);
sqInt topRemappableOop(void);
sqInt trueObject(void);
void updateStackZoneReferencesToCompiledCodePreCompaction(void);
extern void warning(char *s);
usqInt youngStartAddress(void);


/*** Global Variables ***/
extern char * breakSelector;
extern sqInt breakSelectorLength ;
extern sqInt checkForLeaks;
extern sqInt deferDisplayUpdates;
extern sqInt desiredCogCodeSize;
extern sqInt desiredEdenBytes;
extern sqInt desiredNumStackPages;
extern sqInt extraVMMemory;
extern struct VirtualMachine* interpreterProxy;
extern sqInt maxLiteralCountForCompile ;
extern void * showSurfaceFn;
extern sqInt suppressHeartbeatFlag;


/*** Macros ***/
#define compilationBreakpoint(sel, len) do { \
	if ((len) == breakSelectorLength \
	 && !strncmp((char *)(sel), breakSelector, breakSelectorLength)) { \
		suppressHeartbeatFlag = 1; \
		warning("compilation send break (heartbeat suppressed)"); \
	} \
} while (0)

