// rea decompile_all
// name: FUN_005937c8
// address: 0x5937c8
// body: available
// range: 0x5937c8-0x593865 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005937c8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1c;

  if (param_4 != 0) {
    iVar3 = param_3 + 1;
    param_4 = param_4 + iVar3;
    local_1c = FUN_00590fb4(*(undefined4 *)(param_1 + 0x2a0),param_3);
    if (-1 < local_1c) {
      iVar4 = 0;
      if (*(int *)(param_1 + 0x2a0) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x2a0) + -4);
      }
      if (local_1c <= iVar4) {
        iVar4 = (iVar4 - local_1c) + 1;
        do {
          iVar1 = FUN_005903e0(*(undefined4 *)(param_1 + 0x2a0),local_1c);
          bVar2 = (byte)(iVar1 + -1);
          if (bVar2 < 2) {
            iVar3 = iVar3 + 1;
          }
          else if ((byte)((char)iVar1 - 4U) < 2) {
            iVar1 = thunk_FUN_00408c9c(param_2,CONCAT31((int3)((uint)(iVar1 + -1) >> 8),bVar2 - 2));
            *(undefined2 *)(iVar1 + -2 + iVar3 * 2) = *(undefined2 *)(param_1 + 0x2a4);
            iVar3 = iVar3 + 1;
          }
          if (param_4 <= iVar3) {
            return 1;
          }
          local_1c = local_1c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return 1;
}
