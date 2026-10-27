// rea decompile_all
// name: FUN_005a891c
// address: 0x5a891c
// body: available
// range: 0x5a891c-0x5a8a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a891c(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;

  FUN_0052f12c(param_2,800);
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 4));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0xc));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0xd));
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 1) {
    iVar1 = 0;
  }
  FUN_0052f12c(param_2,*(uint *)(param_1 + 0x10) & 0xffff | iVar1 << 0x10 |
                       (*(int *)(param_1 + 0x1c) + 1) * 0x1000000);
  FUN_0052f12c(param_2,*(uint *)(param_1 + 0x14) & 0xffff);
  if (param_3 != '\0') {
    FUN_005a809c(param_1);
    iVar1 = 0;
    do {
      FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x20 + iVar1 * 4));
      FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x420 + iVar1 * 4));
      FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x820 + iVar1 * 4));
      FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0xc20 + iVar1 * 4));
      FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x1020 + iVar1 * 4));
      FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x1420 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x100);
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x1c20));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x1c24));
    uVar2 = FUN_00405a4c(&LAB_00433630,1);
    FUN_0043f4c0(uVar2,*(undefined4 *)(param_1 + 0x1c28),
                 *(int *)(param_1 + 0x1c20) * *(int *)(param_1 + 0x1c24));
    FUN_0052f298(param_2,uVar2);
    FUN_00405a7c(uVar2);
    FUN_00409be0(param_1 + 0x1c28,&DAT_005a65a4,1,0);
  }
  return 1;
}
