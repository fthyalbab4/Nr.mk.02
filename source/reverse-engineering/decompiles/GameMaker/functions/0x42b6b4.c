// rea decompile_all
// name: FUN_0042b6b4
// address: 0x42b6b4
// body: available
// range: 0x42b6b4-0x42b705 inclusive
// range: 0x42b736-0x42b85e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042b6b4(undefined2 *param_1,undefined2 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar1 = FUN_0042a690(*param_1);
  uVar4 = (uint)(byte)(&DAT_00773e64)[uVar1 & 0xffff];
  uVar1 = FUN_0042a690(*param_2);
  uVar1 = (uint)(byte)(&DAT_00773e64)[uVar1 & 0xffff];
  switch((&DAT_00773f30)[uVar1 + uVar4 * 0xc]) {
  case 0:
    FUN_00424220();
    uVar3 = 1;
    break;
  case 1:
    uVar3 = FUN_0042b434(uVar4,uVar1);
    break;
  case 2:
    uVar3 = FUN_0042b448(uVar4,uVar1,param_3);
    break;
  case 3:
    uVar3 = FUN_004256a8(param_2);
    uVar2 = FUN_004256a8(param_1);
    uVar3 = FUN_0042b53c(uVar2,uVar3);
    break;
  case 4:
    FUN_00426ef0(param_1);
    FUN_00426ef0(param_2);
    uVar3 = FUN_0042b5c0();
    break;
  case 5:
    FUN_00427d04(param_1);
    FUN_00427d04(param_2);
    uVar3 = FUN_0042b618();
    break;
  case 6:
    uVar3 = FUN_0042b648(param_1,param_2);
    break;
  case 7:
    uVar1 = FUN_00426988(param_2);
    uVar4 = FUN_00426988(param_1);
    uVar3 = FUN_0042b53c(uVar4 & 0x7f,uVar1 & 0x7f);
    break;
  case 8:
    FUN_00427708(param_1);
    FUN_00427708(param_2);
    uVar3 = FUN_0042b5ec();
    break;
  case 9:
    FUN_004261e0(param_1);
    FUN_004261e0(param_2);
    uVar3 = FUN_0042b550();
    break;
  case 10:
    FUN_00426670(param_1);
    FUN_00426670(param_2);
    uVar3 = FUN_0042b58c();
    break;
  case 0xb:
    uVar3 = FUN_0042b35c(param_1,param_2,param_3);
    break;
  default:
    FUN_00424220();
    uVar3 = 1;
  }
  return uVar3;
}
