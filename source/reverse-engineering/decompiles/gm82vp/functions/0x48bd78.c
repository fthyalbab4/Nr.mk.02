// rea decompile_all
// name: FUN_0048bd78
// address: 0x48bd78
// body: available
// range: 0x48bd78-0x48bdd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048bd78(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;

  uVar2 = FUN_00406268(param_1);
  FUN_0048bd04(param_1,param_1 + 0x278,0,uVar2);
  cVar1 = FUN_004c4988(param_1);
  if (cVar1 != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x278);
    uVar3 = FUN_004bbe04(param_1);
    uVar3 = *(uint *)(&DAT_006813b4 + (uVar3 & 0x7f) * 4);
    uVar4 = FUN_004c45dc(param_1);
    FUN_0040f050(uVar4,0x40b,uVar3 | 0xff,uVar2);
  }
  return;
}
