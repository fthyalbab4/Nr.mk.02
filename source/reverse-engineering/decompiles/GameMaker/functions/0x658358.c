// rea decompile_all
// name: FUN_00658358
// address: 0x658358
// body: available
// range: 0x658358-0x6587b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00658358(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  int local_14;

  FUN_006576fc(param_1);
  FUN_0052f12c(param_2,0x21d);
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 4));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x10));
  if (param_3 != '\x01') {
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x14));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x18));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x1c));
  }
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x1d));
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x20));
  cVar3 = *(char *)(param_1 + 0x24) != '\0';
  if (*(char *)(param_1 + 0x129) == '\0') {
    cVar3 = cVar3 + '\x02';
  }
  FUN_0052f12c(param_2,cVar3);
  FUN_0052f168(param_2,*(undefined4 *)(param_1 + 0x2ec));
  FUN_0052f12c(param_2,8);
  iVar2 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + 0x28 + iVar2 * 0x20);
    FUN_0052f240(param_2,*puVar1);
    FUN_0052f240(param_2,puVar1[1]);
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 4));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 8));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0xc));
    FUN_0052f240(param_2,puVar1[0x10]);
    FUN_0052f240(param_2,puVar1[0x11]);
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x14));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x18));
    FUN_0052f240(param_2,puVar1[0x1c]);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x128));
  FUN_0052f12c(param_2,8);
  iVar2 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + 300 + iVar2 * 0x38);
    FUN_0052f240(param_2,*puVar1);
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 4));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 8));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0xc));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x10));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x14));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x18));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x1c));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x20));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x24));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x28));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x2c));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x30));
    FUN_0052f12c(param_2,*(undefined4 *)(puVar1 + 0x34));
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x2f0));
  local_14 = *(int *)(param_1 + 0x2f0);
  if (-1 < local_14 + -1) {
    iVar2 = 0;
    do {
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2f4) + iVar2 * 0x18));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 4 + iVar2 * 0x18));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 8 + iVar2 * 0x18));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 0xc + iVar2 * 0x18));
      FUN_0052f168(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 0x10 + iVar2 * 0x18));
      if (param_3 == '\0') {
        FUN_0052f240(param_2,*(undefined1 *)(*(int *)(param_1 + 0x2f4) + 0x14 + iVar2 * 0x18));
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x2f8));
  local_14 = *(int *)(param_1 + 0x2f8);
  if (-1 < local_14 + -1) {
    iVar2 = 0;
    do {
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar2 * 0x28));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 4 + iVar2 * 0x28));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 8 + iVar2 * 0x28));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0xc + iVar2 * 0x28));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x10 + iVar2 * 0x28));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x14 + iVar2 * 0x28));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x18 + iVar2 * 0x28));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x1c + iVar2 * 0x28));
      FUN_0052f12c(param_2,*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x20 + iVar2 * 0x28));
      if (param_3 == '\0') {
        FUN_0052f240(param_2,*(undefined1 *)(*(int *)(param_1 + 0x2fc) + 0x24 + iVar2 * 0x28));
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (param_3 == '\0') {
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x300));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x304));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x308));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x30c));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x30d));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x30e));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x30f));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x310));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x311));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x312));
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 0x313));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x314));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x318));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x31c));
  }
  return 1;
}
