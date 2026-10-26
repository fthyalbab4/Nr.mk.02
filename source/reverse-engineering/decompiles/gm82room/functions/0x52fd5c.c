// rea decompile_all
// name: FUN_0052fd5c
// address: 0x52fd5c
// body: available
// range: 0x52fd5c-0x52fdc4 inclusive
// range: 0x52fdde-0x52fe3b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52fd79 (push 0x52fe3c followed by fs-segment stack chaining); handler 0x52fe3c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52fdae (push 0x52fdc5 followed by fs-segment stack chaining); handler 0x52fdc5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052fd5c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0052fe3c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = (int *)0x0;
  puStack_28 = (undefined1 *)0x52fd8e;
  cVar3 = FUN_004061f8(param_2,&PTR_FUN_00457480);
  if (cVar3 == '\0') {
    puStack_28 = (undefined1 *)0x52fdeb;
    cVar3 = FUN_004061f8(param_2,&PTR_LAB_0051b528);
    piVar2 = param_2;
    if (cVar3 == '\0') {
      puStack_28 = (undefined1 *)0x52fe01;
      FUN_0040b9d0(&LAB_0051eb7c,&local_c);
      puStack_28 = (undefined1 *)0x52fe09;
      FUN_0051eddc(local_c);
      piVar2 = local_8;
    }
  }
  else {
    puStack_28 = (undefined1 *)0x52fda0;
    local_8 = (int *)FUN_00527e08(&PTR_LAB_0051b528,1,param_1);
    puStack_2c = &LAB_0052fdc5;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    *in_FS_OFFSET = uStack_30;
    piVar2 = local_8;
  }
  local_8 = piVar2;
  puStack_28 = (undefined1 *)0x52fe14;
  FUN_00524d9c(param_1[0xb],local_8);
  puStack_28 = (undefined1 *)0x52fe1d;
  FUN_0052fd38(param_1);
  puStack_28 = (undefined1 *)0x52fe26;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0052fe43;
  puStack_20 = (undefined1 *)0x52fe3b;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
