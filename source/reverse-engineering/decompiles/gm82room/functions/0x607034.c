// rea decompile_all
// name: FUN_00607034
// address: 0x607034
// body: available
// range: 0x607034-0x6070ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00607034(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  FUN_00572498();
  *(undefined4 *)PTR_DAT_00688f94 = 0;
  *(undefined4 *)PTR_DAT_00688b88 = 0xffffffff;
  *(undefined4 *)PTR_DAT_00688ff0 = 0xffffffff;
  *(undefined4 *)PTR_DAT_00688a0c = 0;
  *(undefined4 *)PTR_DAT_006889c0 = 0;
  FUN_00404790();
  FUN_00589d48();
  cVar1 = FUN_00585afc();
  if (cVar1 != '\0') {
    if (*PTR_DAT_00689284 == '\0') {
      FUN_00562120(0xffffffff);
    }
    else {
      FUN_00562120(0);
    }
    uVar2 = FUN_00571238();
    FUN_00409dfc(PTR_DAT_00688c44,&DAT_00571724,1,uVar2);
    iVar3 = FUN_00571238();
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_00688c44 + iVar4 * 4) = 0;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    DAT_00688660 = 0;
    uVar2 = FUN_00571644();
    FUN_00606820(uVar2,1);
  }
  return;
}
