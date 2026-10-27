// rea decompile_all
// name: FUN_005f68a8
// address: 0x5f68a8
// body: available
// range: 0x5f68a8-0x5f6960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f68a8(int param_1)

{
  if (DAT_00688620 == 0) {
    DAT_00688620 = FUN_00405fac(&LAB_005f6524,1);
  }
  *(int *)(param_1 + 0x21c) = DAT_00688620;
  *(undefined1 **)(param_1 + 0x218) = &LAB_005f6c74;
  *(int *)(param_1 + 0x224) = DAT_00688620;
  *(undefined1 **)(param_1 + 0x220) = &LAB_005f6dc8;
  *(int *)(param_1 + 0x22c) = DAT_00688620;
  *(undefined1 **)(param_1 + 0x228) = &LAB_005f6f10;
  *(int *)(param_1 + 0xc4) = DAT_00688620;
  *(undefined1 **)(param_1 + 0xc0) = &LAB_005f6f78;
  *(int *)(param_1 + 0xd4) = DAT_00688620;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_005f6fcc;
  *(int *)(param_1 + 0x14c) = DAT_00688620;
  *(code **)(param_1 + 0x148) = FUN_005f7054;
  *(int *)(param_1 + 0x154) = DAT_00688620;
  *(code **)(param_1 + 0x150) = FUN_005f701c;
  *(int *)(param_1 + 0x2fc) = DAT_00688620;
  *(undefined1 **)(param_1 + 0x2f8) = &LAB_005f708c;
  FUN_005f6964();
  FUN_005f6c5c();
  return;
}
