// rea decompile_all
// name: FUN_004106b4
// address: 0x4106b4
// body: available
// range: 0x4106b4-0x41073d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4106d9 (push 0x41073e followed by fs-segment stack chaining); handler 0x41073e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004106b4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x4106ce;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_0041073e;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  iVar2 = local_8;
  puStack_18 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_18 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_18 = &stack0xfffffffc;
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + -4);
  }
  FUN_004086a8(param_2,1,uVar3);
  FUN_00415c44(local_8,local_c);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = (int)&local_c;
  puStack_1c = &LAB_00410745;
  iStack_20 = 0x41073d;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
