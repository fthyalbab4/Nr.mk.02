// rea decompile_all
// name: FUN_005dad74
// address: 0x5dad74
// body: available
// range: 0x5dad74-0x5dae29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dad74(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  iVar3 = FUN_00409c3c(*(undefined4 *)(param_1 + 200),param_2,param_3,param_3);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar5 = 0;
    do {
      puVar1 = (undefined2 *)(*(int *)(param_1 + 200) + iVar5 * 0xc);
      *puVar1 = CONCAT11((char)*puVar1,(char)((ushort)*puVar1 >> 8));
      puVar1[1] = CONCAT11((char)puVar1[1],(char)((ushort)puVar1[1] >> 8));
      uVar4 = FUN_005d8d84(*(undefined4 *)(puVar1 + 2));
      *(undefined4 *)(puVar1 + 2) = uVar4;
      lVar2 = (longlong)
              (int)(uint)(byte)(&DAT_00687c6c)
                               [*(ushort *)(*(int *)(param_1 + 200) + 2 + iVar5 * 0xc)] *
              (longlong)*(int *)(*(int *)(param_1 + 200) + 4 + iVar5 * 0xc);
      uVar4 = (undefined4)((ulonglong)lVar2 >> 0x20);
      if ((uint)lVar2 < 4) {
        if ((puVar1[1] == 3) || (puVar1[1] == 8)) {
          if (*(uint *)(puVar1 + 2) < 2) {
            *(uint *)(puVar1 + 4) = (uint)CONCAT11((char)puVar1[4],(char)((ushort)puVar1[4] >> 8));
          }
          else {
            uVar4 = FUN_005d8d84(*(undefined4 *)(puVar1 + 4),uVar4);
            *(undefined4 *)(puVar1 + 4) = uVar4;
          }
        }
      }
      else {
        uVar4 = FUN_005d8d84(*(undefined4 *)(puVar1 + 4),uVar4);
        *(undefined4 *)(puVar1 + 4) = uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
