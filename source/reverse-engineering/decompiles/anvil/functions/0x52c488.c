// rea decompile_all
// name: FUN_0052c488
// address: 0x52c488
// body: available
// range: 0x52c488-0x52c576 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52c4a8 (push 0x52c577 followed by fs-segment stack chaining); handler 0x52c577 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052c488(int param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &LAB_0052c577;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  uVar2 = FUN_0051ee7c(param_2);
  puVar1 = puStack_20;
  while (uVar2 = uVar2 & 0xff, uVar2 != 0) {
    puStack_20 = puVar1;
    uVar3 = FUN_0051ee7c(param_2);
    local_c = uVar3 & 0xff;
    iVar5 = uVar2 - 1;
    if ((uVar3 & 7) == 1) {
      if (iVar5 < 2) {
        FUN_0040b9d0(&LAB_0051eb84,&local_10);
        FUN_0051eddc(local_10);
      }
      FUN_0051ee94(param_2,local_8 + 0x18,2);
      iVar5 = uVar2 - 3;
      uVar4 = extraout_var_00;
    }
    else {
      uVar4 = extraout_var;
      if ((uVar3 & 7) == 2) {
        if (iVar5 < 4) {
          FUN_0040b9d0(&LAB_0051eb84,&local_14);
          FUN_0051eddc(local_14);
        }
        FUN_0051ee94(param_2,local_8 + 0x1c,4);
        iVar5 = uVar2 - 5;
        uVar4 = extraout_var_01;
      }
    }
    if (0 < iVar5) {
      (**(code **)(*param_2 + 0x14))(param_2,iVar5,CONCAT22(uVar4,1));
    }
    uVar2 = FUN_0051ee7c(param_2);
    puVar1 = puStack_20;
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0052c57e;
  puStack_24 = (undefined1 *)0x52c576;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  return;
}
