// rea decompile_all
// name: FUN_00629c60
// address: 0x629c60
// body: available
// range: 0x629c60-0x629cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629c60(undefined4 *param_1)

{
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined1 *local_c;

  local_c = (undefined1 *)&local_4c;
  local_4c = *param_1;
  uStack_48 = param_1[1];
  uStack_44 = param_1[2];
  uStack_40 = param_1[3];
  uStack_3c = param_1[4];
  local_38 = *(undefined4 *)PTR_DAT_00688c5c;
  uStack_34 = *(undefined4 *)(PTR_DAT_00688c5c + 4);
  uStack_30 = *(undefined4 *)(PTR_DAT_00688c5c + 8);
  uStack_2c = *(undefined4 *)(PTR_DAT_00688c5c + 0xc);
  local_28 = 0x10;
  local_24 = PTR_DAT_00688e0c;
  local_20 = *(undefined4 *)PTR_DAT_00689298;
  uStack_1c = *(undefined4 *)(PTR_DAT_00689298 + 4);
  uStack_18 = *(undefined4 *)(PTR_DAT_00689298 + 8);
  uStack_14 = *(undefined4 *)(PTR_DAT_00689298 + 0xc);
  local_10 = 0x14;
  FUN_00629914(&local_38,2);
  return;
}
