// rea decompile_all
// name: FUN_004c3560
// address: 0x4c3560
// body: available
// range: 0x4c3560-0x4c362e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c3560(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;

  cVar1 = (**(code **)(*param_1 + 0x5c))();
  if ((((cVar1 != '\0') && (*(char *)((int)param_1 + 0x1ea) != '\0')) &&
      (((char)param_1[0xaa] != '\0' || ((char)param_1[0x9f] != '\0')))) &&
     (((cVar1 = FUN_004c350c(), cVar1 != '\0' &&
       (iVar2 = FUN_004c4514(param_1,*(undefined2 *)(param_2 + 4),&stack0xfffffffc), iVar2 != 0)) &&
      (((char)param_1[0x9f] == '\0' || (*(char *)(iVar2 + 0x1c6) == '\x05')))))) {
    if (((*(char *)(iVar2 + 0x1c6) == '\x02') && (iVar3 = FUN_004a8960(), 0x40046 < iVar3)) ||
       ((*(int *)(iVar2 + 0x1c0) == 0 && (*(int *)(iVar2 + 0x1bc) == 0)))) {
      FUN_00405d08(iVar2);
    }
    else {
      FUN_00405d08(param_1,iVar2);
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  FUN_004f68e0(param_1,param_2);
  return;
}
