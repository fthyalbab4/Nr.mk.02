// rea decompile_all
// name: FUN_00427174
// address: 0x427174
// body: available
// range: 0x427174-0x427195 inclusive
// range: 0x4271ee-0x427306 inclusive
// range: 0x427325-0x42732e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4272ee (push 0x427307 followed by fs-segment stack chaining); handler 0x427307 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00427174(undefined2 *param_1)

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
    if (DAT_0067ce6c != '\0') {
      puStack_2c = (undefined1 *)0x42720e;
      FUN_00424264(1,4);
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  default:
    puStack_30 = &LAB_00427307;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    FUN_00426d68(param_1);
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
