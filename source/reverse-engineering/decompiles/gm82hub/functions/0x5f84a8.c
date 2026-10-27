// rea decompile_all
// name: FUN_005f84a8
// address: 0x5f84a8
// body: available
// range: 0x5f84a8-0x5f86d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f84a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_18;

  local_18 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
  if (-1 < local_18 + -1) {
    iVar9 = 0;
    do {
      iVar1 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
      if ((*(char *)(iVar1 + 0x108) == '\0') && (iVar7 = *(int *)(iVar1 + 0x150), -1 < iVar7)) {
        iVar2 = FUN_00581c30(iVar7);
        if ((iVar2 != 0) &&
           (((0 < *(int *)(iVar2 + 0xc) && (*(char *)(iVar1 + 0x168) != '\0')) &&
            (*(double *)(iVar1 + 0x160) != 0.0)))) {
          if (*(double *)(iVar1 + 0x160) <= 0.0) {
            iVar3 = FUN_005817a8(iVar2);
            *(double *)(iVar1 + 0x158) = *(double *)(iVar1 + 0x158) + *(double *)(iVar1 + 0x160);
            iVar4 = FUN_005817a8(iVar2);
            iVar8 = (iVar4 + 1) - iVar3;
            if (iVar8 == 0 || iVar4 + 1 < iVar3) {
              iVar8 = iVar8 + -1;
              do {
                iVar4 = iVar3;
                uVar5 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
                uVar6 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
                FUN_0058a5bc(uVar6,uVar5,iVar7,iVar4);
                iVar3 = iVar3 + -1;
                iVar8 = iVar8 + 1;
              } while (iVar8 != 0);
            }
            if ((*(double *)(iVar1 + 0x158) < 0.0) && (*(char *)(iVar1 + 0x169) != '\0')) {
              iVar7 = FUN_005815b4(iVar2,*(int *)(iVar2 + 0xc) + -1);
              *(double *)(iVar1 + 0x158) = (double)iVar7;
            }
          }
          else {
            iVar3 = FUN_00581758(iVar2);
            *(double *)(iVar1 + 0x158) = *(double *)(iVar1 + 0x158) + *(double *)(iVar1 + 0x160);
            iVar4 = FUN_00581758(iVar2);
            if (iVar3 <= iVar4 + -1) {
              iVar4 = ((iVar4 + -1) - iVar3) + 1;
              do {
                iVar8 = iVar3;
                uVar5 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
                uVar6 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar9);
                FUN_0058a5bc(uVar6,uVar5,iVar7,iVar8);
                iVar3 = iVar3 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            iVar7 = FUN_005815b4(iVar2,*(int *)(iVar2 + 0xc) + -1);
            if (((double)iVar7 < *(double *)(iVar1 + 0x158)) && (*(char *)(iVar1 + 0x169) != '\0'))
            {
              *(undefined4 *)(iVar1 + 0x158) = 0;
              *(undefined4 *)(iVar1 + 0x15c) = 0;
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}
