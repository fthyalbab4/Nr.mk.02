// rea decompile_all
// name: FUN_004fcb00
// address: 0x4fcb00
// body: available
// range: 0x4fcb00-0x4fcb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004fcb00(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  uVar2 = 4;
  if (param_2 != 0) {
    FUN_004edf30(param_1,&local_14);
    FUN_004edf30(param_2,&local_24);
    if (((local_20 < local_10) || (local_18 <= local_8)) || (local_c < local_1c)) {
      if (((local_24 < local_14) || (local_1c <= local_c)) || (local_8 < local_18)) {
        iVar1 = local_20 + local_18 >> 1;
        if (iVar1 < 0) {
          iVar1 = iVar1 + (uint)((local_20 + local_18 & 1U) != 0);
        }
        if (iVar1 <= local_10) {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
