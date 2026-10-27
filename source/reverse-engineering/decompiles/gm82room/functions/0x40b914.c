// rea decompile_all
// name: FUN_0040b914
// address: 0x40b914
// body: available
// range: 0x40b914-0x40b999 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40b92b (push 0x40b99a followed by fs-segment stack chaining); handler 0x40b99a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b914(byte *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  uint uVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0040b99a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00408194(param_2,0);
  if (*param_1 != 0) {
    uVar4 = (uint)*param_1;
    FUN_00408520(&local_8,uVar4);
    uVar5 = uVar4;
    uVar2 = FUN_00408220(local_8);
    iVar3 = FUN_0040b424(uVar2,uVar4 + 1,param_1 + 1,uVar5);
    if (iVar3 < 1) {
      FUN_004081e8(&local_8,0);
    }
    else {
      FUN_00408520(&local_8,iVar3 + -1);
    }
    FUN_00408194(param_2,local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040b9a1;
  puStack_1c = (undefined1 *)0x40b999;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
