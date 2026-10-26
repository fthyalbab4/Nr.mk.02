// rea decompile_all
// name: FUN_004f5600
// address: 0x4f5600
// body: available
// range: 0x4f5600-0x4f5844 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_004f5600(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  byte local_20;
  uint local_1c;
  uint local_18;
  byte local_14;
  undefined1 local_12;
  char local_10 [4];

  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 2) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      if (uVar3 < *(uint *)(param_1 + 0x24)) {
        local_14 = '\0';
      }
      else {
        local_14 = *(char *)(*(int *)(param_1 + 0x3c) + (uVar3 - *(uint *)(param_1 + 0x24)));
      }
      *(byte *)(*(int *)(param_1 + 0x2c) + uVar3) =
           *(char *)(*(int *)(param_1 + 0x3c) + uVar3) - local_14;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 4) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar4 = 0;
    do {
      *(char *)(*(int *)(param_1 + 0x30) + iVar4) =
           *(char *)(*(int *)(param_1 + 0x3c) + iVar4) - *(char *)(*(int *)(param_1 + 0x28) + iVar4)
      ;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 8) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      if (uVar3 < *(uint *)(param_1 + 0x24)) {
        local_14 = 0;
      }
      else {
        local_14 = *(byte *)(*(int *)(param_1 + 0x3c) + (uVar3 - *(uint *)(param_1 + 0x24)));
      }
      *(char *)(*(int *)(param_1 + 0x34) + uVar3) =
           *(char *)(*(int *)(param_1 + 0x3c) + uVar3) -
           (char)((uint)*(byte *)(*(int *)(param_1 + 0x28) + uVar3) + (uint)local_14 >> 1);
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 0x10) != 0) {
    local_14 = 0;
    local_12 = 0;
    iVar5 = *(int *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        local_14 = *(undefined1 *)(*(int *)(param_1 + 0x3c) + (uVar3 - *(uint *)(param_1 + 0x24)));
        local_12 = *(undefined1 *)(*(int *)(param_1 + 0x28) + (uVar3 - *(int *)(param_1 + 0x24)));
      }
      cVar1 = FUN_004f1680(local_14,*(undefined1 *)(*(int *)(param_1 + 0x28) + uVar3),local_12);
      *(char *)(*(int *)(param_1 + 0x38) + uVar3) =
           *(char *)(*(int *)(param_1 + 0x3c) + uVar3) - cVar1;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00404514(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x20));
  if ((*(char *)(*(int *)(param_1 + 0xc) + 300) == '\x01') ||
     (*(char *)(*(int *)(param_1 + 0xc) + 300) == '\0')) {
    local_20 = 0;
  }
  else {
    local_18 = 0;
    local_20 = 0;
    uVar3 = 0;
    do {
      bVar2 = (byte)uVar3;
      bVar6 = bVar2 < 7;
      if (bVar2 < 8) {
        bVar6 = (*(byte *)(*(int *)(param_1 + 0xc) + 300) >> (uVar3 & 0x1f) & 1) != 0;
      }
      if (bVar6) {
        local_1c = 0;
        FUN_004059b0(local_10,uVar3,1);
        if (local_10[0] == *(char *)(*(int *)(param_1 + 0xc) + 300)) {
          return bVar2;
        }
        if (1 < *(int *)(param_1 + 0x20) - 1U) {
          iVar4 = *(int *)(param_1 + 0x20) + -2;
          iVar5 = 2;
          do {
            if ((*(char *)(*(int *)(param_1 + 0x28 + uVar3 * 4) + iVar5) ==
                 *(char *)(*(int *)(param_1 + 0x28 + uVar3 * 4) + -1 + iVar5)) ||
               (*(char *)(*(int *)(param_1 + 0x28 + uVar3 * 4) + iVar5) ==
                *(char *)(*(int *)(param_1 + 0x28 + uVar3 * 4) + -2 + iVar5))) {
              local_1c = local_1c + 1;
            }
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (local_18 < local_1c) {
          local_18 = local_1c;
          local_20 = bVar2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 5);
  }
  return local_20;
}
