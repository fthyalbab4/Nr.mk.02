// rea decompile_all
// name: FUN_00594ca4
// address: 0x594ca4
// body: available
// range: 0x594ca4-0x594d01 inclusive
// range: 0x594d1c-0x594d2d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00594ca4(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int local_c;

  cVar1 = FUN_005941c4(param_1,param_2,&local_c);
  uVar2 = param_3;
  if ((cVar1 != '\0') &&
     (uVar2 = *(uint *)(*(int *)(param_1 + 200) + 8 + local_c * 0xc),
     *(int *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc) == 1)) {
    switch(*(undefined2 *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)) {
    default:
      uVar2 = param_3;
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
  return uVar2;
}
