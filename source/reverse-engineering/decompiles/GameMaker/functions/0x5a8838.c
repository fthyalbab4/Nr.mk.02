// rea decompile_all
// name: FUN_005a8838
// address: 0x5a8838
// body: available
// range: 0x5a8838-0x5a890c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a884f (push 0x5a890d followed by fs-segment stack chaining); handler 0x5a890d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a8838(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005a890d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_005a8794(param_1);
  iVar3 = FUN_0052f024(param_2);
  if ((iVar3 == 0x21c) || (iVar3 == 800)) {
    FUN_0052f060(param_2,&local_8);
    FUN_00407eb8(param_1 + 4,local_8);
    uVar4 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 8) = uVar4;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0xc) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0xd) = uVar2;
    uVar4 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 3;
    uVar5 = *(uint *)(param_1 + 0x10) >> 0x10 & 0xff;
    if (uVar5 != 0) {
      *(uint *)(param_1 + 0x18) = uVar5;
    }
    uVar5 = *(uint *)(param_1 + 0x10) >> 0x18;
    if (uVar5 != 0) {
      *(uint *)(param_1 + 0x1c) = uVar5 - 1;
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffff;
    uVar4 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005a8914;
  puStack_1c = (undefined1 *)0x5a890c;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
