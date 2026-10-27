// rea decompile_all
// name: FUN_006151d4
// address: 0x6151d4
// body: available
// range: 0x6151d4-0x615322 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006151d4(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = param_3 + 1;
  FUN_006164fc(param_4,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar2 * 0x28));
  *param_4 = 0x12;
  param_4[10] = 4;
  uVar1 = FUN_004095b8(4,&DAT_00616078);
  param_4[0xb] = uVar1;
  FUN_00409dfc(param_4[0xb],&DAT_00616078,1,4);
  if (*(int *)(*(int *)(param_2 + 4) + iVar2 * 0x28) == 0x6a) {
    iVar2 = FUN_006156f0(param_1,param_2,param_3 + 2,*(undefined4 *)param_4[0xb]);
    if (*PTR_PTR_00688e10 == '\0') {
      if (*(int *)(*(int *)(param_2 + 4) + iVar2 * 0x28) == 0x6c) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = FUN_00614708(param_1,param_2,iVar2,*(int *)param_4[0xb] + 0x38);
      if (*PTR_PTR_00688e10 == '\0') {
        if (*(int *)(*(int *)(param_2 + 4) + iVar2 * 0x28) == 0x6c) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = FUN_006156f0(param_1,param_2,iVar2,*(int *)param_4[0xb] + 0x70);
        if (*PTR_PTR_00688e10 == '\0') {
          if (*(int *)(*(int *)(param_2 + 4) + iVar2 * 0x28) == 0x6b) {
            iVar2 = FUN_006156f0(param_1,param_2,iVar2 + 1,*(int *)param_4[0xb] + 0xa8);
          }
          else {
            FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar2 * 0x28),
                         L"Symbol ) expected.");
          }
        }
      }
    }
  }
  else {
    FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar2 * 0x28),
                 L"Symbol ( expected.");
  }
  return iVar2;
}
