// rea decompile_all
// name: FUN_005e8364
// address: 0x5e8364
// body: available
// range: 0x5e8364-0x5e8456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005e8389) */

undefined4 FUN_005e8364(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_2;
  if (*(byte *)(param_1 + 0x2c) < param_2) {
    uVar4 = (uint)*(byte *)(param_1 + 0x2c);
  }
  uVar3 = param_2;
  if (uVar4 - 1 < 7) {
    *(char *)(param_1 + 0x2c) = *(char *)(param_1 + 0x2c) - (byte)uVar4;
    if (*(char *)(param_1 + 8) == '\0') {
      **(byte **)(param_1 + 0x28) =
           **(byte **)(param_1 + 0x28) |
           ('\x01' << ((byte)uVar4 & 0x1f)) + -1 << (*(byte *)(param_1 + 0x2c) & 0x1f);
    }
    if (*(char *)(param_1 + 0x2c) == '\0') {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      *(undefined1 *)(param_1 + 0x2c) = 8;
    }
    uVar3 = param_2 - uVar4;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      FUN_00404f38(*(undefined4 *)(param_1 + 0x28),uVar3 >> 3,0xff,uVar4,0);
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + (uVar3 >> 3);
    uVar2 = uVar3 % 8;
  }
  if (uVar2 != 0) {
    bVar1 = 8 - (sbyte)uVar2;
    *(byte *)(param_1 + 0x2c) = bVar1;
    if (*(char *)(param_1 + 8) == '\0') {
      **(char **)(param_1 + 0x28) = ('\x01' << (sbyte)uVar2) + -1 << (bVar1 & 0x1f);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 < param_2) {
    param_2 = uVar4;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - param_2;
  return CONCAT31((int3)(uVar4 >> 8),*(int *)(param_1 + 0x20) == 0);
}
