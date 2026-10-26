// rea decompile_all
// name: FUN_00613e3c
// address: 0x613e3c
// body: available
// range: 0x613e3c-0x613fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00613e3c(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;

  FUN_006164fc(param_4,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28));
  iVar1 = *(int *)(*(int *)(param_2 + 4) + param_3 * 0x28);
  if (iVar1 < 0x6b) {
    if (iVar1 == 0x6a) {
      iVar1 = FUN_00614708(param_1,param_2,param_3 + 1,param_4);
      if (*PTR_PTR_00688e10 != '\0') {
        return iVar1;
      }
      if (*(int *)(*(int *)(param_2 + 4) + iVar1 * 0x28) != 0x6b) {
        FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar1 * 0x28),
                     L"Symbol ) expected.");
      }
      return iVar1 + 1;
    }
    if (iVar1 == 5) {
      *param_4 = 5;
      FUN_00409360(param_4 + 4,*(int *)(param_2 + 4) + 8 + param_3 * 0x28,&DAT_00615f70);
      return param_3 + 1;
    }
    if (iVar1 == 6) {
      iVar1 = FUN_00613850(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    if (iVar1 == 7) {
      iVar1 = FUN_00613b50(param_1,param_2,param_3,param_4);
      return iVar1;
    }
  }
  else if (((iVar1 == 0xcb) || (iVar1 - 0xd2U < 2)) || (iVar1 - 0xd2U == 10)) {
    *param_4 = 0x3f2;
    param_4[1] = *(undefined4 *)(*(int *)(param_2 + 4) + param_3 * 0x28);
    param_4[10] = 1;
    uVar2 = FUN_004095b8(4,&DAT_00616078);
    param_4[0xb] = uVar2;
    FUN_00409dfc(param_4[0xb],&DAT_00616078,1,1);
    iVar1 = FUN_0061403c(param_1,param_2,param_3 + 1,*(undefined4 *)param_4[0xb]);
    return iVar1;
  }
  FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28),
               &PTR_DAT_00613ff8);
  return param_3;
}
