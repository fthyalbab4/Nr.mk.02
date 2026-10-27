// rea decompile_all
// name: FUN_00754198
// address: 0x754198
// body: available
// range: 0x754198-0x7541f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00754198(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  if ((*(char *)(param_1 + 0x20) != '\0') &&
     (iVar1 = FUN_00754024(param_1,param_2,param_3,param_3), -1 < iVar1 + -1)) {
    iVar4 = 0;
    do {
      iVar2 = FUN_00754010(param_1,iVar4);
      *param_3 = iVar2;
      if ((*(uint *)(*param_3 + 0xc) <= param_2) &&
         (uVar3 = *(uint *)(*param_3 + 0xc) + *(int *)(*param_3 + 0x10), param_2 < uVar3)) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *param_3 = 0;
  return 0;
}
