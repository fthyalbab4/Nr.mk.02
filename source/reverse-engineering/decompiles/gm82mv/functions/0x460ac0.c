// rea decompile_all
// name: FUN_00460ac0
// address: 0x460ac0
// body: available
// range: 0x460ac0-0x460b41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460ac0(int param_1,undefined4 *param_2)

{
  UINT cchBuffer;
  LPWSTR lpDescription;
  int iVar1;
  undefined4 uVar2;

  FUN_00408194(param_2,0);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    cchBuffer = GetEnhMetaFileDescriptionW(*(HENHMETAFILE *)(iVar1 + 8),0,(LPWSTR)0x0);
    if (0 < (int)cchBuffer) {
      FUN_00408520(param_2,cchBuffer);
      lpDescription = (LPWSTR)FUN_00408220(*param_2);
      GetEnhMetaFileDescriptionW
                (*(HENHMETAFILE *)(*(int *)(param_1 + 0x28) + 8),cchBuffer,lpDescription);
      FUN_00408220(*param_2);
      iVar1 = FUN_00417624();
      FUN_00408a54(param_2,1,iVar1 + 1);
      FUN_00408220(*param_2);
      uVar2 = FUN_00417624();
      FUN_00408520(param_2,uVar2);
    }
  }
  return;
}
