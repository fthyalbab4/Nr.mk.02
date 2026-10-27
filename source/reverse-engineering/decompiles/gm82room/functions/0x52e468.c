// rea decompile_all
// name: FUN_0052e468
// address: 0x52e468
// body: available
// range: 0x52e468-0x52e5de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e468(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;

  *(undefined1 *)(param_1 + 0x314) = 0;
  iVar3 = FUN_00530654(*(undefined4 *)(param_1 + 4),param_2,param_3,param_3);
  if (0 < *(int *)(iVar3 + 8)) {
    uVar4 = FUN_00530654(*(undefined4 *)(param_1 + 4));
    uVar4 = FUN_0052dfb0(&DAT_0052db3c,1,uVar4);
    uVar7 = 0;
    iVar3 = FUN_00524d94(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c));
    cVar1 = (char)uVar7;
    if (-1 < iVar3 + -1) {
      iVar8 = 0;
      do {
        iVar5 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar8);
        if (*(int *)(*(int *)(iVar5 + 0x20) + 8) == 0) {
          FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar8);
          cVar1 = FUN_00527f54();
          if (cVar1 == '\0') {
            uVar7 = 1;
            uVar6 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar8);
            cVar1 = FUN_0052e0d4(uVar4,uVar6);
            if ((cVar1 == '\0') && (*(char *)(param_1 + 0x314) == '\0')) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
            *(undefined1 *)(param_1 + 0x314) = uVar2;
          }
        }
        cVar1 = (char)uVar7;
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (cVar1 == '\0') {
      FUN_00405fdc(uVar4);
    }
    else {
      FUN_00438d04(*(undefined4 *)(param_1 + 8),uVar4);
    }
  }
  iVar3 = FUN_00524d94(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c));
  if (-1 < iVar3 + -1) {
    iVar8 = 0;
    do {
      iVar5 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar8);
      if (0 < *(int *)(*(int *)(iVar5 + 0x20) + 8)) {
        FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar8);
        cVar1 = FUN_00527f54();
        if (cVar1 == '\0') {
          iVar5 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar8);
          uVar4 = FUN_0052dfb0(&DAT_0052db3c,1,*(undefined4 *)(iVar5 + 0x20));
          FUN_00438d04(*(undefined4 *)(param_1 + 8),uVar4);
          uVar7 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar8);
          cVar1 = FUN_0052e0d4(uVar4,uVar7);
          if ((cVar1 == '\0') && (*(char *)(param_1 + 0x314) == '\0')) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
          *(undefined1 *)(param_1 + 0x314) = uVar2;
        }
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
