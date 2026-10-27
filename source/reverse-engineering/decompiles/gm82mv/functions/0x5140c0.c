// rea decompile_all
// name: FUN_005140c0
// address: 0x5140c0
// body: available
// range: 0x5140c0-0x514140 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5140e1 (push 0x514141 followed by fs-segment stack chaining); handler 0x514141 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005140c0(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint *in_FS_OFFSET;
  uint uStack_24;
  uint uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x5140d6;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_1c = &LAB_00514141;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_20;
  puStack_18 = &stack0xfffffffc;
  if ((-1 < param_1) && (puStack_18 = &stack0xfffffffc, param_1 < DAT_006840c8)) {
    puStack_18 = &stack0xfffffffc;
    if (*(int *)(DAT_006840c0 + param_1 * 4) == 0) {
      puStack_18 = &stack0xfffffffc;
      uVar2 = FUN_00513894(&DAT_005134b8,1);
      *(undefined4 *)(DAT_006840c0 + param_1 * 4) = uVar2;
    }
    uStack_24 = (uint)param_4;
    FUN_00513a14(*(undefined4 *)(DAT_006840c0 + param_1 * 4),local_8,param_3);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00514148;
  uStack_20 = 0x514140;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
