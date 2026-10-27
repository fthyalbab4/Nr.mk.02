// rea decompile_all
// name: FUN_00624764
// address: 0x624764
// body: available
// range: 0x624764-0x624834 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00624764(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 char param_6)

{
  undefined4 uVar1;
  undefined1 local_18 [16];
  undefined4 local_8;

  local_8 = param_2;
  FUN_00624edc(param_1);
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  FUN_00409dfc(param_1 + 8,&DAT_00622864,1,1);
  uVar1 = FUN_00515b14(&DAT_00514cd4,1,local_8,param_3 != 2);
  **(undefined4 **)(param_1 + 8) = uVar1;
  if (param_3 == 1) {
    FUN_0056e3b8(**(undefined4 **)(param_1 + 8),0);
  }
  if (param_6 != '\0') {
    FUN_0056e3dc(**(undefined4 **)(param_1 + 8));
  }
  if (param_3 == 1) {
    FUN_0056e4f8(**(undefined4 **)(param_1 + 8));
  }
  if (param_3 == -1) {
    FUN_0056e4bc(**(undefined4 **)(param_1 + 8));
  }
  FUN_00624a08(param_1);
  FUN_00436ad0(0,0,0,local_18,0);
  FUN_00623c28(param_1,0,0,0,0,local_18);
  return;
}
