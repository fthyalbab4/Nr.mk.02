// rea decompile_all
// name: FUN_005fbe50
// address: 0x5fbe50
// body: available
// range: 0x5fbe50-0x5fbe80 inclusive
// range: 0x5fbeb1-0x5fbfe7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fbe50(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;

  FUN_005fbdec();
  uVar1 = DAT_0068863c;
  if (param_1 != '\0') {
    uVar1 = DAT_00688638;
  }
  switch(param_2) {
  case 0:
    FUN_005f99c0(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 1:
    FUN_005f9fc0(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 2:
    FUN_005fa200(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 3:
    FUN_005fa490(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 4:
    FUN_005fa824(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 5:
    FUN_005fab3c(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 6:
    FUN_005faf58(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 7:
    FUN_005fb1d0(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 8:
    FUN_005fb448(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 9:
    FUN_005fb6c0(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 10:
    FUN_005fb90c(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 0xb:
    FUN_005fbb58(uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}
