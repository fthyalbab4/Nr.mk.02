// rea decompile_all
// name: FUN_006f09fc
// address: 0x6f09fc
// body: available
// range: 0x6f09fc-0x6f0a3f inclusive
// range: 0x6f0a74-0x6f0bf3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f09fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;

  if ((*(int *)(param_1 + 0x5e8) != 0) && (*(int *)(*(int *)(param_1 + 0x5e8) + 4) != 0)) {
    FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0xfff5);
    switch(param_2) {
    case 0:
      uVar1 = FUN_006e8bac(*(undefined4 *)(param_1 + 0x5e8),param_3);
      break;
    case 1:
      uVar1 = FUN_006e8bf4(*(undefined4 *)(param_1 + 0x5e8),param_3);
      break;
    case 2:
      uVar1 = FUN_006e8c64(*(undefined4 *)(param_1 + 0x5e8));
      break;
    case 3:
      uVar1 = FUN_006e8ca4(*(undefined4 *)(param_1 + 0x5e8));
      break;
    case 4:
      uVar1 = FUN_006e8cf0(*(undefined4 *)(param_1 + 0x5e8),param_3,param_6,param_5);
      break;
    case 5:
      uVar1 = FUN_006e8d94(*(undefined4 *)(param_1 + 0x5e8),param_3,param_6,param_5);
      break;
    case 6:
      uVar1 = FUN_006e8e24(*(undefined4 *)(param_1 + 0x5e8),param_3,param_6,0 < param_5);
      break;
    case 7:
      uVar1 = FUN_006e8ef8(*(undefined4 *)(param_1 + 0x5e8),param_3,param_4);
      break;
    case 8:
      uVar1 = FUN_006e8f84(*(undefined4 *)(param_1 + 0x5e8),param_3,param_6,param_5);
      break;
    case 9:
      uVar1 = FUN_006e9030(*(undefined4 *)(param_1 + 0x5e8),param_3,param_6,param_5);
      break;
    case 10:
      uVar1 = FUN_006e90d4(*(undefined4 *)(param_1 + 0x5e8),param_3);
      break;
    case 0xb:
      uVar1 = FUN_006e915c(*(undefined4 *)(param_1 + 0x5e8),param_3,param_6,param_5);
      break;
    case 0xc:
      uVar1 = FUN_006e925c(*(undefined4 *)(param_1 + 0x5e8),param_3,param_6,param_5);
      break;
    default:
      FUN_004d43f8(L"Not yet Implemented");
      FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
      return;
    }
    FUN_006ed0a0(param_1);
    FUN_00405a7c(*(undefined4 *)(param_1 + 0x5e8));
    *(undefined4 *)(param_1 + 0x5e8) = uVar1;
    *(undefined1 *)(param_1 + 0x5f6) = 1;
    FUN_006ed868(param_1,1);
    FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
  }
  return;
}
