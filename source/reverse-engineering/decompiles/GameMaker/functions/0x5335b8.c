// rea decompile_all
// name: FUN_005335b8
// address: 0x5335b8
// body: available
// range: 0x5335b8-0x533724 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5335cd (push 0x533725 followed by fs-segment stack chaining); handler 0x533725 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005335b8(undefined4 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00533725;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_005334e8();
  iVar3 = FUN_0052f024(param_1);
  if (((iVar3 == 0x1ae) || (iVar3 == 600)) || (iVar3 == 800)) {
    if (799 < iVar3) {
      param_1 = FUN_0052f2e4(param_1);
    }
    uVar4 = FUN_0052f024(param_1);
    FUN_004ee858(*(undefined4 *)(*(int *)PTR_DAT_007828b0 + 0x388),uVar4);
    DAT_0077b578 = FUN_0052f114(param_1);
    if (599 < iVar3) {
      FUN_0052f060(param_1,&local_8);
      FUN_00407eb8(&PTR_u_Game_Information_0077b57c,local_8);
      DAT_0077b580 = FUN_0052f024(param_1);
      DAT_0077b584 = FUN_0052f024(param_1);
      DAT_0077b588 = FUN_0052f024(param_1);
      DAT_0077b58c = FUN_0052f024(param_1);
      DAT_0077b590 = FUN_0052f114(param_1);
      DAT_0077b594 = FUN_0052f114(param_1);
      DAT_0077b598 = FUN_0052f114(param_1);
      DAT_0077b59c = FUN_0052f114(param_1);
    }
    if (799 < iVar3) {
      FUN_0052f038(param_1);
      _DAT_00788964 = (double)in_ST0;
    }
    uVar4 = FUN_0052f258(param_1);
    piVar1 = *(int **)(*(int *)(*(int *)PTR_DAT_007828b0 + 0x388) + 0x2c0);
    (**(code **)(*piVar1 + 0x70))(piVar1,uVar4);
    FUN_00405a7c(uVar4);
    if (799 < iVar3) {
      FUN_00405a7c(param_1);
    }
    DAT_0078895c = 0;
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0053372c;
  puStack_1c = (undefined1 *)0x533724;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
