// rea decompile_all
// name: FUN_0060756c
// address: 0x60756c
// body: available
// range: 0x60756c-0x607867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060756c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;

  cVar1 = FUN_00590338();
  if ((cVar1 == '\0') && (cVar1 = FUN_005f63dc(), cVar1 == '\0')) {
    if ((*PTR_PTR_00689580 != '\0') && (iVar2 = FUN_00561fd4(), *(char *)(iVar2 + 0x29d) == '\0')) {
      return;
    }
    cVar1 = FUN_006065a0();
    if (cVar1 == '\0') {
      iVar2 = FUN_00561fd4();
      if (*(char *)(iVar2 + 0x29d) == '\0') {
        FUN_005f6964();
      }
      iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
      if (-1 < iVar2 + -1) {
        iVar9 = 0;
        do {
          iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
          *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar3 + 0x50);
          *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar3 + 0x54);
          *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x58);
          *(undefined4 *)(iVar3 + 0x7c) = *(undefined4 *)(iVar3 + 0x5c);
          FUN_0060d258();
          iVar9 = iVar9 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_005f7bbc(1);
      if (((((*(int *)PTR_DAT_00688c4c == -1) && (FUN_005f84a8(), *(int *)PTR_DAT_00688c4c == -1))
           && (FUN_005f7ae4(), *(int *)PTR_DAT_00688c4c == -1)) &&
          ((FUN_005f7340(), *(int *)PTR_DAT_00688c4c == -1 && (*(int *)PTR_DAT_00688c4c == -1)))) &&
         ((FUN_005f7744(), *(int *)PTR_DAT_00688c4c == -1 &&
          (FUN_005f7bbc(0), *(int *)PTR_DAT_00688c4c == -1)))) {
        if ((DAT_00688654 & 0xfffff) == 0x673) {
          DAT_0068865c = FUN_006072a8();
        }
        iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
        if (-1 < iVar2 + -1) {
          iVar9 = 0;
          do {
            uVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
            FUN_0060dea4(uVar4);
            cVar1 = FUN_0060e144(uVar4);
            if (cVar1 != '\0') {
              uVar10 = 8;
              uVar5 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
              uVar6 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
              FUN_0058a738(uVar6,uVar5,7,uVar10);
            }
            FUN_0060ddec(uVar4);
            iVar9 = iVar9 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_005f7e58();
        if (((*(int *)PTR_DAT_00688c4c == -1) && (FUN_005bd7d8(), *(int *)PTR_DAT_00688c4c == -1))
           && (FUN_005f7bbc(2), *(int *)PTR_DAT_00688c4c == -1)) {
          FUN_0058e6e4();
          FUN_0060ab60(*(undefined4 *)PTR_DAT_0068939c);
          if (*PTR_DAT_006891d0 != '\0') {
            FUN_0058f9f8();
          }
          FUN_0060ace4(*(undefined4 *)PTR_DAT_0068939c);
          iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
          if (-1 < iVar2 + -1) {
            iVar9 = 0;
            do {
              iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
              *(double *)(iVar3 + 0x10) = *(double *)(iVar3 + 0x10) + *(double *)(iVar3 + 0x18);
              iVar7 = FUN_004102e4();
              iVar8 = FUN_0060d1e0(iVar3);
              if (iVar8 <= iVar7) {
                iVar7 = FUN_0060d1e0(iVar3);
                *(double *)(iVar3 + 0x10) = *(double *)(iVar3 + 0x10) - (double)iVar7;
                uVar10 = 7;
                uVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
                uVar5 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
                FUN_0058a738(uVar5,uVar4,7,uVar10);
              }
              iVar9 = iVar9 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          DAT_00688654 = DAT_00688654 + 1;
          *(int *)PTR_DAT_00688a0c = *(int *)PTR_DAT_00688a0c + 1;
          if (*PTR_DAT_00688de8 != '\0') {
            FUN_005bc9a0();
          }
          FUN_005f6974();
          FUN_0056b5bc();
        }
      }
    }
  }
  return;
}
