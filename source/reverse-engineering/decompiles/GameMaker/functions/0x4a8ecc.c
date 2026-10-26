// rea decompile_all
// name: FUN_004a8ecc
// address: 0x4a8ecc
// body: available
// range: 0x4a8ecc-0x4a8f9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a8eee (push 0x4a8f9e followed by fs-segment stack chaining); handler 0x4a8f9e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8ecc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20 [3];
  undefined4 local_14;
  undefined4 local_c;

  puStack_48 = &stack0xfffffffc;
  local_24 = 0;
  local_28 = 0;
  puStack_4c = &LAB_004a8f9e;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  uVar2 = FUN_004eee4c(*(undefined4 *)(param_1 + 0x1c));
  local_20[0] = *(uint *)(&DAT_007783f0 + (uVar2 & 0x7f) * 4) | 3;
  local_14 = FUN_00407f44(param_3);
  local_c = (**(code **)(**(int **)(param_1 + 0x1c) + 0xf4))(*(int **)(param_1 + 0x1c),param_2);
  puVar5 = local_20;
  uVar3 = FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
  iVar4 = FUN_0040efb8(uVar3,0x133d,param_2,puVar5);
  if (iVar4 == 0) {
    puVar6 = &local_24;
    FUN_0040b75c(PTR_PTR_00782550,&local_28);
    local_34 = 0x11;
    local_2c = 0;
    local_38 = param_3;
    local_30 = param_2;
    FUN_00417d4c(local_28,&local_38,1,puVar6);
    FUN_004a8be8(local_24);
  }
  FUN_004a99f0(*(undefined4 *)(param_1 + 0x1c));
  puVar1 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004a8fa5;
  puStack_4c = (undefined1 *)0x4a8f9d;
  thunk_FUN_00406e80(&local_28,2,puVar1);
  return;
}
