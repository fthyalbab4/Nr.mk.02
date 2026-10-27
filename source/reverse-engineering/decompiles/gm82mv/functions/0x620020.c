// rea decompile_all
// name: FUN_00620020
// address: 0x620020
// body: available
// range: 0x620020-0x6200cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00620020(void)

{
  undefined4 uVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [4];
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  if (*PTR_DAT_006891d0 == '\0') {
    FUN_0058eedc();
  }
  if (DAT_006886a8 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    FUN_0056262c(&local_30,&local_2c,&local_28,local_24);
    local_24[1] = 0;
    local_24[3] = DAT_006886b4;
    local_24[2] = 0;
    local_14 = DAT_006886b8;
    local_10 = local_30;
    local_8 = local_30 + local_28;
    local_c = local_2c;
    local_4 = local_2c + local_24[0];
    if ((char)PTR_FUN_006886c8 != '\0') {
      FUN_00563758();
    }
    FUN_00561fdc();
    (**(code **)(*DAT_006886a8 + 0x3c))();
    uVar1 = 1;
  }
  return uVar1;
}
