// rea decompile_all
// name: FUN_0059d7dc
// address: 0x59d7dc
// body: available
// range: 0x59d7dc-0x59d868 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059d7dc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HBRUSH hbr;
  RECT RStack_20;

  iVar2 = GetSystemMetrics(2);
  iVar3 = GetSystemMetrics(3);
  cVar1 = FUN_00406268(param_1);
  if (cVar1 == '\0') {
    FUN_0040c4c0(*(int *)(param_1 + 0x48) - iVar2,*(int *)(param_1 + 0x4c) - iVar3,iVar2,&RStack_20,
                 iVar3);
  }
  else {
    FUN_0040c4c0(0,*(int *)(param_1 + 0x4c) - iVar3,iVar2,&RStack_20,iVar3);
  }
  hbr = (HBRUSH)FUN_0045c344(*(undefined4 *)(param_1 + 0x1c0));
  FillRect(*(HDC *)(param_2 + 4),&RStack_20,hbr);
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}
