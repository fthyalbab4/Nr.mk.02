// rea decompile_all
// name: FUN_00518dd8
// address: 0x518dd8
// body: available
// range: 0x518dd8-0x518e7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518dd8(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if ((((((*(byte *)(param_1 + 900) & 8) == 0) && (*(int *)(DAT_007882ec + 0x44) != 0)) &&
       (*(int *)(*(int *)(DAT_007882ec + 0x44) + 0x2b4) != 0)) &&
      (param_1 != *(int *)(DAT_007882ec + 0x44))) &&
     ((*(char *)(param_1 + 0x29e) == '\x01' ||
      (*(char *)(*(int *)(DAT_007882ec + 0x44) + 0x29e) != '\x02')))) {
    uVar2 = 0;
    if ((((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (*(int *)(param_1 + 0x2b4) != 0)) &&
       ((*(char *)(*(int *)(param_1 + 0x2b4) + 100) != '\0' ||
        (*(char *)(param_1 + 0x29e) == '\x01')))) {
      uVar2 = *(undefined4 *)(param_1 + 0x2b4);
    }
    uVar1 = *(undefined4 *)(*(int *)(DAT_007882ec + 0x44) + 0x2b4);
    if (param_2 == '\0') {
      FUN_004de5e4(uVar1,uVar2);
    }
    else {
      FUN_004de5c8(uVar1,uVar2);
    }
  }
  return;
}
