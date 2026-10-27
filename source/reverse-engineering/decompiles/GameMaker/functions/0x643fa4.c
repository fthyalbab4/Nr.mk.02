// rea decompile_all
// name: FUN_00643fa4
// address: 0x643fa4
// body: available
// range: 0x643fa4-0x6440be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00643fa4(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)(param_1 + 0x744) = param_3;
  *(undefined4 *)(param_1 + 0x748) = param_4;
  if ((DAT_0077f108 == 0) && ((param_2 & 8) == 0)) {
    FUN_006440c0(param_1,0,param_2,param_4,param_3);
  }
  if ((DAT_0077f108 == 1) && ((param_2 & 0x10) == 0)) {
    FUN_006440c0(param_1,1,param_2,param_4,param_3);
  }
  if (DAT_0077f108 == -1) {
    if (((param_2 & 4) != 0) &&
       ((((iVar1 = *(int *)(param_1 + 0x738), iVar1 == 1 || (iVar1 == 8)) || (iVar1 == 4)) ||
        ((iVar1 == 3 || (iVar1 == 0x12)))))) {
      if (DAT_0077f10c == '\0') {
        if (*(int *)(param_1 + 0x768) != 0) {
          FUN_00405a7c();
        }
        puVar3 = (undefined4 *)FUN_00405a4c(&PTR_LAB_00648438,1);
        *(undefined4 **)(param_1 + 0x768) = puVar3;
        (**(code **)*puVar3)();
      }
      DAT_0077f10c = '\x01';
    }
    if (((param_2 & 4) == 0) && (DAT_0077f10c != '\0')) {
      FUN_00643c30(param_1,*(undefined4 *)(param_1 + 0x738));
      DAT_0077f10c = '\0';
    }
  }
  piVar2 = *(int **)(param_1 + 0x768);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,DAT_0077f108,param_2,param_4,param_3);
  }
  FUN_00645298(param_1);
  return;
}
