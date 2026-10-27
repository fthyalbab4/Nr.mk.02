// rea decompile_all
// name: FUN_004ed0fc
// address: 0x4ed0fc
// body: available
// range: 0x4ed0fc-0x4ed1c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ed0fc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  for (iVar3 = 0; iVar2 = FUN_00409c34(*(undefined4 *)(param_1 + 0xcc)), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if (param_2 == *(int *)(*(int *)(param_1 + 0xcc) + 4 + iVar3 * 0xc)) {
      return *(undefined4 *)(*(int *)(param_1 + 0xcc) + iVar3 * 0xc);
    }
    if (*(int *)(*(int *)(param_1 + 0xcc) + iVar3 * 0xc) == -1) break;
  }
  uVar1 = *(undefined4 *)(param_1 + 200);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  iVar2 = FUN_00409c34(*(undefined4 *)(param_1 + 0xcc));
  if (iVar2 <= iVar3) {
    iVar3 = FUN_00409c34(*(undefined4 *)(param_1 + 0xcc));
    FUN_00409dfc(param_1 + 0xcc,&DAT_004dd304,1,iVar3 + 1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xcc) + iVar3 * 0xc) = uVar1;
  *(int *)(*(int *)(param_1 + 0xcc) + 4 + iVar3 * 0xc) = param_2;
  *(bool *)(*(int *)(param_1 + 0xcc) + 8 + iVar3 * 0xc) = *(int *)(param_2 + 0x35c) != 0;
  return uVar1;
}
