// rea decompile_all
// name: FUN_00543148
// address: 0x543148
// body: available
// range: 0x543148-0x5431e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x543172 (push 0x5431e7 followed by fs-segment stack chaining); handler 0x5431e7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00543148(int param_1,short param_2,undefined2 param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x543167;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_005431e7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00408194(param_4,local_8);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar4) {
    iVar2 = 1;
    do {
      if (*(short *)(*param_4 + -2 + iVar2 * 2) == param_2) {
        iVar3 = thunk_FUN_00408c9c(param_4);
        *(undefined2 *)(iVar3 + -2 + iVar2 * 2) = param_3;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005431ee;
  puStack_20 = (undefined1 *)0x5431e6;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
