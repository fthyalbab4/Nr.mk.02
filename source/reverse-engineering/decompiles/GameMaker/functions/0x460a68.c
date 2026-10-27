// rea decompile_all
// name: FUN_00460a68
// address: 0x460a68
// body: available
// range: 0x460a68-0x460af5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460a68(int *param_1,HENHMETAFILE param_2)

{
  UINT UVar1;
  int iVar2;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;

  if (param_2 != (HENHMETAFILE)0x0) {
    UVar1 = GetEnhMetaFileHeader(param_2,100,(LPENHMETAHEADER)&stack0xffffff94);
    if (UVar1 == 0) {
      FUN_0045d0fc();
    }
  }
  FUN_00460cf4(param_1);
  if (*(HENHMETAFILE *)(param_1[10] + 8) != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile(*(HENHMETAFILE *)(param_1[10] + 8));
  }
  FUN_00459a80(*(undefined4 *)(param_1[10] + 0x14));
  iVar2 = param_1[10];
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(HENHMETAFILE *)(iVar2 + 8) = param_2;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (param_2 != (HENHMETAFILE)0x0) {
    *(int *)(iVar2 + 0xc) = local_4c - local_54;
    *(int *)(iVar2 + 0x10) = local_48 - local_50;
  }
  iVar2 = (**(code **)(*param_1 + 0x28))();
  *(bool *)((int)param_1 + 0x22) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}
