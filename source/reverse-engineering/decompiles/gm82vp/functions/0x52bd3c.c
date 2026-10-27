// rea decompile_all
// name: FUN_0052bd3c
// address: 0x52bd3c
// body: available
// range: 0x52bd3c-0x52bd87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052bd3c(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined1 uStack_e;

  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = *(undefined2 *)(param_2 + 2);
  uStack_e = *(undefined1 *)((int)param_2 + 10);
  iVar3 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar3) {
    do {
      puVar2 = (undefined4 *)FUN_00438ec4(param_1,iVar3);
      cVar1 = FUN_004156dc(puVar2 + 1,&local_18,0xb);
      if (cVar1 != '\0') {
        return *puVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}
