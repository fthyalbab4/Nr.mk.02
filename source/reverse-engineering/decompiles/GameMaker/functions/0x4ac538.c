// rea decompile_all
// name: FUN_004ac538
// address: 0x4ac538
// body: available
// range: 0x4ac538-0x4ac5c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ac538(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char local_24;
  int local_20;
  int local_1c [2];
  undefined4 local_14;
  undefined4 local_10;

  local_20 = CONCAT31(local_20._1_3_,param_2);
  cVar3 = '\0';
  local_24 = 'N';
  iVar1 = FUN_00513780(param_1,1);
  if ((iVar1 != 0) && ((*(char *)(iVar1 + 0x299) == '\x02' || (*(char *)(iVar1 + 0x299) == '\x05')))
     ) {
    local_14 = *(undefined4 *)(param_1 + 0x48);
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_24 = (char)local_1c;
    FUN_004f1670(param_1,&local_14,iVar1);
    iVar2 = FUN_004edf8c(iVar1);
    if (iVar2 == local_20) {
      iVar1 = FUN_004edfcc(iVar1);
      if (iVar1 == local_1c[0]) {
        cVar3 = '\x01';
        goto LAB_004ac5a3;
      }
    }
    cVar3 = '\0';
  }
LAB_004ac5a3:
  if ((cVar3 != *(char *)(param_1 + 0x27e)) &&
     (*(char *)(param_1 + 0x27e) = cVar3, local_24 != '\0')) {
    FUN_004f3af0(param_1);
  }
  return;
}
