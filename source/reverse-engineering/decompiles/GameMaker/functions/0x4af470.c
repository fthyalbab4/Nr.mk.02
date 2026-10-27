// rea decompile_all
// name: FUN_004af470
// address: 0x4af470
// body: available
// range: 0x4af470-0x4af5ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4af499 (push 0x4af5cf followed by fs-segment stack chaining); handler 0x4af5cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004af470(int *param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_34 = &LAB_004af5cf;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_14 = param_3;
  local_10 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (0 < iVar2) {
    if (local_14 == (int *)0x0) {
      local_14 = (int *)FUN_00421f48();
    }
    (**(code **)(*param_1 + 0x1c))(param_1,&local_20);
    FUN_004219a0(local_14,local_20,&local_8);
    (**(code **)(*local_14 + 0x18))(local_14,&local_c);
    iVar2 = FUN_00409a18(local_c);
    if (0 < iVar2) {
      uVar3 = FUN_00409a18(local_c);
      FUN_0043f4c0(local_10,local_c,uVar3);
    }
    piVar4 = (int *)FUN_0041fd38(&DAT_00413024,1,0x400);
    for (local_1c = FUN_004ae598(param_1[7],0); local_1c != 0; local_1c = FUN_004ad2a8(local_1c)) {
      FUN_00420ddc(piVar4,0);
      iVar2 = FUN_004ad85c(local_1c);
      if (-1 < iVar2 + -1) {
        do {
          FUN_0041f690(piVar4,9);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_0041f2a8(piVar4,*(undefined4 *)(local_1c + 8));
      FUN_0041f2a8(piVar4,&LAB_004af5e8);
      (**(code **)(*piVar4 + -0x24))(piVar4,&local_24);
      FUN_004219a0(local_14,local_24,&local_8);
      uVar3 = FUN_00409a18(local_8);
      (**(code **)(*local_10 + 0x10))(local_10,local_8,uVar3);
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004af5d6;
  puStack_34 = (undefined1 *)0x4af5bb;
  thunk_FUN_00406e80(&local_24,2,puVar1);
  puStack_34 = (undefined1 *)0x4af5ce;
  FUN_00408e44(&local_c,&DAT_004108f8,2);
  return;
}
