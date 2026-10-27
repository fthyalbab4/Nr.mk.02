// rea decompile_all
// name: FUN_006f462c
// address: 0x6f462c
// body: available
// range: 0x6f462c-0x6f487a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f4647 (push 0x6f487b followed by fs-segment stack chaining); handler 0x6f487b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f462c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_006f487b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar4 = *(int *)(param_1 + 0x3fc);
  if (*(int *)(iVar4 + 4) == 0) {
    puStack_20 = &stack0xfffffffc;
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x390),0);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3ac),0);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3b0),0);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3bc),0);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3b4),0);
  }
  else {
    uVar2 = FUN_005b2edc(*(undefined4 *)(param_1 + 0x3fc));
    uVar3 = FUN_005b2ec4(iVar4);
    uVar2 = FUN_005b5764(uVar3,uVar2);
    uVar3 = FUN_005b2ef4(*(undefined4 *)(param_1 + 0x3fc),*(undefined4 *)(param_1 + 0x410));
    FUN_007034e0(uVar2,0,0,1,uVar3);
    uVar3 = FUN_0070399c(uVar2);
    FUN_00405a7c(uVar2);
    piVar5 = *(int **)(*(int *)(param_1 + 0x390) + 0x1b0);
    (**(code **)(*piVar5 + 8))(piVar5,uVar3);
    FUN_00405a7c(uVar3);
    FUN_0041666c(*(undefined4 *)(param_1 + 0x410),&local_10);
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3bc),local_10);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x390),1);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3b4),1 < *(int *)(*(int *)(param_1 + 0x3fc) + 4));
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3bc),1 < *(int *)(*(int *)(param_1 + 0x3fc) + 4));
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3ac),0 < *(int *)(param_1 + 0x410));
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3b0),
                 *(int *)(param_1 + 0x410) < *(int *)(*(int *)(param_1 + 0x3fc) + 4) + -1);
    if ((*PTR_DAT_0078258c != '\0') && (*PTR_DAT_0078234c != '\0')) {
      local_8 = *(int *)(*(int *)(param_1 + 0x3fc) + 8);
      local_c = *(int *)(*(int *)(param_1 + 0x3fc) + 0xc);
      uVar2 = FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x1b0));
      iVar4 = FUN_00462a64(uVar2);
      FUN_0045b850(*(undefined4 *)(iVar4 + 0x44),0xffffff);
      iVar4 = FUN_00462a64(uVar2);
      FUN_0045b954(*(undefined4 *)(iVar4 + 0x44),0xe);
      iVar4 = FUN_00462a64(uVar2);
      FUN_0045b9a4(*(undefined4 *)(iVar4 + 0x44),1);
      piVar5 = (int *)FUN_00462a64(uVar2);
      (**(code **)(*piVar5 + 0x5c))(piVar5,local_8 + -0x20,local_c);
      piVar5 = (int *)FUN_00462a64(uVar2);
      (**(code **)(*piVar5 + 0x58))(piVar5,local_8 + 0x20,local_c);
      piVar5 = (int *)FUN_00462a64(uVar2);
      (**(code **)(*piVar5 + 0x5c))(piVar5,local_8,local_c + -0x20);
      piVar5 = (int *)FUN_00462a64(uVar2);
      (**(code **)(*piVar5 + 0x58))(piVar5,local_8,local_c + 0x20);
    }
    FUN_004eed28(*(undefined4 *)(param_1 + 0x390));
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006f4882;
  puStack_24 = (undefined1 *)0x6f487a;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
