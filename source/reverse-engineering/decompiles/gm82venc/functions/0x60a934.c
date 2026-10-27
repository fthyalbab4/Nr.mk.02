// rea decompile_all
// name: FUN_0060a934
// address: 0x60a934
// body: available
// range: 0x60a934-0x60a9bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0060a934(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00409c34(*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == *(int *)(param_1 + 0x68)) {
    FUN_00409dfc(param_1 + 0x6c,&DAT_006080a4,1,*(int *)(param_1 + 0x68) + 5);
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  DAT_00850eb4 = DAT_00850eb4 + 1;
  uVar2 = FUN_0060d2cc(&DAT_0060b63c,1,DAT_00850eb4,param_2,param_4,param_5,param_6,param_7);
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + -4 + *(int *)(param_1 + 0x68) * 4) = uVar2;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + -4 + *(int *)(param_1 + 0x68) * 4);
  FUN_00609184(param_1,uVar2);
  FUN_00609334(param_1,uVar2);
  return uVar2;
}
