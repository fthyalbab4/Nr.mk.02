// rea decompile_all
// name: FUN_00514518
// address: 0x514518
// body: available
// range: 0x514518-0x514619 inclusive
// range: 0x51462e-0x514758 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00514518(undefined4 param_1,byte param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 local_8;

  if ((float)param_2 / 255.0 != 0.0) {
    uVar4 = FUN_004048c4();
    switch(uVar4) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    }
  }
  uVar1 = FUN_004048c4();
  uVar2 = FUN_004048c4();
  uVar3 = FUN_004048c4();
  local_8 = CONCAT13(param_4,CONCAT21(CONCAT11(uVar1,uVar2),uVar3));
  return local_8;
}
