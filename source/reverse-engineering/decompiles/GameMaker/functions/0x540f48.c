// rea decompile_all
// name: FUN_00540f48
// address: 0x540f48
// body: available
// range: 0x540f48-0x540fe2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x540f65 (push 0x540fe3 followed by fs-segment stack chaining); handler 0x540fe3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00540f48(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined2 local_10;
  undefined1 local_e;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00540fe3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if (0xff < param_1[2]) {
    FUN_0040b75c(&PTR_DAT_0053b328,&local_c);
    FUN_0053b600(local_c);
    puVar3 = puStack_1c;
  }
  puStack_1c = puVar3;
  if (param_1[3] <= param_1[2]) {
    FUN_00540cb4(param_1,param_1[2] + 1);
  }
  FUN_00540b68(*param_1,local_8,&local_10);
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  *(undefined2 *)(iVar2 + iVar1 * 3) = local_10;
  *(undefined1 *)(iVar2 + 2 + iVar1 * 3) = local_e;
  param_1[2] = param_1[2] + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)(*param_1 + 0x1c))();
  puVar3 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00540fea;
  puStack_20 = (undefined1 *)0x540fe2;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar3);
  return;
}
