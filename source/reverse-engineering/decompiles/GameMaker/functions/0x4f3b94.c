// rea decompile_all
// name: FUN_004f3b94
// address: 0x4f3b94
// body: available
// range: 0x4f3b94-0x4f3cbd inclusive
// range: 0x4f3ced-0x4f3cf3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f3c7a (push 0x4f3ccf followed by fs-segment stack chaining); handler 0x4f3ccf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f3c92 (push 0x4f3cbe followed by fs-segment stack chaining); handler 0x4f3cbe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3b94(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  if ((((*(char *)((int)param_1 + 0x59) == '\0') ||
       (((*(byte *)(param_1 + 7) & 0x10) != 0 && ((*(byte *)((int)param_1 + 0x55) & 8) != 0)))) &&
      (((*(byte *)(param_1 + 7) & 0x10) == 0 ||
       (((*(byte *)((int)param_1 + 0x55) & 8) != 0 || ((*(byte *)((int)param_1 + 0x51) & 4) != 0))))
      )) || (((*(byte *)(param_1 + 0x15) & 8) != 0 || ((*(byte *)(param_1 + 7) & 8) != 0)))) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    if (param_1[0x96] == 0) {
      puStack_1c = (undefined1 *)0x4f3c0e;
      (**(code **)(*param_1 + 0xa8))();
    }
    if ((param_1[0x78] != 0) && (iVar2 = *(int *)(param_1[0x78] + 8), -1 < iVar2 + -1)) {
      iVar3 = 0;
      do {
        puStack_1c = (undefined1 *)0x4f3c36;
        FUN_0043b048(param_1[0x78],iVar3);
        puStack_1c = (undefined1 *)0x4f3c3b;
        FUN_004f3b94();
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if ((param_1[0x96] != 0) && (*(char *)((int)param_1 + 0x1ea) != cVar1)) {
    *(char *)((int)param_1 + 0x1ea) = cVar1;
    puStack_20 = &LAB_004f3ccf;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    *(undefined1 *)((int)param_1 + 0x1ef) = 1;
    puStack_2c = &LAB_004f3cbe;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    puStack_1c = &stack0xfffffffc;
    FUN_004efb90(param_1,0xb019,0,0);
    *in_FS_OFFSET = uStack_30;
    *(undefined1 *)((int)param_1 + 0x1ef) = 0;
    return;
  }
  return;
}
