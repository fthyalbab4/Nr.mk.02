// rea decompile_all
// name: FUN_0045f4b8
// address: 0x45f4b8
// body: available
// range: 0x45f4b8-0x45f521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45f4d6 (push 0x45f522 followed by fs-segment stack chaining); handler 0x45f522 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045f4b8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0045f522;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = *(int *)(param_1 + 8) + -1;
  uVar4 = iVar3 == 0;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (-1 < iVar3) {
    do {
      puStack_1c = puVar1;
      puVar2 = (undefined4 *)FUN_00438ec4(param_1,iVar3);
      FUN_00405eb4(*puVar2,&local_c);
      FUN_0040891c(local_c,local_8);
      if ((bool)uVar4) break;
      iVar3 = iVar3 + -1;
      uVar4 = iVar3 == -1;
      puVar1 = puStack_1c;
    } while (!(bool)uVar4);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045f529;
  puStack_20 = (undefined1 *)0x45f521;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
