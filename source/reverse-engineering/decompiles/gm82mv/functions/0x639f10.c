// rea decompile_all
// name: FUN_00639f10
// address: 0x639f10
// body: available
// range: 0x639f10-0x63a050 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639f10(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = FUN_004048b8();
  if (iVar2 == -1) {
    if (param_1 != 0) {
      *(undefined1 *)(param_1 + 0x109) = 0;
    }
  }
  else if (iVar2 == -2) {
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 0x109) = 0;
    }
  }
  else if (iVar2 == -3) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x70);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        iVar3 = FUN_00609000(*(undefined4 *)PTR_DAT_0068939c,iVar5);
        *(undefined1 *)(iVar3 + 0x109) = 0;
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (iVar2 < 100000) {
    iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x70);
    if (-1 < iVar5 + -1) {
      iVar3 = 0;
      do {
        iVar4 = FUN_00609000(*(undefined4 *)PTR_DAT_0068939c,iVar3);
        if (iVar2 == *(int *)(iVar4 + 0xcc)) {
LAB_00639fe5:
          iVar4 = FUN_00609000(*(undefined4 *)PTR_DAT_0068939c,iVar3);
          *(undefined1 *)(iVar4 + 0x109) = 0;
        }
        else {
          iVar4 = FUN_00609000(*(undefined4 *)PTR_DAT_0068939c,iVar3);
          cVar1 = FUN_0060faec(*(undefined4 *)(iVar4 + 0xd0),iVar2);
          if (cVar1 != '\0') goto LAB_00639fe5;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x70);
    if (-1 < iVar5 + -1) {
      iVar3 = 0;
      do {
        iVar4 = FUN_00609000(*(undefined4 *)PTR_DAT_0068939c,iVar3);
        if (iVar2 == *(int *)(iVar4 + 4)) {
          iVar4 = FUN_00609000(*(undefined4 *)PTR_DAT_0068939c,iVar3);
          *(undefined1 *)(iVar4 + 0x109) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_0060abc0(*(undefined4 *)PTR_DAT_0068939c);
  return;
}
