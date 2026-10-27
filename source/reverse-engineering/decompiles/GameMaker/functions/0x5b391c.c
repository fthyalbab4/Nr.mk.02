// rea decompile_all
// name: FUN_005b391c
// address: 0x5b391c
// body: available
// range: 0x5b391c-0x5b3b1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b391c(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  FUN_0052f12c(param_2,800);
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 4));
  iVar3 = *(int *)(param_1 + 4);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      if (param_3 == '\0') {
        FUN_007025e8(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 4),param_2);
      }
      else {
        uVar1 = FUN_00701cf4(&DAT_00700d94,1,*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 4));
        FUN_005b0c74(uVar1);
        FUN_007025e8(uVar1,param_2);
        FUN_00405a7c(uVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_3 != '\x01') {
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x10));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x14));
  }
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x18));
  if (param_3 != '\x01') {
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x1c));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x20));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x28));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x2c));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x24));
  }
  if ((param_3 != '\0') && (0 < *(int *)(param_1 + 4))) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar1 = FUN_005aecac(&DAT_005ae848,1,**(undefined4 **)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),
                           param_1 + 0x20,*(undefined4 *)(param_1 + 0x1c));
      iVar3 = *(int *)(param_1 + 4) + -1;
      if (0 < iVar3) {
        iVar2 = 1;
        do {
          FUN_005af188(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 4),
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x14),
                       *(undefined4 *)(param_1 + 0x10),param_1 + 0x20);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_005af674(uVar1,param_2);
      FUN_00405a7c(uVar1);
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      if (-1 < iVar3 + -1) {
        iVar2 = 0;
        do {
          uVar1 = FUN_005aecac(&DAT_005ae848,1,*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 4)
                               ,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),
                               param_1 + 0x20,*(undefined4 *)(param_1 + 0x1c));
          FUN_005af674(uVar1,param_2);
          FUN_00405a7c(uVar1);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return 1;
}
