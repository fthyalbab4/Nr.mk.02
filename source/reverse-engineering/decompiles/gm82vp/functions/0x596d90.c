// rea decompile_all
// name: FUN_00596d90
// address: 0x596d90
// body: available
// range: 0x596d90-0x596e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x596db0 (push 0x596e70 followed by fs-segment stack chaining); handler 0x596e70 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00596d90(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00596e70;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (param_3 != 0) {
    if (*param_1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)*param_1;
    }
    if ((param_2 < 0) || (puVar1 = &stack0xfffffffc, iVar2 < param_2)) {
      FUN_0040b9d0(PTR_LAB_006891f4,&local_c);
      FUN_00596aa4(local_c);
      puVar1 = puStack_24;
    }
    puStack_24 = puVar1;
    param_3 = param_3 + iVar2;
    if (param_3 < 0) {
      FUN_0040b9d0(PTR_LAB_00688f34,&local_10);
      FUN_00596aa4(local_10);
    }
    else if (0x7fffffd < param_3) {
      FUN_0040b9d0(PTR_LAB_0068907c,&local_14);
      FUN_00596aa4(local_14);
    }
    if (0 < param_3) {
      param_3 = param_3 + 1;
    }
    FUN_00404358(param_1,param_3 * 4);
    puVar1 = puStack_24;
    iVar2 = local_8;
    if (*param_1 != 0) {
      while (iVar2 = iVar2 + 1, iVar2 < param_3) {
        *(undefined4 *)(*param_1 + iVar2 * 4) = param_4;
      }
      *(int *)*param_1 = param_3 + -1;
    }
  }
  puStack_24 = puVar1;
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00596e77;
  puStack_28 = (undefined1 *)0x596e6f;
  thunk_FUN_004072fc(&local_14,3,puVar1);
  return;
}
