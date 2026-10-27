// rea decompile_all
// name: FUN_00645a70
// address: 0x645a70
// body: available
// range: 0x645a70-0x645b72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00645a70(int param_1,int param_2,ushort param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;

  if (param_2 == *(int *)(param_1 + 0x484)) {
    iVar2 = *(int *)(param_1 + 0x724);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x728);
  }
  if (((((param_3 & 8) != 0) || ((param_3 & 0x10) != 0)) && (-1 < param_5)) &&
     (((param_5 < *(int *)(iVar2 + 4) && (-1 < param_4)) && (param_4 < *(int *)(iVar2 + 8))))) {
    if ((param_3 & 8) != 0) {
      uVar1 = FUN_0070284c(iVar2,param_5,param_4);
      *(undefined4 *)(param_1 + 0x715) = uVar1;
    }
    if ((param_3 & 0x10) != 0) {
      uVar1 = FUN_0070284c(iVar2,param_5,param_4);
      *(undefined4 *)(param_1 + 0x719) = uVar1;
    }
    *(undefined1 *)(param_1 + 0x718) = *(undefined1 *)(param_1 + 0x720);
    *(undefined1 *)(param_1 + 0x71c) = *(undefined1 *)(param_1 + 0x720);
    uVar1 = FUN_005a5438(*(undefined4 *)(param_1 + 0x715));
    FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x470) + 0x1b4),uVar1);
    uVar1 = FUN_005a5438(*(undefined4 *)(param_1 + 0x719));
    FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x474) + 0x1b4),uVar1);
    if (*(int **)(param_1 + 0x768) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x768) + 8))();
    }
  }
  return;
}
