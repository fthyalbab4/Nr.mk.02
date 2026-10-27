// rea decompile_all
// name: FUN_004c4414
// address: 0x4c4414
// body: available
// range: 0x4c4414-0x4c44a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4414(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  cVar1 = FUN_004c4988(param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_004bcb48(*(int *)(param_1 + 0x34),0xb034,1,0);
    }
    if (*(int *)(param_2 + 4) == 0) {
      InvalidateRect(*(HWND *)(param_1 + 600),(RECT *)0x0,
                     -(uint)((*(byte *)(param_1 + 0x50) & 0x40) == 0));
      FUN_004d08e8();
      cVar1 = FUN_004d09f4();
      if (cVar1 != '\0') {
        iVar2 = FUN_004c00dc(param_1);
        if (-1 < iVar2 + -1) {
          iVar5 = 0;
          do {
            iVar3 = FUN_004c00a0(param_1,iVar5);
            if ((*(byte *)(iVar3 + 0x52) & 4) != 0) {
              piVar4 = (int *)FUN_004c00a0(param_1,iVar5);
              (**(code **)(*piVar4 + 0x90))();
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
  }
  return;
}
