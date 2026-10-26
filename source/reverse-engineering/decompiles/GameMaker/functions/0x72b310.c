// rea decompile_all
// name: FUN_0072b310
// address: 0x72b310
// body: available
// range: 0x72b310-0x72b379 inclusive
// range: 0x72b396-0x72b417 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072b310(undefined4 param_1,undefined4 *param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;

  cVar3 = FUN_0072d148(param_1);
  if (cVar3 == '\0') {
    *param_3 = 0;
    *param_2 = 0;
  }
  else {
    iVar4 = FUN_0072b6bc(param_1);
    uVar1 = *(undefined1 *)(iVar4 + 0x460);
    iVar4 = FUN_0072b6bc(param_1);
    uVar2 = *(undefined1 *)(iVar4 + 0x461);
    iVar4 = FUN_0072b6bc(param_1);
    uVar5 = FUN_007268a0(*(undefined4 *)(iVar4 + 0x458),uVar2,uVar1);
    *param_2 = uVar5;
    iVar4 = FUN_0072b6bc(param_1);
    switch(*(undefined1 *)(iVar4 + 0x461)) {
    case 0:
      iVar4 = FUN_0072b6bc(param_1);
      if (*(char *)(iVar4 + 0x460) == '\x10') {
        *param_3 = 2;
      }
      else {
        *param_3 = 1;
      }
      break;
    default:
      *param_3 = 0;
      break;
    case 2:
      iVar4 = FUN_0072b6bc(param_1);
      *param_3 = (uint)*(byte *)(iVar4 + 0x460) * 3 >> 3;
      break;
    case 3:
      *param_3 = 1;
      break;
    case 4:
      iVar4 = FUN_0072b6bc(param_1);
      *param_3 = (uint)(*(byte *)(iVar4 + 0x460) >> 2);
      break;
    case 6:
      iVar4 = FUN_0072b6bc(param_1);
      *param_3 = (uint)(*(byte *)(iVar4 + 0x460) >> 1);
    }
  }
  return;
}
