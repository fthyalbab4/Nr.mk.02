// rea decompile_all
// name: FUN_00701e94
// address: 0x701e94
// body: available
// range: 0x701e94-0x701ef7 inclusive
// range: 0x701f20-0x701fcc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00701e94(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;

  if (((0 < param_2) && (0 < param_3)) &&
     ((param_2 != *(int *)(param_1 + 4) || (param_3 != *(int *)(param_1 + 8))))) {
    iVar1 = FUN_00701cf4(&DAT_00700d94,1,param_1);
    FUN_00701e6c(param_1,param_2,param_3,param_4);
    switch(param_5) {
    default:
      param_2 = 0;
      param_3 = 0;
      break;
    case 1:
      param_2 = 0;
      param_3 = param_3 - *(int *)(iVar1 + 8);
      break;
    case 2:
      uVar2 = param_2 - *(int *)(iVar1 + 4);
      param_2 = (int)uVar2 >> 1;
      if (param_2 < 0) {
        param_2 = param_2 + (uint)((uVar2 & 1) != 0);
      }
      param_3 = param_3 - *(int *)(iVar1 + 8);
      break;
    case 3:
      param_2 = param_2 - *(int *)(iVar1 + 4);
      param_3 = param_3 - *(int *)(iVar1 + 8);
      break;
    case 4:
      param_2 = 0;
      uVar2 = param_3 - *(int *)(iVar1 + 8);
      param_3 = (int)uVar2 >> 1;
      if (param_3 < 0) {
        param_3 = param_3 + (uint)((uVar2 & 1) != 0);
      }
      break;
    case 5:
      uVar2 = param_2 - *(int *)(iVar1 + 4);
      param_2 = (int)uVar2 >> 1;
      if (param_2 < 0) {
        param_2 = param_2 + (uint)((uVar2 & 1) != 0);
      }
      uVar2 = param_3 - *(int *)(iVar1 + 8);
      param_3 = (int)uVar2 >> 1;
      if (param_3 < 0) {
        param_3 = param_3 + (uint)((uVar2 & 1) != 0);
      }
      break;
    case 6:
      param_2 = param_2 - *(int *)(iVar1 + 4);
      uVar2 = param_3 - *(int *)(iVar1 + 8);
      param_3 = (int)uVar2 >> 1;
      if (param_3 < 0) {
        param_3 = param_3 + (uint)((uVar2 & 1) != 0);
      }
      break;
    case 7:
      param_2 = 0;
      param_3 = 0;
      break;
    case 8:
      uVar2 = param_2 - *(int *)(iVar1 + 4);
      param_2 = (int)uVar2 >> 1;
      if (param_2 < 0) {
        param_2 = param_2 + (uint)((uVar2 & 1) != 0);
      }
      param_3 = 0;
      break;
    case 9:
      param_2 = param_2 - *(int *)(iVar1 + 4);
      param_3 = 0;
    }
    FUN_007034e0(param_1,param_2,param_3,0,iVar1);
    FUN_00405a7c(iVar1);
  }
  return;
}
