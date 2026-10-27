// rea decompile_all
// name: FUN_004de17c
// address: 0x4de17c
// body: available
// range: 0x4de17c-0x4de252 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4de19a (push 0x4de253 followed by fs-segment stack chaining); handler 0x4de253 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de17c(HMENU param_1,ushort param_2,int param_3,undefined2 param_4,int param_5)

{
  undefined1 *puVar1;
  HMENU pHVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int iStack_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  iStack_8 = (uint)param_2 << 0x10;
  puStack_24 = &LAB_004de253;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_2 & 0x10) == 0) {
    iVar3 = FUN_004dd678(*(undefined4 *)(param_5 + -4),param_1,1);
    if ((iVar3 != 0) && (iVar4 = FUN_004dbe08(iVar3), param_3 < iVar4)) {
      iVar3 = FUN_004dbe18(iVar3,param_3);
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    pHVar2 = GetSubMenu(param_1,param_3);
    iVar3 = FUN_004dd678(*(undefined4 *)(param_5 + -4),pHVar2,1);
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x34) != 0)) {
    FUN_00408034(&local_c,param_4);
    uVar5 = local_c;
    FUN_00408034(&local_10,**(undefined2 **)(iVar3 + 0x34));
    iVar4 = FUN_00415c5c(local_10,uVar5);
    if (iVar4 == 0) {
      FUN_004df2d4(*(undefined4 *)(iVar3 + 0x34),&local_14);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004de25a;
  puStack_24 = (undefined1 *)0x4de252;
  thunk_FUN_00406e80(&local_14,3,puVar1);
  return;
}
