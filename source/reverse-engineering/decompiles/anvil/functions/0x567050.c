// rea decompile_all
// name: FUN_00567050
// address: 0x567050
// body: available
// range: 0x567050-0x5670c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567050(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,
                 double param_5,double param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;

  dVar4 = param_6 - param_4;
  dVar3 = param_5 - param_4;
  param_6 = param_6 + param_4;
  param_5 = param_5 + param_4;
  uVar1 = FUN_0056382c(param_2,param_2,param_3,DAT_00686448,DAT_0068644c);
  uVar2 = FUN_0056382c(param_1);
  FUN_00566ea8(uVar2,uVar1,param_3,param_5,param_6,dVar3,dVar4);
  return;
}
