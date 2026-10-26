// rea decompile_all
// name: FUN_005dab94
// address: 0x5dab94
// body: available
// range: 0x5dab94-0x5dac0e inclusive
// range: 0x5dac29-0x5dac3d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005dab94(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int local_10;
  undefined4 *local_c;

  local_c = param_3;
  cVar1 = FUN_005da028(param_1,param_2,&local_10);
  if (cVar1 == '\0') {
    *local_c = 0;
    uVar2 = param_4;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 200) + 8 + local_10 * 0xc);
    *local_c = *(undefined4 *)(*(int *)(param_1 + 200) + 4 + local_10 * 0xc);
    if (*(int *)(*(int *)(param_1 + 200) + 4 + local_10 * 0xc) == 1) {
      switch(*(undefined2 *)(*(int *)(param_1 + 200) + 2 + local_10 * 0xc)) {
      default:
        uVar2 = param_4;
        break;
      case 1:
        uVar2 = uVar2 & 0xff;
        break;
      case 3:
      case 8:
        uVar2 = uVar2 & 0xffff;
        break;
      case 4:
      case 9:
        break;
      }
    }
  }
  return uVar2;
}
