// rea decompile_all
// name: FUN_006eef30
// address: 0x6eef30
// body: available
// range: 0x6eef30-0x6eef87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eef30(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_10;
  undefined4 local_f;

  puVar4 = &local_10;
  iVar3 = *(int *)(param_1 + 0x5f0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  uVar2 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),iVar3,param_3,&local_10);
  cVar1 = FUN_00636728(uVar2,1,&local_f,puVar4);
  if (cVar1 != '\0') {
    FUN_006edd54(param_1,6,0,local_10,local_f,0,0,0);
  }
  return;
}
