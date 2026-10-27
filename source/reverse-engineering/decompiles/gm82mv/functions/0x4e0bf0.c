// rea decompile_all
// name: FUN_004e0bf0
// address: 0x4e0bf0
// body: available
// range: 0x4e0bf0-0x4e0c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e0bf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if (param_3 != param_2) {
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x278) + 0x1e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x288) + 0x1e) = 1;
    }
    FUN_004e01ac(*(undefined4 *)(param_1 + 0x278),0);
    FUN_004e01ac(*(undefined4 *)(param_1 + 0x288),0);
    if (*(char *)(param_1 + 0x274) == '\0') {
      iVar1 = *(int *)(param_1 + 0x278);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
        FUN_004e02f4(iVar1,iVar2);
      }
      iVar1 = *(int *)(param_1 + 0x288);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
        FUN_004e02f4(iVar1,iVar2);
      }
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x278) + 0x1e) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x288) + 0x1e) = 0;
  return;
}
