// rea decompile_all
// name: FUN_00464fd8
// address: 0x464fd8
// body: available
// range: 0x464fd8-0x46504f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464fd8(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [2];
  short local_12;
  undefined2 local_10;
  undefined1 local_c [4];

  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(int *)(iVar1 + 0x14) == 0) && (*(int *)(iVar1 + 8) != 0)) {
    FUN_0043c854();
    uStack_18 = 0x465007;
    FUN_0043ca88(*(undefined4 *)(iVar1 + 8),auStack_14,6);
    if (local_12 != 0) {
      if (local_12 == 1) {
        uStack_18 = 6;
        FUN_0045e304(*(undefined4 *)(iVar1 + 8),local_c,local_10,iVar1 + 0xc,param_1 + 0x2c);
      }
      else {
        uStack_18 = 0x465043;
        FUN_0045d7b0();
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = uStack_18;
  }
  return;
}
