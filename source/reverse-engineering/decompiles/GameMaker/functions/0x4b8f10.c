// rea decompile_all
// name: FUN_004b8f10
// address: 0x4b8f10
// body: available
// range: 0x4b8f10-0x4b8f20 inclusive
// range: 0x4b8f35-0x4b8f7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8f10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  switch(param_2) {
  case 0:
    uVar3 = 4;
    break;
  case 1:
    uVar3 = 8;
    break;
  case 2:
    uVar3 = 1;
    break;
  case 3:
    uVar3 = 2;
    break;
  case 4:
    uVar3 = 0x20;
    break;
  default:
    uVar3 = 0;
  }
  uVar4 = uVar3;
  if ((char)param_3 == '\0') {
    uVar4 = 0;
  }
  uVar1 = FUN_004b920c(param_1,param_2,param_3,uVar3);
  uVar2 = FUN_004b8b7c(param_1);
  FUN_0040fa48(uVar2,uVar1,uVar4,uVar3);
  return;
}
