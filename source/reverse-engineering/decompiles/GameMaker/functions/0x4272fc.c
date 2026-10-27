// rea decompile_all
// name: FUN_004272fc
// address: 0x4272fc
// body: available
// range: 0x4272fc-0x42731d inclusive
// range: 0x427376-0x42748e inclusive
// range: 0x4274ad-0x4274b6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x427476 (push 0x42748f followed by fs-segment stack chaining); handler 0x42748f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004272fc(undefined2 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;

  puStack_2c = &stack0xfffffffc;
  switch(*param_1) {
  case 0:
    break;
  case 1:
    if (DAT_00773e50 != '\0') {
      puStack_2c = (undefined1 *)0x427396;
      FUN_00424184(1,4);
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  default:
    puStack_30 = &LAB_0042748f;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    FUN_00426ef0(param_1);
    *in_FS_OFFSET = uStack_34;
    break;
  case 0xb:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
  }
  return;
}
