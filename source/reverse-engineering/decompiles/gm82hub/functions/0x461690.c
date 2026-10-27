// rea decompile_all
// name: FUN_00461690
// address: 0x461690
// body: available
// range: 0x461690-0x461712 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461690(int *param_1)

{
  HENHMETAFILE pHVar1;
  int iVar2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;

  pHVar1 = GetClipboardData(0xe);
  if (pHVar1 == (HENHMETAFILE)0x0) {
    FUN_0045d78c(PTR_LAB_006891a4);
  }
  FUN_00460d58(param_1);
  iVar2 = param_1[10];
  pHVar1 = CopyEnhMetaFileW(pHVar1,(LPCWSTR)0x0);
  *(HENHMETAFILE *)(iVar2 + 8) = pHVar1;
  GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar2 + 8),100,(LPENHMETAHEADER)&stack0xffffff98);
  *(int *)(iVar2 + 0xc) = local_48 - local_50;
  *(int *)(iVar2 + 0x10) = local_44 - local_4c;
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  *(bool *)((int)param_1 + 0x22) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}
