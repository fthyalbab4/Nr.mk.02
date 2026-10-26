// rea decompile_all
// name: FUN_006b3624
// address: 0x6b3624
// body: available
// range: 0x6b3624-0x6b386a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b3624(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_18;
  bool local_16;
  int local_14;

  *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x314) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x30c) = 0;
  if (((((*PTR_DAT_00781aec != '\0') &&
        (iVar2 = FUN_00409a18(*(undefined4 *)
                               (*(int *)(param_1 + 0x2d8) + 4 + *(int *)(param_1 + 0x2ec) * 0x10)),
        *(int *)(param_1 + 0x2f0) < iVar2)) &&
       ((sVar1 = *(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 +
                                    *(int *)(param_1 + 0x2ec) * 0x10) +
                           *(int *)(param_1 + 0x2f0) * 0xc), sVar1 == 0x28 ||
        ((((sVar1 == 0x29 || (sVar1 == 0x7b)) || (sVar1 == 0x7d)) ||
         ((sVar1 == 0x5b || (sVar1 == 0x5d)))))))) &&
      (iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + *(int *)(param_1 + 0x2ec) * 0x10) +
                        4 + *(int *)(param_1 + 0x2f0) * 0xc), iVar2 != 3)) && (iVar2 != 2)) {
    local_18 = 0x20;
    if (sVar1 == 0x28) {
      local_18 = 0x29;
    }
    if (sVar1 == 0x5b) {
      local_18 = 0x5d;
    }
    if (sVar1 == 0x7b) {
      local_18 = 0x7d;
    }
    if (sVar1 == 0x29) {
      local_18 = 0x28;
    }
    if (sVar1 == 0x5d) {
      local_18 = 0x5b;
    }
    local_16 = sVar1 == 0x5d || sVar1 == 0x29;
    if (sVar1 == 0x7d) {
      local_18 = 0x7b;
      local_16 = true;
    }
    *(undefined1 *)(param_1 + 0x30c) = 1;
    local_14 = 1;
    iVar2 = *(int *)(param_1 + 0x2ec);
    iVar3 = *(int *)(param_1 + 0x2f0);
    do {
      do {
        if (local_16) {
          while (iVar3 = iVar3 + -1, iVar3 < 0) {
            if (iVar2 == 0) {
              return;
            }
            iVar2 = iVar2 + -1;
            iVar3 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar2 * 0x10));
          }
        }
        else {
          iVar3 = iVar3 + 1;
          while (iVar4 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar2 * 0x10))
                , iVar4 <= iVar3) {
            iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
            if (iVar3 + -1 <= iVar2) {
              return;
            }
            iVar2 = iVar2 + 1;
            iVar3 = 0;
          }
        }
      } while ((*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar2 * 0x10) + 4 + iVar3 * 0xc)
                == 3) ||
              (*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar2 * 0x10) + 4 + iVar3 * 0xc) ==
               2));
      if (sVar1 == *(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar2 * 0x10) + iVar3 * 0xc))
      {
        local_14 = local_14 + 1;
      }
      if (*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar2 * 0x10) + iVar3 * 0xc) ==
          local_18) {
        local_14 = local_14 + -1;
      }
    } while (local_14 != 0);
    *(int *)(param_1 + 0x310) = iVar2;
    *(int *)(param_1 + 0x314) = iVar3;
  }
  return;
}
