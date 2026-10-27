// rea decompile_all
// name: FUN_006218d4
// address: 0x6218d4
// body: available
// range: 0x6218d4-0x62196f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006218d4(int param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 extraout_ECX;

  cVar2 = FUN_00620ff8(param_1);
  if (cVar2 != '\0') {
    puVar1 = (undefined4 *)(DAT_0085b3c4 + param_1 * 0x18);
    FUN_00621348(*puVar1,0xffffffff,extraout_ECX,(double)(int)puVar1[2] / (double)(int)puVar1[4],
                 (double)(int)puVar1[1] / (double)(int)puVar1[3],0,0,0,0,
                 ((double)(int)puVar1[2] + param_4) - 0.5,((double)(int)puVar1[1] + param_5) - 0.5,
                 param_4 - 0.5,param_5 - 0.5);
  }
  return;
}
