// rea decompile_all
// name: FUN_00586fa0
// address: 0x586fa0
// body: available
// range: 0x586fa0-0x58702d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00586fa0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = *param_2;
  if (iVar1 < 7) {
    if (iVar1 == 5) {
      FUN_00409360(param_3,param_2 + 4,&DAT_00615f70);
      return 0;
    }
    if (iVar1 == 6) {
      uVar2 = FUN_0058661c(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    if (iVar1 - 7U < 2) {
      uVar2 = FUN_00586c30(param_1,param_2,param_3);
      return uVar2;
    }
    if (iVar1 == 0x3f2) {
      uVar2 = FUN_00586eb0(param_1,param_2,param_3);
      return uVar2;
    }
    if (iVar1 == 0x3f3) {
      uVar2 = FUN_00586ef4(param_1,param_2,param_3);
      return uVar2;
    }
  }
  FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),param_2[0xc],L"(Sub-)expression expected.");
  return 0xffffffff;
}
