// rea decompile_all
// name: FUN_00552474
// address: 0x552474
// body: available
// range: 0x552474-0x552526 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x552494 (push 0x552527 followed by fs-segment stack chaining); handler 0x552527 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00552474(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_28 = &LAB_00552527;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (param_1 != 0) {
    FUN_00408420(&local_c,param_2);
    uStack_2c = 0x5524b2;
    uVar2 = FUN_004072d8(&local_8);
    uStack_2c = 0x5524bc;
    cVar1 = FUN_00534c28(local_c,uVar2);
    if (cVar1 == '\0') {
      uStack_2c = 0x5524cf;
      FUN_004083e8(&local_8,param_2,0);
    }
    uStack_2c = 0x5524d7;
    uVar2 = FUN_00407ae0(local_8);
    uStack_2c = 0x5524e0;
    iVar3 = FUN_0055239c(param_1);
    for (uVar5 = (uint)*(ushort *)(param_1 + 6); uVar5 != 0; uVar5 = uVar5 - 1) {
      uStack_2c = 0x5524fa;
      iVar4 = FUN_004178a8(iVar3,uVar2,8);
      if (iVar4 == 0) break;
      iVar3 = iVar3 + 0x28;
    }
  }
  *in_FS_OFFSET = puStack_28;
  puStack_24 = (undefined1 *)0x55251e;
  FUN_00407dd0(&local_c,puStack_28,unaff_EDI);
  puStack_24 = (undefined1 *)0x552526;
  FUN_004072d8(&local_8);
  return;
}
