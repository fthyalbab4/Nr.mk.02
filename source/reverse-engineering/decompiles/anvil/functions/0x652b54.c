// rea decompile_all
// name: FUN_00652b54
// address: 0x652b54
// body: available
// range: 0x652b54-0x652c90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00652b54(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined1 local_c4 [48];
  int local_94;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;

  *in_stack_00000004 = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0xbff00000;
  FUN_004048b8();
  cVar1 = FUN_005700dc();
  if (cVar1 == '\0') {
    FUN_0061156c(&PTR_DAT_00652ca0,0);
  }
  else {
    local_54 = FUN_004048b8();
    local_50 = FUN_004048b8();
    local_4c = FUN_004048b8();
    local_48 = FUN_004048b8();
    local_44 = FUN_004048b8();
    local_64 = *(undefined4 *)(in_stack_0000000c + 0x98);
    local_60 = *(undefined4 *)(in_stack_0000000c + 0x9c);
    local_5c = *(undefined4 *)(in_stack_0000000c + 0xb0);
    local_58 = *(undefined4 *)(in_stack_0000000c + 0xb4);
    local_3c = *(undefined4 *)(in_stack_0000000c + 200);
    local_38 = *(undefined4 *)(in_stack_0000000c + 0xcc);
    local_2c = 0;
    local_28 = 0x3ff00000;
    local_24 = 0;
    local_20 = 0x3ff00000;
    local_14 = 0;
    local_10 = 0x3ff00000;
    local_1c = 0xffffff;
    local_c = 1;
    FUN_004048b8();
    cVar1 = FUN_00571240();
    if (cVar1 != '\0') {
      FUN_004048b8();
      uVar2 = FUN_0057133c();
      iVar3 = FUN_0060ad08(uVar2,&local_64);
      if (-1 < iVar3) {
        FUN_004048b8();
        uVar2 = FUN_0057133c();
        FUN_00609014(uVar2,iVar3,local_c4);
        *(double *)(in_stack_00000004 + 2) = (double)local_94;
      }
    }
  }
  return;
}
