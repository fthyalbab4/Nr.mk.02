// rea decompile_all
// name: FUN_004dc29c
// address: 0x4dc29c
// body: available
// range: 0x4dc29c-0x4dc308 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dc29c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  if (param_2 == 0) {
    FUN_00405a7c(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar1 = FUN_00405d08(param_1);
      uVar2 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      *(undefined4 *)(param_1 + 0x44) = uVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))(*(int **)(param_1 + 0x44),param_2);
    iVar1 = *(int *)(param_1 + 0x44);
    *(int *)(iVar1 + 0xc) = param_1;
    *(undefined1 **)(iVar1 + 8) = &LAB_004dc534;
    FUN_00405d08(param_1,param_2,(*(byte *)(param_2 + 0x1c) & 1) != 0);
    FUN_00448f68(param_2,param_1);
  }
  return;
}
