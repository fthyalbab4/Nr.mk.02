// rea decompile_all
// name: FUN_0058a414
// address: 0x58a414
// body: available
// range: 0x58a414-0x58a4b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0058a414(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;

  if ((param_4 < *(int *)(param_3 + 8)) && (*(int *)PTR_DAT_00688c4c == -1)) {
    iVar2 = FUN_0060fdc0(param_3,param_4);
    if (*(int *)(iVar2 + 0xc) == 1) {
      uVar1 = FUN_0058a3b8(param_1,param_2,param_3,param_4);
    }
    else {
      iVar2 = FUN_0060fdc0(param_3,param_4);
      if (*(int *)(iVar2 + 0xc) == 5) {
        uVar1 = FUN_0058a294(param_1,param_2,param_3,param_4);
      }
      else {
        iVar2 = FUN_0060fdc0(param_3,param_4);
        if (*(char *)(iVar2 + 0x11) == '\0') {
          uVar1 = FUN_00589f98(param_1,param_2,param_3,param_4);
        }
        else {
          uVar1 = FUN_0058a0e8(param_1,param_2,param_3,param_4);
        }
      }
    }
  }
  else {
    uVar1 = 10000000;
  }
  if (*(int *)PTR_DAT_00688c4c != -1) {
    uVar1 = 10000000;
  }
  return uVar1;
}
