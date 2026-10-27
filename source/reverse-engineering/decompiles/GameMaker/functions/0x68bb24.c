// rea decompile_all
// name: FUN_0068bb24
// address: 0x68bb24
// body: available
// range: 0x68bb24-0x68bc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068bb24(int param_1,undefined4 param_2,ushort param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;

  if ((param_3 & 8) != 0) {
    if ((((param_3 & 2) == 0) && ((param_3 & 1) == 0)) && ((param_3 & 4) == 0)) {
      iVar2 = *(int *)(param_1 + 0x648) + *(int *)(param_1 + 0x658);
      *(int *)(param_1 + 0x660) =
           ((param_5 - *(int *)(param_1 + 0x650)) / iVar2) * iVar2 + *(int *)(param_1 + 0x650);
      iVar2 = *(int *)(param_1 + 0x64c) + *(int *)(param_1 + 0x65c);
      lVar1 = (longlong)((param_4 - *(int *)(param_1 + 0x654)) / iVar2) * (longlong)iVar2;
      *(int *)(param_1 + 0x664) = (int)lVar1 + *(int *)(param_1 + 0x654);
      *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_1 + 0x648);
      *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x64c);
      FUN_0068b7d4(param_1,(int)((ulonglong)lVar1 >> 0x20));
    }
    else {
      if ((param_3 & 4) == 0) {
        if ((param_3 & 2) == 0) {
          iVar2 = *(int *)(param_1 + 0x648);
          iVar3 = *(int *)(param_1 + 0x64c);
        }
        else {
          iVar2 = 1;
          iVar3 = 1;
        }
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x61c) + 0x18);
        iVar3 = *(int *)(*(int *)(param_1 + 0x61c) + 0x14);
      }
      if (*(int *)(param_1 + 0x660) + iVar2 < param_5) {
        lVar1 = (longlong)((param_5 - *(int *)(param_1 + 0x660)) / iVar2 + 1) * (longlong)iVar2;
        param_2 = (undefined4)((ulonglong)lVar1 >> 0x20);
        *(int *)(param_1 + 0x668) = (int)lVar1;
      }
      else {
        *(int *)(param_1 + 0x668) = iVar2;
      }
      if (*(int *)(param_1 + 0x664) + iVar3 < param_4) {
        lVar1 = (longlong)((param_4 - *(int *)(param_1 + 0x664)) / iVar2 + 1) * (longlong)iVar3;
        param_2 = (undefined4)((ulonglong)lVar1 >> 0x20);
        *(int *)(param_1 + 0x66c) = (int)lVar1;
      }
      else {
        *(int *)(param_1 + 0x66c) = iVar3;
      }
      FUN_0068b7d4(param_1,param_2);
    }
  }
  return;
}
