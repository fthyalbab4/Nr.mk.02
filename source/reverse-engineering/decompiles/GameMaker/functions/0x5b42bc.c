// rea decompile_all
// name: FUN_005b42bc
// address: 0x5b42bc
// body: available
// range: 0x5b42bc-0x5b4331 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b42bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  uVar1 = FUN_00404878();
  uVar2 = FUN_00404878();
  uVar3 = FUN_005a562c(param_6,param_5,param_4,0xff);
  uVar6 = 0;
  uVar4 = FUN_00404878();
  uVar5 = FUN_00404878();
  FUN_007028d0(param_1,uVar5,uVar4,uVar6,uVar3,uVar2,uVar1);
  return;
}
