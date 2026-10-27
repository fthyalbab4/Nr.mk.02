// rea decompile_all
// name: FUN_004d055c
// address: 0x4d055c
// body: available
// range: 0x4d055c-0x4d05ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d057f (push 0x4d05f0 followed by fs-segment stack chaining); handler 0x4d05f0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d055c(int param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x4d0574;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_004d05f0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = local_8;
  puStack_18 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_18 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_18 = &stack0xfffffffc;
    iVar1 = FUN_00407048(&local_8,local_8);
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  pvVar3 = CoTaskMemAlloc(iVar2 * 2 + 2);
  FUN_00408144(&local_c,local_8);
  uStack_20 = 0x4d05d0;
  FUN_004885b0(pvVar3,local_c,iVar2);
  *in_FS_OFFSET = puStack_1c;
  puStack_18 = (undefined1 *)0x4d05e7;
  FUN_00407a78(&local_c,puStack_1c,unaff_ESI);
  puStack_18 = (undefined1 *)0x4d05ef;
  thunk_FUN_00406e5c(&local_8);
  return;
}
