// rea decompile_all
// name: FUN_0055f540
// address: 0x55f540
// body: available
// range: 0x55f540-0x55f5e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55f56d (push 0x55f5ea followed by fs-segment stack chaining); handler 0x55f5ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055f540(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_34;
  int local_c;

  iVar2 = FUN_004399ac(param_1);
  uStackY_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_34;
  local_c = param_2;
  if ((*(char *)(param_1 + 0x28) != '\0') &&
     (DVar3 = GetCurrentThreadId(), DVar3 == *(DWORD *)PTR_DAT_00689680)) {
    local_c = *(int *)(param_1 + 0x24);
  }
  iVar5 = *(int *)(iVar2 + 8);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      iVar4 = FUN_00438ec4(iVar2,iVar6);
      if ((*(int *)(iVar4 + 0x14) == local_c) &&
         (cVar1 = FUN_004061f8(iVar4,param_3), cVar1 != '\0')) break;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uStackY_34;
  uStackY_34 = 0x55f5e9;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}
