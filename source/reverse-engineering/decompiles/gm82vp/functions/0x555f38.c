// rea decompile_all
// name: FUN_00555f38
// address: 0x555f38
// body: available
// range: 0x555f38-0x555fd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00555f38(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar1 = FUN_00555f1c(param_1);
  if (-1 < iVar1 + -1) {
    iVar5 = 0;
    do {
      iVar2 = FUN_00555f08(param_1,iVar5);
      if (*(uint *)(iVar2 + 8) == param_2) {
        uVar3 = FUN_00555f08(param_1,iVar5);
        *param_3 = uVar3;
        return 1;
      }
      if (((1 < iVar5) && (iVar4 = FUN_00555f08(param_1,iVar5 + -1), *(uint *)(iVar4 + 8) < param_2)
          ) && (param_2 < *(uint *)(iVar2 + 8))) {
        uVar3 = FUN_00555f08(param_1,iVar5 + -1);
        *param_3 = uVar3;
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *param_3 = 0;
  return 0;
}
