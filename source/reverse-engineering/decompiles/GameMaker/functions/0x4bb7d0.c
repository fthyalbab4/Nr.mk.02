// rea decompile_all
// name: FUN_004bb7d0
// address: 0x4bb7d0
// body: available
// range: 0x4bb7d0-0x4bb850 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb7d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;

  local_10 = param_3;
  if (*(int *)(param_1 + 700) == 0) {
    uVar2 = FUN_00405a4c(&LAB_00433630,1);
    *(undefined4 *)(param_1 + 700) = uVar2;
  }
  else {
    FUN_0043f2b8();
  }
  iVar3 = FUN_004b94ec(*(undefined4 *)(param_1 + 0x29c));
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar4);
      uVar1 = FUN_004b8bb4();
      local_10 = CONCAT31(local_10._1_3_,uVar1);
      FUN_0043f4c0(*(undefined4 *)(param_1 + 700),&local_10,1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0043f254(*(undefined4 *)(param_1 + 700));
  return;
}
