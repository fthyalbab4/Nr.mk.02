// rea decompile_all
// name: FUN_006b58c4
// address: 0x6b58c4
// body: available
// range: 0x6b58c4-0x6b599c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b58c4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];

  cVar1 = FUN_006ae8b4();
  if ((cVar1 != '\0') && (*PTR_DAT_00781c58 != '\0')) {
    if ((*(int *)(param_1 + 0x2ec) < *(int *)(param_1 + 0x2f4)) ||
       (((*(int *)(param_1 + 0x2f4) + *(int *)(param_1 + 0x2e4) <= *(int *)(param_1 + 0x2ec) ||
         (*(int *)(param_1 + 0x2f0) < *(int *)(param_1 + 0x2f8))) ||
        (*(int *)(param_1 + 0x2f8) + *(int *)(param_1 + 0x2e8) <= *(int *)(param_1 + 0x2f0))))) {
      FUN_006b281c(param_1);
      FUN_004eed28(param_1);
    }
    iVar2 = (*(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x2f8)) * *(int *)(param_1 + 0x2dc);
    if (*PTR_DAT_007823a4 != '\0') {
      iVar2 = iVar2 + *(int *)(param_1 + 0x2dc) * 5;
    }
    FUN_00438bf4(iVar2,((*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2f4)) + 1) *
                       *(int *)(param_1 + 0x2e0),local_14);
    FUN_004ee09c(param_1,local_14,&local_1c);
    (**(code **)(**(int **)(param_1 + 0x35c) + 0x44))(*(int **)(param_1 + 0x35c),local_1c,local_18);
  }
  return;
}
