// rea decompile_all
// name: FUN_0061ff5c
// address: 0x61ff5c
// body: available
// range: 0x61ff5c-0x62001c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0061ff5c(void)

{
  undefined4 uVar1;
  uint uVar2;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [4];
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;

  if (DAT_006886a8 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    piStack_34 = DAT_006886a8;
    (**(code **)(*DAT_006886a8 + 0x8c))();
    FUN_0056262c(&piStack_34,&iStack_30,&iStack_2c,aiStack_28);
    aiStack_28[1] = 0;
    aiStack_28[3] = DAT_006886b4;
    aiStack_28[2] = 0;
    uStack_18 = DAT_006886b8;
    piStack_14 = piStack_34;
    iStack_c = (int)piStack_34 + iStack_2c;
    iStack_10 = iStack_30;
    iStack_8 = iStack_30 + aiStack_28[0];
    if ((char)PTR_FUN_006886c8 != '\0') {
      FUN_00563758();
    }
    FUN_00561fdc();
    uVar2 = (**(code **)(*DAT_006886a8 + 0x3c))();
    if ((uVar2 & 0x80000000) != 0) {
      FUN_0061f9f4();
    }
    uVar1 = 1;
  }
  return uVar1;
}
