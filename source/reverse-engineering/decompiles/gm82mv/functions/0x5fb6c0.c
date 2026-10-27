// rea decompile_all
// name: FUN_005fb6c0
// address: 0x5fb6c0
// body: available
// range: 0x5fb6c0-0x5fb8f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fb6c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_005f9914();
  if (param_2 == 0) {
    FUN_0058bc80(DAT_00850e90,10);
    FUN_0058bd10(DAT_00850e90);
    FUN_0058bd80(DAT_00850e90);
    FUN_0058c3fc(DAT_00850e90);
    uVar1 = FUN_004048b8();
    uVar2 = FUN_004048b8();
    FUN_0058bdc8(DAT_00850e90,uVar2,uVar1);
    FUN_0058d400(param_1,DAT_00850e90,param_3,1,param_4,param_5,param_6,param_7);
  }
  else if (param_2 == 2) {
    FUN_0058bc80(DAT_00850e98,10);
    FUN_0058bd10(DAT_00850e98);
    FUN_0058bd80(DAT_00850e98);
    FUN_0058c3fc(DAT_00850e98);
    uVar1 = FUN_004048b8();
    uVar2 = FUN_004048b8();
    FUN_0058bdc8(DAT_00850e98,uVar2,uVar1);
    FUN_0058d400(param_1,DAT_00850e98,param_3,1,param_4,param_5,param_6,param_7);
  }
  else {
    FUN_0058bc80(DAT_00850e94,10);
    FUN_0058bd10(DAT_00850e94);
    FUN_0058bd80(DAT_00850e94);
    FUN_0058c3fc(DAT_00850e94);
    uVar1 = FUN_004048b8();
    uVar2 = FUN_004048b8();
    FUN_0058bdc8(DAT_00850e94,uVar2,uVar1);
    FUN_0058d400(param_1,DAT_00850e94,param_3,1,param_4,param_5,param_6,param_7);
  }
  return;
}
