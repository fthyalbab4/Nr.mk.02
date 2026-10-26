// rea decompile_all
// name: FUN_004fe774
// address: 0x4fe774
// body: available
// range: 0x4fe774-0x4fe8b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fe774(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;

  local_28 = 0;
  iVar3 = 0;
  iVar2 = *(int *)(param_2 + 0x278);
  if (*(int *)(iVar2 + 0x34) != 0) {
    bVar1 = *(byte *)(*(int *)(*(int *)(*(int *)(param_2 + 0x270) + 0x40) + 0x10) + 0x1d);
    FUN_0045b498(*(undefined4 *)(*(int *)(param_2 + 0x270) + 0x40),
                 *(byte *)(*(int *)(*(int *)(*(int *)(param_2 + 0x270) + 0x40) + 0x10) + 0x1d) | 1);
    (**(code **)(**(int **)(param_2 + 0x270) + 0x8c))
              (*(int **)(param_2 + 0x270),&local_20,iVar2 + 0x34,0x102);
    if ((bVar1 & 1) == 0) {
      FUN_0045b498(*(undefined4 *)(*(int *)(param_2 + 0x270) + 0x40),
                   CONCAT31(0xffffff,*(byte *)(*(int *)(*(int *)(*(int *)(param_2 + 0x270) + 0x40) +
                                                       0x10) + 0x1d) & 0xfe));
    }
    local_28 = (iStack_18 - local_20) + 8;
    iVar3 = (iStack_14 - iStack_1c) + 4;
  }
  if (*(int *)(iVar2 + 0x38) != 0) {
    (**(code **)(**(int **)(param_2 + 0x270) + 0x8c))
              (*(int **)(param_2 + 0x270),&local_20,iVar2 + 0x38,0x102);
    iVar2 = (iStack_18 - local_20) + 8;
    if (iVar2 < local_28) {
      iVar2 = local_28;
    }
    iVar3 = iVar3 + (iStack_14 - iStack_1c) + 4;
    local_28 = iVar2;
  }
  FUN_004edd14(param_2,iVar3);
  FUN_004edce0(param_2,local_28);
  return;
}
