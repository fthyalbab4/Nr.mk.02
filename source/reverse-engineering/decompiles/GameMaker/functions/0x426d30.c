// rea decompile_all
// name: FUN_00426d30
// address: 0x426d30
// body: available
// range: 0x426d30-0x426de4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x426d4c (push 0x426de5 followed by fs-segment stack chaining); handler 0x426de5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426d30(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double *pdVar6;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_28;
  float10 local_24;
  double local_14;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_28 = 0;
  local_8 = 0;
  puStack_34 = &LAB_00426de5;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_00428cf0(&local_8,param_1);
  pdVar6 = &local_14;
  uVar5 = 0;
  uVar4 = 0x400;
  uVar3 = local_8;
  iVar2 = (**(code **)PTR_DAT_00782124)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_00408130(&local_28,local_8);
    cVar1 = FUN_0041941c(local_28,&local_24);
    if (cVar1 == '\0') {
      FUN_00424618(0x80020005,*param_1,CONCAT22(extraout_var_00,5),uVar3,uVar4,uVar5,pdVar6);
    }
    else {
      local_14 = (double)local_24;
    }
  }
  else if (iVar2 != 0) {
    FUN_00424618(iVar2,*param_1,CONCAT22(extraout_var,5),uVar3,uVar4,uVar5,pdVar6);
  }
  *in_FS_OFFSET = uVar3;
  thunk_FUN_00406e5c(&local_28,uVar3,uVar5,&LAB_00426dec);
  FUN_00407a78(&local_8);
  return;
}
