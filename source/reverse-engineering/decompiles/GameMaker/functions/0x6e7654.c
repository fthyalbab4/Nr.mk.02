// rea decompile_all
// name: FUN_006e7654
// address: 0x6e7654
// body: available
// range: 0x6e7654-0x6e774f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e7654(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined1 param_5,
                 undefined1 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_10;
  undefined1 uStack_5;

  uStack_5 = (char)((uint)param_2 >> 0x18);
  if ((param_4 < 0) || (*(int *)(param_1 + 4) <= param_4)) {
    local_10 = *(int *)(param_1 + 4);
    if (-1 < local_10 + -1) {
      iVar5 = 0;
      do {
        uVar3 = FUN_005a5438(param_3);
        uVar2 = param_7;
        uVar4 = FUN_005a5438(param_2);
        iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar5 * 4);
        uVar2 = FUN_005b4788(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),uVar4,uVar2,uVar3
                            );
        if (uStack_5 != -1) {
          FUN_005b08f4(uVar2,uStack_5,0);
        }
        FUN_005b1c18(*(undefined4 *)(*(int *)(param_1 + 8) + iVar5 * 4),uVar2,0,param_6,param_5);
        FUN_00405a7c(uVar2);
        iVar5 = iVar5 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  else {
    uVar2 = FUN_005a5438(param_3);
    uVar3 = FUN_005a5438(param_2);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + param_4 * 4);
    uVar2 = FUN_005b4788(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8),uVar3,param_7,uVar2);
    if (uStack_5 != -1) {
      FUN_005b08f4(uVar2,uStack_5,0);
    }
    FUN_005b1c18(*(undefined4 *)(*(int *)(param_1 + 8) + param_4 * 4),uVar2,0,param_6,param_5);
    FUN_00405a7c(uVar2);
  }
  return;
}
