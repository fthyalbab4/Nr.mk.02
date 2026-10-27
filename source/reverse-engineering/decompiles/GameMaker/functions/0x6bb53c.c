// rea decompile_all
// name: FUN_006bb53c
// address: 0x6bb53c
// body: available
// range: 0x6bb53c-0x6bb5a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bb53c(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x388);
  cVar2 = (**(code **)(**(int **)(iVar3 + 0x278) + 0x5c))();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(iVar3 + 0x278);
    if (*(uint *)(iVar1 + 0x274) == (uint)*(ushort *)(iVar1 + 0x288) ||
        (int)(*(uint *)(iVar1 + 0x274) - (uint)*(ushort *)(iVar1 + 0x288)) < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x278) + 0x274) -
              (uint)*(ushort *)(*(int *)(iVar3 + 0x278) + 0x288);
    }
    FUN_00484e60(iVar1,iVar3);
  }
  return;
}
