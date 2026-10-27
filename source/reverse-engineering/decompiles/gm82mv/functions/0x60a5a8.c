// rea decompile_all
// name: FUN_0060a5a8
// address: 0x60a5a8
// body: available
// range: 0x60a5a8-0x60a932 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060a5a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;

  FUN_0050bce8(param_2,0x21c,param_3,param_3);
  FUN_0050bd24(param_2,*(undefined4 *)(param_1 + 4));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 0x14));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x18));
  cVar3 = *(char *)(param_1 + 0x1c) != '\0';
  if (*(char *)(param_1 + 0x41) == '\0') {
    cVar3 = cVar3 + '\x02';
  }
  FUN_0050bce8(param_2,cVar3);
  FUN_0050bd24(param_2,*(undefined4 *)(param_1 + 100));
  FUN_0050bce8(param_2,8);
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x20 + iVar1 * 4);
    FUN_0050bdfc(param_2,*(undefined1 *)(iVar2 + 4));
    FUN_0050bdfc(param_2,*(undefined1 *)(iVar2 + 5));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 8));
    FUN_0050bcfc(param_2);
    FUN_0050bcfc(param_2);
    FUN_0050bdfc(param_2,*(undefined1 *)(iVar2 + 0x20));
    FUN_0050bdfc(param_2,*(undefined1 *)(iVar2 + 0x21));
    FUN_0050bcfc(param_2);
    FUN_0050bcfc(param_2);
    FUN_0050bcfc(param_2);
    FUN_0050bcfc(param_2);
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x48));
    FUN_0050bcfc(param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 0x40));
  FUN_0050bce8(param_2,8);
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x44 + iVar1 * 4);
    FUN_0050bdfc(param_2,*(undefined1 *)(iVar2 + 4));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 8));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0xc));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x10));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x14));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x18));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x1c));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x20));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x24));
    FUN_0050bcfc(param_2);
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x30));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x34));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x38));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x3c));
    FUN_0050bce8(param_2,*(undefined4 *)(iVar2 + 0x40));
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x68));
  iVar1 = *(int *)(param_1 + 0x68);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_0060d800(*(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar2 * 4),param_2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x70));
  iVar1 = *(int *)(param_1 + 0x70);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_0060d800(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar2 * 4),param_2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x88));
  iVar1 = *(int *)(param_1 + 0x88);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_0050bcfc(param_2);
      FUN_0050bcfc(param_2);
      FUN_0050bce8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x10 + iVar2 * 0x60));
      FUN_0050bce8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x14 + iVar2 * 0x60));
      FUN_0050bce8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18 + iVar2 * 0x60));
      FUN_0050bce8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x1c + iVar2 * 0x60));
      FUN_0050bce8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x20 + iVar2 * 0x60));
      FUN_0050bcfc(param_2);
      FUN_0050bce8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x30 + iVar2 * 0x60));
      FUN_0050bcfc(param_2);
      FUN_0050bcfc(param_2);
      FUN_0050bce8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x48 + iVar2 * 0x60));
      FUN_0050bcfc(param_2);
      FUN_0050bdfc(param_2,*(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x58 + iVar2 * 0x60));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
