// rea decompile_all
// name: FUN_00406720
// address: 0x406720
// body: available
// range: 0x406720-0x406823 inclusive
// range: 0x406844-0x406849 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00406720(void)

{
  int iVar1;
  ULONG_PTR UVar2;
  LONG LVar3;
  PEXCEPTION_RECORD pEVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  PVOID pvVar7;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  PEXCEPTION_RECORD in_stack_00000004;
  PCONTEXT in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStackY_34;
  PCONTEXT pCStackY_30;
  undefined4 uStackY_2c;
  PEXCEPTION_RECORD pEStackY_28;
  undefined4 uStackY_24;
  PVOID pvStackY_20;
  ULONG_PTR UStackY_1c;
  PEXCEPTION_RECORD pEStackY_18;
  undefined4 uStackY_14;

  if ((in_stack_00000004->ExceptionFlags & 6) != 0) {
    return 1;
  }
  UVar2 = in_stack_00000004->ExceptionInformation[1];
  pvVar7 = (PVOID)in_stack_00000004->ExceptionInformation[0];
  if (in_stack_00000004->ExceptionCode != 0xeedfade) {
    FUN_00405e90();
    if (DAT_0068a010 == (code *)0x0) {
      return 1;
    }
    UVar2 = (*DAT_0068a010)();
    if (UVar2 == 0) {
      return 1;
    }
    if (((in_stack_00000004->ExceptionCode != 0xeefface) &&
        (UVar2 = FUN_00406638(UVar2,in_stack_0000000c), (byte)PTR_FUN_0067c02c != 0)) &&
       ((char)PTR_FUN_0067c028 == '\0')) {
      LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004);
      if (LVar3 == 0) {
        return 1;
      }
      pvVar7 = in_stack_00000004->ExceptionAddress;
      pEVar4 = in_stack_00000004;
      goto LAB_004067d4;
    }
    pvVar7 = in_stack_00000004->ExceptionAddress;
  }
  pEVar4 = in_stack_00000004;
  if ((1 < (byte)PTR_FUN_0067c02c) && ((char)PTR_FUN_0067c028 == '\0')) {
    uStackY_14 = 0x4067cc;
    LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004);
    if (LVar3 == 0) {
      return 1;
    }
  }
LAB_004067d4:
  pEVar4->ExceptionFlags = pEVar4->ExceptionFlags | 2;
  uStackY_14 = *in_FS_OFFSET;
  uStackY_24 = 0;
  uStackY_2c = 0x4067f8;
  pCStackY_30 = in_stack_00000008;
  uStackY_34 = 0x4067f8;
  pEStackY_28 = pEVar4;
  pvStackY_20 = pvVar7;
  UStackY_1c = UVar2;
  pEStackY_18 = pEVar4;
  (*DAT_0068a018)();
  uStackY_34 = 0x406801;
  puVar5 = (undefined4 *)FUN_0040bfac();
  uStackY_34 = *puVar5;
  *puVar5 = &uStackY_34;
  iVar1 = *(int *)(unaff_ESI + 4);
  *(undefined1 **)(unaff_ESI + 4) = &LAB_00406824;
  FUN_00406688();
                    /* WARNING: Could not recover jumptable at 0x00406822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(iVar1 + 5))();
  return uVar6;
}
