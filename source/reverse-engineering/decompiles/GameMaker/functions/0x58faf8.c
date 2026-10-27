// rea decompile_all
// name: FUN_0058faf8
// address: 0x58faf8
// body: available
// range: 0x58faf8-0x58fbd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x58fb22 (push 0x58fbd3 followed by fs-segment stack chaining); handler 0x58fbd3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058faf8(int param_1,int param_2,int param_3,byte param_4,byte param_5)

{
  undefined1 *puVar1;
  undefined4 unaff_EBX;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  for (iVar2 = param_3; -1 < iVar2; iVar2 = iVar2 + -1) {
    unaff_ESI = *(undefined4 *)(param_2 + iVar2 * 4);
  }
  puStack_20 = &LAB_0058fbd3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(undefined4 *)(param_1 + 0x114) = unaff_ESI;
  if ((0 < param_3) && (*(undefined4 *)(param_1 + 0x118) = unaff_EBX, 1 < param_3)) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  puVar1 = &stack0xfffffffc;
  if ((1 < (byte)(param_5 - 1)) && (puVar1 = &stack0xfffffffc, param_5 != 4)) {
    FUN_0040b75c(PTR_PTR_00781a88,&local_8);
    FUN_0058f9fc(param_1,local_8);
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  if ((1 < (byte)(param_4 - 1)) && (param_4 != 4)) {
    FUN_0040b75c(PTR_PTR_00781a88,&local_c);
    FUN_0058f9fc(param_1,local_c);
  }
  if (param_5 < param_4) {
    FUN_0040b75c(PTR_PTR_0078180c,&local_10);
    FUN_0058f9fc(param_1,local_10);
  }
  puVar1 = local_1c;
  *(byte *)(param_1 + 0x120) = param_5;
  *(byte *)(param_1 + 0x121) = param_4;
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_0058fbda;
  puStack_20 = (undefined1 *)0x58fbd2;
  thunk_FUN_00406e80(&local_10,3,puVar1);
  return;
}
