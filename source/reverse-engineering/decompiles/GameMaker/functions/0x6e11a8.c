// rea decompile_all
// name: FUN_006e11a8
// address: 0x6e11a8
// body: available
// range: 0x6e11a8-0x6e13a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e11a8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;

  puVar1 = PTR_DAT_0078258c;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4d8),*PTR_DAT_0078258c);
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4d4),*puVar1);
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x494),*puVar1);
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x490),*puVar1);
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x568),*puVar1);
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x538),*puVar1);
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x58c),*puVar1);
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x590),*puVar1);
  FUN_004dbc6c(*(undefined4 *)(param_1 + 0x488),*(undefined4 *)(*(int *)(param_1 + 0x408) + 0x34));
  if (*(char *)(*(int *)(param_1 + 0x408) + 0x39) == '\0') {
LAB_006e1251:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
    if (iVar2 == 0) goto LAB_006e1251;
    uVar3 = 1;
  }
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x488),uVar3);
  FUN_004dbc6c(*(undefined4 *)(param_1 + 0x48c),*(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x34));
  if (*(char *)(*(int *)(param_1 + 0x40c) + 0x39) == '\0') {
LAB_006e1291:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
    if (iVar2 == 0) goto LAB_006e1291;
    uVar3 = 1;
  }
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x48c),uVar3);
  FUN_004dbc6c(*(undefined4 *)(param_1 + 0x494),*(undefined4 *)(*(int *)(param_1 + 0x414) + 0x34));
  if (*(char *)(*(int *)(param_1 + 0x414) + 0x39) == '\0') {
LAB_006e12d1:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
    if (iVar2 == 0) goto LAB_006e12d1;
    uVar3 = 1;
  }
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x494),uVar3);
  FUN_004dbc6c(*(undefined4 *)(param_1 + 0x49c),*(undefined4 *)(*(int *)(param_1 + 0x41c) + 0x34));
  if (*(char *)(*(int *)(param_1 + 0x41c) + 0x39) == '\0') {
LAB_006e1311:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
    if (iVar2 == 0) goto LAB_006e1311;
    uVar3 = 1;
  }
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x49c),uVar3);
  FUN_004dbc6c(*(undefined4 *)(param_1 + 0x4a4),*(undefined4 *)(*(int *)(param_1 + 0x424) + 0x34));
  if (*(char *)(*(int *)(param_1 + 0x424) + 0x39) == '\0') {
LAB_006e1351:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
    if (iVar2 == 0) goto LAB_006e1351;
    uVar3 = 1;
  }
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x4a4),uVar3);
  FUN_004dbc6c(*(undefined4 *)(param_1 + 0x4ac),*(undefined4 *)(*(int *)(param_1 + 0x42c) + 0x34));
  if (*(char *)(*(int *)(param_1 + 0x42c) + 0x39) != '\0') {
    iVar2 = FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
    if (iVar2 != 0) {
      uVar3 = 1;
      goto LAB_006e1397;
    }
  }
  uVar3 = 0;
LAB_006e1397:
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x4ac),uVar3);
  return;
}
