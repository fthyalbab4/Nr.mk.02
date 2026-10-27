// rea decompile_all
// name: FUN_0074c340
// address: 0x74c340
// body: available
// range: 0x74c340-0x74c400 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0074c340(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined4 local_1c;

  local_1c = 0;
  cVar2 = FUN_0074be00(param_1);
  if (cVar2 == '\0') {
    iVar7 = *(int *)(param_1 + 8);
    if (-1 < iVar7 + -1) {
      iVar3 = 0;
      uVar9 = true;
      do {
        iVar4 = FUN_0074c44c(param_1,iVar3);
        FUN_00408640(*(undefined4 *)(iVar4 + 0x18),param_2);
        if ((bool)uVar9) {
          uVar5 = FUN_0074c44c(param_1,iVar3);
          return uVar5;
        }
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + -1;
        uVar9 = iVar7 == 0;
      } while (!(bool)uVar9);
    }
  }
  else {
    uVar8 = 0;
    iVar7 = *(int *)(param_1 + 8) + -1;
    bVar1 = false;
    if (-1 < iVar7) {
      do {
        uVar6 = iVar7 + uVar8 >> 1;
        iVar3 = FUN_0074c44c(param_1,uVar6);
        iVar3 = FUN_004157d0(*(undefined4 *)(iVar3 + 0x18),param_2);
        if (iVar3 < 0) {
          uVar8 = uVar6 + 1;
        }
        else {
          iVar7 = uVar6 - 1;
          if (iVar3 == 0) {
            bVar1 = true;
            uVar8 = uVar6;
          }
        }
      } while ((int)uVar8 <= iVar7);
    }
    if (bVar1) {
      local_1c = FUN_0074c44c(param_1,uVar8);
    }
  }
  return local_1c;
}
