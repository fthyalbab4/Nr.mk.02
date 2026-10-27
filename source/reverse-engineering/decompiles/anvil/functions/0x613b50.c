// rea decompile_all
// name: FUN_00613b50
// address: 0x613b50
// body: available
// range: 0x613b50-0x613d20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00613b50(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_006164fc(param_4,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28));
  *param_4 = 7;
  if (*(int *)(*(int *)(param_2 + 4) + param_3 * 0x28) == 7) {
    param_4[1] = *(undefined4 *)(*(int *)(param_2 + 4) + 4 + param_3 * 0x28);
    iVar3 = param_3 + 1;
    param_4[10] = 1;
    uVar2 = FUN_004095b8(4,&DAT_00616078);
    param_4[0xb] = uVar2;
    FUN_00409dfc(param_4[0xb],&DAT_00616078,1,1);
    FUN_006164fc(*(undefined4 *)param_4[0xb],
                 *(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar3 * 0x28));
    **(undefined4 **)param_4[0xb] = 5;
    *(undefined4 *)(*(int *)param_4[0xb] + 0x10) = 0;
    iVar1 = *(int *)param_4[0xb];
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0xc0180000;
    if (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == 0x6e) {
      iVar3 = param_3 + 2;
      do {
        while( true ) {
          if ((*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == -2) ||
             (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == 0x6f)) {
            if (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == -2) {
              FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar3 * 0x28),
                           L"Symbol ] expected.");
              return iVar3;
            }
            iVar3 = iVar3 + 1;
            if ((int)param_4[10] < 4) {
              return iVar3;
            }
            FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar3 * 0x28),
                         L"Only 1- and 2-dimensional arrays are supported.");
            return iVar3;
          }
          param_4[10] = param_4[10] + 1;
          uVar2 = param_4[10];
          FUN_00409dfc(param_4[0xb],&DAT_00616078,1,uVar2);
          iVar3 = FUN_00614708(param_1,param_2,iVar3,uVar2,
                               *(int *)param_4[0xb] + -0x38 + param_4[10] * 0x38);
          if (*PTR_PTR_00688e10 != '\0') {
            return iVar3;
          }
          if (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) != 0x6d) break;
          iVar3 = iVar3 + 1;
        }
      } while (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == 0x6f);
      FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar3 * 0x28),
                   L"Symbol , or ] expected.");
    }
  }
  else {
    FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28),
                 &PTR_DAT_00613d30);
    iVar3 = param_3;
  }
  return iVar3;
}
