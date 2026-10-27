// rea decompile_all
// name: FUN_004dd5dc
// address: 0x4dd5dc
// body: available
// range: 0x4dd5dc-0x4dd675 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004dd5dc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_5;

  local_5 = 0;
  if ((((*(char *)(param_4 + -1) == '\0') &&
       (*(uint *)(param_4 + -8) == (uint)*(ushort *)(param_1 + 0x50))) ||
      ((*(char *)(param_4 + -1) == '\x01' && (*(int *)(param_4 + -8) == *(int *)(param_1 + 0xac)))))
     || ((*(char *)(param_4 + -1) == '\x02' &&
         (*(uint *)(param_4 + -8) == (uint)*(ushort *)(param_1 + 0x60))))) {
    *(int *)(param_4 + -0xc) = param_1;
    local_5 = 1;
  }
  else {
    iVar2 = FUN_004dbe08(param_1);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        FUN_004dbe18(param_1,iVar3);
        cVar1 = FUN_004dd5dc();
        if (cVar1 != '\0') {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return local_5;
}
