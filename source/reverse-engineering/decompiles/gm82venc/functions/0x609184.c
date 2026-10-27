// rea decompile_all
// name: FUN_00609184
// address: 0x609184
// body: available
// range: 0x609184-0x609216 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00609184(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  uVar4 = FUN_00571ea8();
  FUN_00409dfc(param_1 + 0x78,&DAT_00608134,1,uVar4);
  uVar4 = FUN_00571ea8();
  FUN_00409dfc(param_1 + 0x7c,&DAT_00608164,1,uVar4);
  iVar2 = *(int *)(param_2 + 0xcc);
  piVar1 = (int *)(*(int *)(param_1 + 0x7c) + iVar2 * 4);
  *piVar1 = *piVar1 + 1;
  iVar5 = FUN_00409c34(*(undefined4 *)(*(int *)(param_1 + 0x78) + iVar2 * 4));
  iVar3 = *(int *)(*(int *)(param_1 + 0x7c) + iVar2 * 4);
  if (iVar5 < iVar3) {
    FUN_00409dfc(*(int *)(param_1 + 0x78) + iVar2 * 4,&DAT_00608104,1,iVar3 + 5);
  }
  *(int *)(*(int *)(*(int *)(param_1 + 0x78) + iVar2 * 4) + -4 +
          *(int *)(*(int *)(param_1 + 0x7c) + iVar2 * 4) * 4) = param_2;
  return;
}
