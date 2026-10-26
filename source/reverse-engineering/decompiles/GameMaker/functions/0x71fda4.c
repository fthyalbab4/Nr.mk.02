// rea decompile_all
// name: FUN_0071fda4
// address: 0x71fda4
// body: available
// range: 0x71fda4-0x71ff39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71fdbf (push 0x71ff3a followed by fs-segment stack chaining); handler 0x71ff3a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071fda4(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  double local_14;
  double local_c;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_0071ff3a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar2 = FUN_00514e78(&PTR_LAB_0071e658,1,0);
  _DAT_007a4654 = 0x3f000000;
  uVar3 = FUN_00722a50(param_1);
  *(undefined4 *)(iVar2 + 0x444) = uVar3;
  *(undefined4 *)(iVar2 + 0x458) = param_1;
  uVar3 = FUN_005357b0(&DAT_00534924,1);
  *(undefined4 *)(iVar2 + 0x448) = uVar3;
  FUN_00535828(uVar3,*(undefined4 *)(iVar2 + 0x444));
  FUN_00722840(param_1,&local_18);
  FUN_00407eb8(iVar2 + 0x44c,local_18);
  *(undefined1 *)(iVar2 + 0x450) = 0;
  *(undefined4 *)(iVar2 + 0x454) = 0;
  *(undefined1 *)(iVar2 + 0x45c) = 0;
  *(undefined4 *)(iVar2 + 0x460) = 0;
  *(undefined4 *)(iVar2 + 0x464) = 0;
  FUN_00535f8c(*(undefined4 *)(iVar2 + 0x444),&local_c,&local_14);
  if ((((local_c < 0.0) || (local_14 < 0.0)) ||
      ((double)*(int *)(*(int *)(iVar2 + 0x40c) + 0x48) < local_c)) ||
     ((double)*(int *)(*(int *)(iVar2 + 0x40c) + 0x4c) < local_14)) {
    uVar3 = FUN_00404878();
    *(undefined4 *)(iVar2 + 0x460) = uVar3;
    uVar3 = FUN_00404878();
    *(undefined4 *)(iVar2 + 0x464) = uVar3;
  }
  *(undefined4 *)(iVar2 + 0x46c) = 0;
  FUN_007203ec(iVar2);
  *(undefined1 *)(iVar2 + 0x468) = 1;
  FUN_004c0238(*(undefined4 *)(iVar2 + 0x438),1);
  FUN_0071ffe4(iVar2);
  FUN_006dfbf0(*(undefined4 *)PTR_DAT_00781a58,iVar2);
  puVar1 = puStack_28;
  *(undefined4 *)(iVar2 + 0x2b8) = 2;
  *(undefined1 *)(iVar2 + 0x470) = 0;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0071ff41;
  puStack_2c = (undefined1 *)0x71ff39;
  thunk_FUN_00406e5c(&local_18,uStack_30,puVar1);
  return;
}
