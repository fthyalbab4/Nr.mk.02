// rea decompile_all
// name: FUN_0042a3d8
// address: 0x42a3d8
// body: available
// range: 0x42a3d8-0x42a429 inclusive
// range: 0x42a45a-0x42a582 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042a3d8(undefined2 *param_1,undefined2 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar1 = FUN_0042a054(*param_1);
  uVar4 = (uint)(byte)(&DAT_0067ce80)[uVar1 & 0xffff];
  uVar1 = FUN_0042a054(*param_2);
  uVar1 = (uint)(byte)(&DAT_0067ce80)[uVar1 & 0xffff];
  switch((&DAT_0067cebc)[uVar1 + uVar4 * 0xc]) {
  case 0:
    FUN_00424300();
    uVar3 = 1;
    break;
  case 1:
    uVar3 = FUN_0042a158(uVar4,uVar1);
    break;
  case 2:
    uVar3 = FUN_0042a16c(uVar4,uVar1,param_3);
    break;
  case 3:
    uVar3 = FUN_00425520(param_2);
    uVar2 = FUN_00425520(param_1);
    uVar3 = FUN_0042a260(uVar2,uVar3);
    break;
  case 4:
    FUN_00426d68(param_1);
    FUN_00426d68(param_2);
    uVar3 = FUN_0042a2e4();
    break;
  case 5:
    FUN_00427b7c(param_1);
    FUN_00427b7c(param_2);
    uVar3 = FUN_0042a33c();
    break;
  case 6:
    uVar3 = FUN_0042a36c(param_1,param_2);
    break;
  case 7:
    uVar1 = FUN_00426800(param_2);
    uVar4 = FUN_00426800(param_1);
    uVar3 = FUN_0042a260(uVar4 & 0x7f,uVar1 & 0x7f);
    break;
  case 8:
    FUN_00427580(param_1);
    FUN_00427580(param_2);
    uVar3 = FUN_0042a310();
    break;
  case 9:
    FUN_00426058(param_1);
    FUN_00426058(param_2);
    uVar3 = FUN_0042a274();
    break;
  case 10:
    FUN_004264e8(param_1);
    FUN_004264e8(param_2);
    uVar3 = FUN_0042a2b0();
    break;
  case 0xb:
    uVar3 = FUN_0042a080(param_1,param_2,param_3);
    break;
  default:
    FUN_00424300();
    uVar3 = 1;
  }
  return uVar3;
}
