// rea decompile_all
// name: FUN_004e5d54
// address: 0x4e5d54
// body: available
// range: 0x4e5d54-0x4e5dbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e5d54(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if ((*(byte *)(param_1 + 7) & 2) == 0) {
    iVar1 = *(int *)(param_2 + 8);
    iVar2 = param_1[0x1c];
    if (*(int *)(iVar2 + 0x14) != 0) {
      *(int *)(iVar1 + 0x18) = *(int *)(iVar2 + 0x14);
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar2 + 0x10);
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar2 + 0xc);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      *(int *)(iVar1 + 0x24) = *(int *)(iVar2 + 8);
    }
    (**(code **)(*param_1 + 0x3c))(param_1,iVar1 + 0x18,iVar1 + 0x1c,iVar1 + 0x24,iVar1 + 0x20);
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}
