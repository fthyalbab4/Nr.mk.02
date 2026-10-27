// rea decompile_all
// name: FUN_0041d1d4
// address: 0x41d1d4
// body: available
// range: 0x41d1d4-0x41d2d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41d1f2 (push 0x41d2d3 followed by fs-segment stack chaining); handler 0x41d2d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d1d4(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x41d1e7;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_0041d2d3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_2 < 1) {
    bVar2 = false;
    puStack_14 = &stack0xfffffffc;
  }
  else {
    iVar4 = local_8;
    puStack_14 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_14 = &stack0xfffffffc;
      iVar4 = FUN_00407048(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + -4);
    }
    bVar2 = param_2 <= iVar5;
  }
  if (bVar2) {
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407048(&local_8,local_8);
    }
    uVar1 = *(ushort *)(iVar4 + -2 + param_2 * 2);
    if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407048(&local_8,local_8);
      }
      if (((0xd7ff < *(ushort *)(iVar4 + -2 + param_2 * 2)) && (local_8 != 0)) &&
         (*(short *)(local_8 + -10) != 2)) {
        FUN_00407048(&local_8,local_8);
      }
    }
  }
  puVar3 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041d2da;
  puStack_18 = (undefined1 *)0x41d2d2;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar3);
  return;
}
