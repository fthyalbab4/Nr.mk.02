// rea decompile_all
// name: FUN_006cdb40
// address: 0x6cdb40
// body: available
// range: 0x6cdb40-0x6cdc53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006cdb40(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_14;

  uVar5 = FUN_00405a4c(&LAB_0052e8fc,1);
  cVar1 = FUN_005ceb84(0);
  FUN_00404788();
  iVar6 = FUN_004047b0(2000);
  iVar6 = iVar6 + 2000;
  FUN_0052f12c(uVar5,iVar6);
  if (0 < iVar6) {
    do {
      uVar7 = FUN_004047b0(0xfffffff);
      FUN_0052f12c(uVar5,uVar7);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  cVar2 = FUN_0071b5fc();
  cVar3 = FUN_005ceb84(*(undefined4 *)PTR_DAT_00782474);
  local_14 = 0;
  cVar4 = FUN_0071b624();
  iVar6 = (uint)(cVar4 != '\0') + *(int *)PTR_DAT_00782030 * 2;
  if ((cVar2 == '\x01') && ((cVar3 != '\x01' || (cVar1 == '\x01')))) {
    iVar6 = 0;
  }
  FUN_0052f12c(uVar5,iVar6);
  cVar1 = FUN_006cd8ac(uVar5);
  if (cVar1 == '\0') {
    FUN_00405a7c(uVar5);
  }
  else {
    FUN_00404788();
    iVar6 = FUN_004047b0(2000);
    iVar6 = iVar6 + 2000;
    if (0 < iVar6) {
      do {
        uVar7 = FUN_004047b0(0xfffffff);
        FUN_0052f12c(uVar5,uVar7);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_0052f878(param_1,uVar5);
    FUN_00405a7c(uVar5);
    local_14 = 1;
  }
  return local_14;
}
