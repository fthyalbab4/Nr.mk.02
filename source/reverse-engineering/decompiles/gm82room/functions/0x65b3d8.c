// rea decompile_all
// name: FUN_0065b3d8
// address: 0x65b3d8
// body: available
// range: 0x65b3d8-0x65b4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65b40f (push 0x65b4a4 followed by fs-segment stack chaining); handler 0x65b4a4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b3d8(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_FS_OFFSET;
  int iStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_1c [6];

  puVar4 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_30 = (undefined1 *)0x65b404;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_34 = &LAB_0065b4a4;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  if (param_4 - param_3 < 8) {
    puStack_30 = &stack0xfffffffc;
    if (param_3 <= param_4) {
      iVar3 = (param_4 - param_3) + 1;
      puStack_30 = &stack0xfffffffc;
      do {
        iStack_3c = 0x65b431;
        iVar2 = FUN_0065a204(*(int *)(param_1 + 8) + param_3 * 0x18,local_1c);
        if (-1 < iVar2) break;
        param_3 = param_3 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar3 = param_3 + param_4 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((param_3 + param_4 & 1U) != 0);
    }
    puStack_30 = &stack0xfffffffc;
    iVar2 = FUN_0065a204(*(int *)(param_1 + 8) + iVar3 * 0x18,local_1c);
    if (iVar2 < 0) {
      iStack_3c = param_4;
      FUN_0065b3d8(param_1,local_1c,iVar3 + 1);
    }
    else {
      FUN_0065b3d8(param_1,local_1c,param_3);
      iStack_3c = iVar3;
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = iStack_3c;
  puStack_34 = &LAB_0065b4ab;
  iStack_38 = 0x65b4a3;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
