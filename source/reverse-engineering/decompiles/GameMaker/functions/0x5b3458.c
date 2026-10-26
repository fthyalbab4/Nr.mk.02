// rea decompile_all
// name: FUN_005b3458
// address: 0x5b3458
// body: available
// range: 0x5b3458-0x5b3500 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b3458(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if ((param_2 < 0) || (*(int *)(param_1 + 4) <= param_2)) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar1 = FUN_005aecac(&DAT_005ae848,1,**(undefined4 **)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),
                           param_1 + 0x20,*(undefined4 *)(param_1 + 0x1c));
      iVar4 = *(int *)(param_1 + 4) + -1;
      if (0 < iVar4) {
        iVar3 = 1;
        do {
          FUN_005af188(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar3 * 4),
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x14),
                       *(undefined4 *)(param_1 + 0x10),param_1 + 0x20);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      uVar1 = FUN_005aecac(&DAT_005ae848,1,*(undefined4 *)(*(int *)(param_1 + 0x30) + param_2 * 4),
                           *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),
                           param_1 + 0x20,*(undefined4 *)(param_1 + 0x1c));
    }
    uVar2 = FUN_005af71c(uVar1);
    FUN_00405a7c(uVar1);
  }
  return uVar2;
}
