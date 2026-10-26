// rea decompile_all
// name: FUN_006156f0
// address: 0x6156f0
// body: available
// range: 0x6156f0-0x61572d inclusive
// range: 0x61578a-0x61595e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006156f0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;

  FUN_006164fc(param_4,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28));
  iVar1 = *(int *)(*(int *)(param_2 + 4) + param_3 * 0x28);
  if (iVar1 < 0x15) {
    switch(iVar1) {
    case 6:
      param_3 = FUN_00613850(param_1,param_2,param_3,param_4);
      break;
    case 0xb:
      param_3 = FUN_006155e0(param_1,param_2,param_3,param_4);
      break;
    case 0xd:
      param_3 = FUN_00614d20(param_1,param_2,param_3,param_4);
      break;
    case 0x10:
      param_3 = FUN_0061538c(param_1,param_2,param_3,param_4);
      break;
    case 0x11:
      param_3 = FUN_0061543c(param_1,param_2,param_3,param_4);
      break;
    case 0x12:
      param_3 = FUN_006151d4(param_1,param_2,param_3,param_4);
      break;
    case 0x14:
      param_3 = FUN_0061553c(param_1,param_2,param_3,param_4);
      break;
    case -2:
      FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28),
                   &PTR_DAT_0061596c);
      break;
    default:
      goto switchD_00615727_caseD_ffffffff;
    }
  }
  else {
    if (iVar1 < 0x1c) {
      if (iVar1 == 0x1b) {
        param_3 = FUN_00614e1c(param_1,param_2,param_3,param_4);
        goto LAB_00615949;
      }
      if (iVar1 - 0x15U < 3) {
        *param_4 = *(undefined4 *)(*(int *)(param_2 + 4) + param_3 * 0x28);
        param_3 = param_3 + 1;
        goto LAB_00615949;
      }
      if (iVar1 == 0x18) {
        param_3 = FUN_00615124(param_1,param_2,param_3,param_4);
        goto LAB_00615949;
      }
      if (iVar1 == 0x19) {
        param_3 = FUN_00614ca4(param_1,param_2,param_3,param_4);
        goto LAB_00615949;
      }
      if (iVar1 == 0x1a) {
        param_3 = FUN_00614f7c(param_1,param_2,param_3,param_4);
        goto LAB_00615949;
      }
    }
    else {
      if (iVar1 == 0x1c) {
        param_3 = FUN_00614ef4(param_1,param_2,param_3,param_4);
        goto LAB_00615949;
      }
      if (iVar1 == 0x1d) {
        param_3 = FUN_006149bc(param_1,param_2,param_3,param_4);
        goto LAB_00615949;
      }
      if (iVar1 == 0x1e) {
        param_3 = FUN_00614b30(param_1,param_2,param_3,param_4);
        goto LAB_00615949;
      }
      if (iVar1 == 0x6c) goto LAB_00615949;
    }
switchD_00615727_caseD_ffffffff:
    param_3 = FUN_00614844(param_1,param_2,param_3,param_4);
  }
LAB_00615949:
  for (; *(int *)(*(int *)(param_2 + 4) + param_3 * 0x28) == 0x6c; param_3 = param_3 + 1) {
  }
  return param_3;
}
