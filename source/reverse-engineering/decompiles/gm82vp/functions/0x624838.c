// rea decompile_all
// name: FUN_00624838
// address: 0x624838
// body: available
// range: 0x624838-0x624913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00624838(int param_1,undefined4 param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_14 [16];

  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  FUN_00409dfc(param_1 + 8,&DAT_00622864,1,*(undefined4 *)(param_1 + 4));
  uVar1 = FUN_00515b14(&DAT_00514cd4,1,param_2,0);
  *(undefined4 *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 4) * 4) = uVar1;
  if (param_3 != '\0') {
    FUN_0056e3b8(*(undefined4 *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 4) * 4),0);
  }
  if (param_4 != '\0') {
    FUN_0056e3dc(*(undefined4 *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 4) * 4));
  }
  if (param_3 != '\0') {
    FUN_0056e4f8(*(undefined4 *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 4) * 4));
  }
  uVar3 = 1;
  uVar1 = FUN_00623b30(param_1);
  uVar2 = FUN_00623b18(param_1);
  FUN_00515e38(*(undefined4 *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 4) * 4),uVar2,uVar1,
               uVar3);
  FUN_00624a08(param_1);
  FUN_00436ad0(0,0,0,local_14,0);
  FUN_00623c28(param_1,*(undefined1 *)(param_1 + 0x28),0,0,0,local_14);
  return;
}
