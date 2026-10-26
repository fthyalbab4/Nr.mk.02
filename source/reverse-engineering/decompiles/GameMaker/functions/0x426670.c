// rea decompile_all
// name: FUN_00426670
// address: 0x426670
// body: available
// range: 0x426670-0x426698 inclusive
// range: 0x4266cf-0x42679e inclusive
// range: 0x4267c6-0x4267d2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x426772 (push 0x42679f followed by fs-segment stack chaining); handler 0x42679f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00426670(undefined2 *param_1)

{
  uint extraout_EDX;
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint local_14;

  puStack_24 = &stack0xfffffffc;
  switch(*param_1) {
  case 0:
    local_14 = 0;
    break;
  case 1:
    if (DAT_00773e50 != '\0') {
      puStack_24 = (undefined1 *)0x4266f8;
      FUN_00424184(1,0x13);
    }
    local_14 = 0;
    break;
  default:
    puStack_28 = &LAB_0042679f;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    local_14 = FUN_004261e0(param_1);
    bVar1 = extraout_EDX < 0x7fffffff;
    if (extraout_EDX == 0x7fffffff) {
      bVar1 = local_14 != 0xffffffff;
    }
    if (!bVar1 && (extraout_EDX != 0x7fffffff || local_14 != 0xffffffff)) {
      local_14 = thunk_FUN_00404478();
    }
    *in_FS_OFFSET = uStack_2c;
    break;
  case 0xb:
    local_14 = (uint)(short)param_1[4];
    break;
  case 0x11:
    local_14 = (uint)*(byte *)(param_1 + 4);
    break;
  case 0x12:
    local_14 = (uint)(ushort)param_1[4];
    break;
  case 0x13:
    local_14 = *(uint *)(param_1 + 4);
    break;
  case 0x15:
    local_14 = *(uint *)(param_1 + 4);
  }
  return local_14;
}
