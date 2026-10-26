// rea decompile_all
// name: FUN_004ebf98
// address: 0x4ebf98
// body: available
// range: 0x4ebf98-0x4ec063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ebf98(int param_1,undefined2 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = 0;
  *param_4 = 1;
  iVar3 = 0;
  if (*(int *)(DAT_0068f2ec + 0x60) != 0) {
    iVar3 = FUN_004df914(*(int *)(DAT_0068f2ec + 0x60),0);
    if ((iVar3 != 0) && (*(short *)(iVar3 + 0x30a) != 0)) {
      uVar2 = (**(code **)(iVar3 + 0x308))(*(undefined4 *)(iVar3 + 0x30c),param_2,param_3,param_4);
    }
  }
  if ((char)uVar2 == '\0') {
    iVar1 = *(int *)(DAT_0068f2ec + 100);
    if ((((iVar1 != 0) && (iVar3 != iVar1)) && (iVar1 != 0)) && (*(short *)(iVar1 + 0x30a) != 0)) {
      uVar2 = (**(code **)(iVar1 + 0x308))(*(undefined4 *)(iVar1 + 0x30c),param_2,param_3,param_4);
    }
    if (((char)uVar2 == '\0') && (*(short *)(param_1 + 0x122) != 0)) {
      uVar2 = (**(code **)(param_1 + 0x120))
                        (*(undefined4 *)(param_1 + 0x124),param_2,param_3,param_4);
    }
  }
  return uVar2;
}
