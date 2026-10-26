// rea decompile_all
// name: FUN_004629e4
// address: 0x4629e4
// body: available
// range: 0x4629e4-0x462a46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004629e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;

  iVar1 = *(int *)(param_1 + 0x28);
  if (1 < *(int *)(iVar1 + 4)) {
    FUN_00462f00(param_1);
    if (*(char *)(iVar1 + 0x70) == '\0') {
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
    }
    else {
      uVar2 = 0;
    }
    FUN_00462308(param_1,*(undefined4 *)(iVar1 + 8),uVar2,iVar1 + 0x18);
    return;
  }
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
    if (*(HGDIOBJ *)(iVar1 + 0x14) != (HGDIOBJ)0x0) {
      BVar3 = DeleteObject(*(HGDIOBJ *)(iVar1 + 0x14));
      if (BVar3 == 0) {
        FUN_0045d15c();
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return;
}
