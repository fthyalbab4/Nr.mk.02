// rea decompile_all
// name: FUN_0042b61c
// address: 0x42b61c
// body: available
// range: 0x42b61c-0x42b6c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42b63b (push 0x42b6de followed by fs-segment stack chaining); handler 0x42b6de lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42b657 (push 0x42b6c1 followed by fs-segment stack chaining); handler 0x42b6c1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b61c(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined1 local_d;
  int *local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_0042b6de;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_d = 0;
  local_c = param_2;
  local_8 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef3c);
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  iVar3 = FUN_00409c3c(DAT_0068ef38);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar4 = 0;
    do {
      puVar1 = *(undefined4 **)(DAT_0068ef38 + iVar4 * 4);
      if ((puVar1 != (undefined4 *)0x0) && (puVar1 != DAT_0067ce98)) {
        FUN_00405eb4(*puVar1,&local_14);
        cVar2 = FUN_00415880(local_14,local_8);
        if (cVar2 != '\0') {
          *local_c = (int)puVar1;
          local_d = 1;
          break;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = uStackY_38;
  uStackY_38 = 0x42b6c0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef3c);
  return;
}
