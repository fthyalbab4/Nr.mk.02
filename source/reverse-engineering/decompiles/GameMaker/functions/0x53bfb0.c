// rea decompile_all
// name: FUN_0053bfb0
// address: 0x53bfb0
// body: available
// range: 0x53bfb0-0x53c05e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53bfc9 (push 0x53c05f followed by fs-segment stack chaining); handler 0x53c05f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053bfb0(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0053c05f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0053c2ec(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0040b75c(&PTR_DAT_0053b3f0,&local_8);
    FUN_0053b600(local_8);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((param_2 < 0) || (*(int *)(param_1 + 0x20) <= param_2)) {
    FUN_0040b75c(PTR_PTR_007824d8,&local_c);
    FUN_0041beb8(&PTR_LAB_0045423c,1,local_c);
    FUN_00406618();
  }
  GdiFlush();
  FUN_0053b658(*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 0xe),0x20);
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0053c066;
  puStack_20 = (undefined1 *)0x53c05e;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}
