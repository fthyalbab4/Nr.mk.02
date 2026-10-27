// rea decompile_all
// name: FUN_004f4014
// address: 0x4f4014
// body: available
// range: 0x4f4014-0x4f40d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f4014(int param_1,undefined4 param_2,undefined1 param_3,char param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_1c;

  local_1c = 0;
  if (((param_5 != '\0') && (*(int *)(param_1 + 0x1e0) != 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x1e0) + 8) + -1, -1 < iVar3)) {
    do {
      if (param_4 != '\0') {
        uVar5 = 1;
        uVar4 = 1;
        uVar2 = FUN_0043b048(*(undefined4 *)(param_1 + 0x1e0),iVar3);
        local_1c = FUN_004f4014(uVar2,param_2,param_3,uVar4,uVar5);
      }
      if (local_1c == 0) {
        FUN_0043b048(*(undefined4 *)(param_1 + 0x1e0),iVar3);
        cVar1 = FUN_004f3f44();
        if (cVar1 != '\0') break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  if (((*(int *)(param_1 + 0x1dc) != 0) && (local_1c == 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x1dc) + 8) + -1, -1 < iVar3)) {
    do {
      FUN_0043b048(*(undefined4 *)(param_1 + 0x1dc),iVar3);
      cVar1 = FUN_004f3f44();
      if (cVar1 != '\0') {
        return 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return local_1c;
}
