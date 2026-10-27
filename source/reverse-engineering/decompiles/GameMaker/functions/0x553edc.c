// rea decompile_all
// name: FUN_00553edc
// address: 0x553edc
// body: available
// range: 0x553edc-0x553fd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00553edc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_10;

  iVar1 = param_1[0x1e];
  iVar2 = param_1[0x18];
  iVar8 = 1;
  do {
    iVar6 = iVar8;
    iVar8 = iVar6 + 1;
    iVar7 = 1;
    iVar4 = iVar8;
    if (1 < iVar1) {
      do {
        iVar4 = iVar4 * iVar8;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  } while (iVar4 <= iVar2);
  if (iVar6 < 2) {
    iVar8 = *param_1;
    *(undefined4 *)(iVar8 + 0x14) = 0x38;
    *(int *)(iVar8 + 0x18) = iVar4;
    (**(code **)*param_1)();
  }
  iVar8 = 1;
  iVar4 = 0;
  piVar5 = param_2;
  if (0 < iVar1) {
    do {
      *piVar5 = iVar6;
      iVar8 = iVar8 * iVar6;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar1);
  }
  do {
    bVar3 = false;
    iVar4 = 0;
    local_10 = &DAT_0077b994;
    if (0 < iVar1) {
      do {
        iVar7 = iVar4;
        if (param_1[0xb] == 2) {
          iVar7 = *local_10;
        }
        iVar6 = (iVar8 / param_2[iVar7]) * (param_2[iVar7] + 1);
        if (iVar6 - iVar2 != 0 && iVar2 <= iVar6) break;
        iVar4 = iVar4 + 1;
        param_2[iVar7] = param_2[iVar7] + 1;
        bVar3 = true;
        local_10 = local_10 + 1;
        iVar8 = iVar6;
      } while (iVar4 < iVar1);
    }
    if (!bVar3) {
      return iVar8;
    }
  } while( true );
}
