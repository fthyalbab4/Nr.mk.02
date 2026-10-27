// rea decompile_all
// name: FUN_004224d0
// address: 0x4224d0
// body: available
// range: 0x4224d0-0x42256e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4224ee (push 0x42256f followed by fs-segment stack chaining); handler 0x42256f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004224d0(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x4224e3;
  local_8 = param_1;
  FUN_00407660(param_1);
  puStack_18 = &LAB_0042256f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = local_8;
  puStack_14 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 1)) {
    puStack_14 = &stack0xfffffffc;
    iVar2 = FUN_00407078(&local_8,local_8,0);
  }
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + -4);
  }
  FUN_00409be0(param_2,&DAT_004108f8,1,uVar3);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
    iVar2 = FUN_00407078(&local_8,local_8,0);
  }
  FUN_0040450c(iVar2,*param_2,uVar3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00422576;
  puStack_18 = (undefined1 *)0x42256e;
  FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
