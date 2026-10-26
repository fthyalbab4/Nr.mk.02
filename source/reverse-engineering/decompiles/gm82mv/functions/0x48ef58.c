// rea decompile_all
// name: FUN_0048ef58
// address: 0x48ef58
// body: available
// range: 0x48ef58-0x48efcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ef58(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  short local_20;
  short sStack_1e;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;

  if (*(int *)PTR_DAT_00688cd4 < 5) {
    uVar1 = FUN_004c45dc(param_1);
    local_20 = (short)*(undefined4 *)(param_2 + 8);
    local_1c = (int)local_20;
    sStack_1e = (short)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
    local_18 = (int)sStack_1e;
    FUN_004bb054(param_1,&local_1c,&local_14);
    FUN_004bcb48(param_1,0x7b,uVar1,local_14 & 0xffff | local_10 << 0x10);
  }
  FUN_004bd970(param_1,param_2);
  return;
}
