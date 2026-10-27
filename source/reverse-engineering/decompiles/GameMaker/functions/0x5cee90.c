// rea decompile_all
// name: FUN_005cee90
// address: 0x5cee90
// body: available
// range: 0x5cee90-0x5ceed6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cee90(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 *local_214;
  undefined1 auStack_210 [524];

  local_214 = auStack_210;
  uStack_218 = 0;
  uStack_21c = 0;
  uStack_224 = 0;
  uStack_220 = param_1;
  uVar1 = SHGetFolderPathW();
  if ((uVar1 & 0x80000000) == 0) {
    FUN_004080c8(param_2,&uStack_224,0x105);
  }
  else {
    FUN_00407eb8(param_2,0);
  }
  return;
}
