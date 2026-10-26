// rea decompile_all
// name: FUN_006267f4
// address: 0x6267f4
// body: available
// range: 0x6267f4-0x626898 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006267f4(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_14;

  local_14 = 0;
  FUN_006267b0();
  iVar2 = FUN_0050bbe0(param_1);
  if (iVar2 == 800) {
    DAT_006886fc = FUN_0050bbe0(param_1);
    FUN_00409dfc(&DAT_006886f8,&DAT_00626788,1,DAT_006886fc);
    if (-1 < DAT_006886fc + -1) {
      iVar5 = 0;
      iVar2 = DAT_006886fc;
      do {
        uVar3 = FUN_0050be9c(param_1);
        uVar4 = FUN_0062609c(&DAT_00625bd4,1);
        *(undefined4 *)(DAT_006886f8 + iVar5 * 4) = uVar4;
        cVar1 = FUN_006261b4(uVar4,uVar3);
        if (cVar1 == '\0') {
          return 0;
        }
        FUN_00405fdc(uVar3);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_14 = 1;
  }
  return local_14;
}
