// rea decompile_all
// name: FUN_0041a428
// address: 0x41a428
// body: available
// range: 0x41a428-0x41a4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41a44c (push 0x41a4dc followed by fs-segment stack chaining); handler 0x41a4dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041a428(int param_1,int *param_2,ushort *param_3,char *param_4)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_8;

  puStack_20 = (undefined1 *)0x41a441;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_0041a4dc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_4 = '\0';
  puStack_20 = &stack0xfffffffc;
  FUN_0041a3bc(local_8,param_2);
  iVar4 = *param_2;
  uVar2 = 0;
  while( true ) {
    FUN_00407498(&local_8);
    iVar3 = FUN_00408514();
    puVar1 = puStack_20;
    if (((iVar3 < iVar4) || (9 < (ushort)(*(short *)(local_8 + -2 + iVar4 * 2) - 0x30U))) ||
       (999 < uVar2)) break;
    uVar2 = uVar2 * 10 + *(short *)(local_8 + -2 + iVar4 * 2) + -0x30;
    iVar4 = iVar4 + 1;
  }
  if (*param_2 < iVar4) {
    *param_4 = (char)iVar4 - (char)*param_2;
    *param_2 = iVar4;
    *param_3 = uVar2;
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041a4e3;
  puStack_24 = (undefined1 *)0x41a4db;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
