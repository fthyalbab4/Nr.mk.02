// rea decompile_all
// name: FUN_006e05f0
// address: 0x6e05f0
// body: available
// range: 0x6e05f0-0x6e0711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6e0608 (push 0x6e0712 followed by fs-segment stack chaining); handler 0x6e0712 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e05f0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_24 = &LAB_006e0712;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar2 = FUN_00526f48(*(undefined4 *)PTR_DAT_00782504);
  if (cVar2 == '\0') {
    FUN_004cf3e4(*(undefined4 *)(param_1 + 0x3f0),0);
  }
  else {
    FUN_004cf3e4(*(undefined4 *)(param_1 + 0x3f0),*(undefined4 *)PTR_DAT_00782504);
  }
  FUN_00417398(DAT_0077f44c,&local_c);
  FUN_00417288(local_c,L".gm81",&local_8);
  FUN_004cf374(*(undefined4 *)(param_1 + 0x3f0),local_8);
  cVar2 = (**(code **)(**(int **)(param_1 + 0x3f0) + 0x40))();
  if (cVar2 != '\0') {
    FUN_004cf2f4(*(undefined4 *)(param_1 + 0x3f0),&local_14);
    FUN_0041735c(local_14,&local_10);
    FUN_00407eb8(PTR_DAT_00782504,local_10);
    FUN_004cf2f4(*(undefined4 *)(param_1 + 0x3f0),&local_18);
    FUN_00407eb8(&DAT_0077f44c,local_18);
    FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,CONCAT22(extraout_var,0xfff5));
    FUN_00705c84(DAT_0077f44c);
    FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
    FUN_00719fc0(DAT_0077f44c);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006e0719;
  puStack_24 = (undefined1 *)0x6e0704;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  puStack_24 = (undefined1 *)0x6e0711;
  thunk_FUN_00406e80(&local_10,3);
  return;
}
