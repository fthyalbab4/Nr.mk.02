// rea decompile_all
// name: FUN_00506f7c
// address: 0x506f7c
// body: available
// range: 0x506f7c-0x507000 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00506f7c(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  if (((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) || (**(int **)(param_1 + 0x1c) != 6)) {
    uVar1 = 0xfffffffe;
  }
  else {
    iVar2 = FUN_0050b334(1,param_2,param_3);
    if (iVar2 == *(int *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x30) = 1;
      uVar3 = param_3;
      if ((uint)(1 << ((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) & 0x1f)) <= param_3) {
        uVar3 = (1 << ((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) & 0x1f)) - 1;
        param_2 = param_2 + (param_3 - uVar3);
      }
      FUN_00507ee0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14),param_2,uVar3);
      **(undefined4 **)(param_1 + 0x1c) = 7;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  return uVar1;
}
