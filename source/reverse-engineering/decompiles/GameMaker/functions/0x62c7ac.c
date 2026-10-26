// rea decompile_all
// name: FUN_0062c7ac
// address: 0x62c7ac
// body: available
// range: 0x62c7ac-0x62c86c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0062c7ac(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  FUN_0052f12c(param_1,800);
  FUN_0052f12c(param_1,DAT_0077f0e0);
  if (-1 < DAT_0077f0e0 + -1) {
    iVar3 = 0;
    iVar4 = DAT_0077f0e0;
    do {
      uVar2 = FUN_00405a4c(&LAB_0052e8fc,1);
      FUN_0052f240(uVar2,*(int *)(DAT_0077f0d0 + iVar3 * 4) != 0);
      if (*(int *)(DAT_0077f0d0 + iVar3 * 4) != 0) {
        FUN_0052f168(uVar2,*(undefined4 *)(DAT_0077f0d8 + iVar3 * 4));
        if (param_2 == '\0') {
          FUN_0052f140(uVar2);
        }
        cVar1 = FUN_00704c78(*(undefined4 *)(DAT_0077f0d0 + iVar3 * 4),uVar2);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      FUN_0052f34c(param_1,uVar2);
      FUN_00405a7c(uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 1;
}
