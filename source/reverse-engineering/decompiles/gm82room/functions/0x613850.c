// rea decompile_all
// name: FUN_00613850
// address: 0x613850
// body: available
// range: 0x613850-0x6139fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00613850(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  FUN_006164fc(param_4,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28));
  *param_4 = 6;
  if (*(int *)(*(int *)(param_2 + 4) + param_3 * 0x28) == 6) {
    param_4[1] = *(undefined4 *)(*(int *)(param_2 + 4) + 4 + param_3 * 0x28);
    iVar3 = param_3 + 1;
    if (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == 0x6a) {
      iVar3 = param_3 + 2;
      param_4[10] = 0;
      uVar1 = FUN_004095b8(4,&DAT_00616078);
      param_4[0xb] = uVar1;
      do {
        while( true ) {
          if ((*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == -2) ||
             (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == 0x6b)) {
            if (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == -2) {
              FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar3 * 0x28),
                           L"Symbol ) expected.");
              return iVar3;
            }
            if (((int)param_4[10] < 0x11) &&
               ((iVar2 = FUN_00589268(param_4[1]), iVar2 < 0 ||
                (iVar2 = FUN_00589268(param_4[1]), iVar2 == param_4[10])))) {
              return iVar3 + 1;
            }
            FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar3 * 0x28),
                         L"Wrong number of arguments to function or script.");
            return iVar3;
          }
          param_4[10] = param_4[10] + 1;
          uVar1 = param_4[10];
          FUN_00409dfc(param_4[0xb],&DAT_00616078,1,uVar1);
          iVar3 = FUN_00614708(param_1,param_2,iVar3,uVar1,
                               *(int *)param_4[0xb] + -0x38 + param_4[10] * 0x38);
          if (*PTR_PTR_00688e10 != '\0') {
            return iVar3;
          }
          if (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) != 0x6d) break;
          iVar3 = iVar3 + 1;
        }
      } while (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) == 0x6b);
      FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar3 * 0x28),
                   L"Symbol , or ) expected.");
    }
    else {
      FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar3 * 0x28),
                   L"Symbol ( expected.");
    }
  }
  else {
    FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28),
                 &PTR_DAT_00613a0c);
    iVar3 = param_3;
  }
  return iVar3;
}
