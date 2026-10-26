// rea decompile_all
// name: FUN_004f0c20
// address: 0x4f0c20
// body: available
// range: 0x4f0c20-0x4f0c8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f0c20(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  short local_18;
  short sStack_16;
  int local_14;
  int local_10;

  *(undefined4 *)(param_2 + 0xc) = 0;
  local_18 = (short)*(undefined4 *)(param_2 + 8);
  local_14 = (int)local_18;
  sStack_16 = (short)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
  local_10 = (int)sStack_16;
  cVar1 = FUN_00405d08(param_1,*(undefined2 *)(param_2 + 4),(int)*(short *)(param_2 + 6),&local_14);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar2 = FUN_004efb90(*(int *)(param_1 + 0x34),0xb043,*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}
