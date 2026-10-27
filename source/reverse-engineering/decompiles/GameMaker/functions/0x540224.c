// rea decompile_all
// name: FUN_00540224
// address: 0x540224
// body: available
// range: 0x540224-0x5402a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00540224(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  if (*(char *)(param_2 + 4) == '\0') {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_2 + 0x1c + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_00540224(param_1,iVar2,param_3,param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
  }
  else {
    puVar1 = (undefined1 *)(param_3 + *param_4 * 4);
    if (*(int *)(param_2 + 8) == 0) {
      puVar1[2] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
    }
    else {
      puVar1[2] = (char)(*(int *)(param_2 + 0xc) / *(int *)(param_2 + 8));
      puVar1[1] = (char)(*(int *)(param_2 + 0x10) / *(int *)(param_2 + 8));
      *puVar1 = (char)(*(int *)(param_2 + 0x14) / *(int *)(param_2 + 8));
    }
    puVar1[3] = 0;
    *param_4 = *param_4 + 1;
  }
  return;
}
