// rea decompile_all
// name: FUN_006161f0
// address: 0x6161f0
// body: available
// range: 0x6161f0-0x61623b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61620c (push 0x61623c followed by fs-segment stack chaining); handler 0x61623c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006161f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  int local_8;

  puStack_10 = (undefined1 *)0x616201;
  local_8 = param_1;
  FUN_006160d0(param_1);
  puStack_14 = &LAB_0061623c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_c = *(undefined4 *)(local_8 + 8);
  piVar1 = (int *)(local_8 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  puStack_10 = &stack0xfffffffc;
  if (SCARRY4(iVar2,1)) {
    puStack_10 = &stack0xfffffffc;
    FUN_00405944();
  }
  puVar3 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00616243;
  puStack_14 = (undefined1 *)0x61623b;
  FUN_006160dc(local_8,uStack_18,puVar3);
  return;
}
