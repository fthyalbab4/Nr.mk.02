// rea decompile_all
// name: FUN_0062d390
// address: 0x62d390
// body: available
// range: 0x62d390-0x62d3fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062d390(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 uVar3;

  iVar1 = FUN_004048b8();
  if ((extraout_EDX == 0 && iVar1 == 1) ||
     (iVar1 = FUN_004048b8(), extraout_EDX_00 == 0 && iVar1 == 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  iVar1 = FUN_004048b8();
  if ((extraout_EDX_01 == 0 && iVar1 == 0) ||
     (iVar1 = FUN_004048b8(), extraout_EDX_02 == 0 && iVar1 == 2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  FUN_005b7888(param_1,uVar3,uVar2);
  return;
}
