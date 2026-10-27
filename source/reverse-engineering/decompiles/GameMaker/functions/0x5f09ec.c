// rea decompile_all
// name: FUN_005f09ec
// address: 0x5f09ec
// body: available
// range: 0x5f09ec-0x5f0a85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f0a08 (push 0x5f0aa3 followed by fs-segment stack chaining); handler 0x5f0aa3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f0a1e (push 0x5f0a86 followed by fs-segment stack chaining); handler 0x5f0a86 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f09ec(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int local_8;

  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_005f0aa3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x5f0a13;
  local_8 = param_1;
  FUN_005f3ce8(param_1);
  puStack_24 = &LAB_005f0a86;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  if (0x3f < *(uint *)(local_8 + 8)) {
    puStack_20 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_0078173c,&local_c);
    FUN_005df5ec(&PTR_LAB_005ee0e4,1,local_c);
    FUN_00406618();
  }
  uVar4 = *(uint *)(local_8 + 8);
  if (0x3f < uVar4) {
    uVar4 = thunk_FUN_00404478();
  }
  *(undefined4 *)(local_8 + 0xc + uVar4 * 4) = param_2;
  piVar1 = (int *)(local_8 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (iVar2 == -1) {
    FUN_00405944();
  }
  puVar3 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005f0a8d;
  puStack_24 = (undefined1 *)0x5f0a85;
  FUN_005f3cfc(local_8,uStack_28,puVar3);
  return;
}
