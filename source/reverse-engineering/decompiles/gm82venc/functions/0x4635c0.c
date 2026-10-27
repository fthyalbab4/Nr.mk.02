// rea decompile_all
// name: FUN_004635c0
// address: 0x4635c0
// body: available
// range: 0x4635c0-0x463642 inclusive
// range: 0x46364a-0x46365f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x463607 (push 0x463643 followed by fs-segment stack chaining); handler 0x463643 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004635c0(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  int *local_8;

  iVar1 = param_1[10];
  if (((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0x14) == 0)) && (*(int *)(iVar1 + 0x6c) != 0)
     ) {
    puStack_18 = (undefined1 *)0x0;
    puStack_1c = (undefined1 *)0x0;
    uStack_20 = 0x4635ed;
    local_8 = param_1;
    FUN_0043c854(*(undefined4 *)(iVar1 + 0x6c));
    local_14 = local_8[4];
    local_10 = local_8[5];
    puStack_1c = &LAB_00463643;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    local_8[4] = 0;
    local_8[5] = 0;
    puStack_18 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x5c))(local_8,*(undefined4 *)(local_8[10] + 0x6c));
    *in_FS_OFFSET = uStack_20;
    local_8[4] = local_14;
    local_8[5] = local_10;
    return;
  }
  iVar1 = param_1[10];
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}
