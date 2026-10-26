// rea decompile_all
// name: FUN_005f8fd0
// address: 0x5f8fd0
// body: available
// range: 0x5f8fd0-0x5f8ff3 inclusive
// range: 0x5f904c-0x5f9291 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f8fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;

  FUN_0061fc40(&local_8,&local_c);
  switch(param_1) {
  case 1:
    FUN_005f8744(local_8,local_c,1,param_4,param_5,0);
    break;
  case 2:
    FUN_005f8744(local_8,local_c,0xffffffff,param_4,param_5,0);
    break;
  case 3:
    FUN_005f8744(local_8,local_c,0,param_4,param_5,1);
    break;
  case 4:
    FUN_005f8744(local_8,local_c,0,param_4,param_5,0xffffffff);
    break;
  case 5:
    FUN_005f89f4(local_8,local_c,1,param_4,param_5,1);
    break;
  case 6:
    FUN_005f8864(local_8,local_c,1,param_4,param_5,0);
    break;
  case 7:
    FUN_005f8864(local_8,local_c,0xffffffff,param_4,param_5,0);
    break;
  case 8:
    FUN_005f8864(local_8,local_c,0,param_4,param_5,1);
    break;
  case 9:
    FUN_005f8864(local_8,local_c,0,param_4,param_5,0xffffffff);
    break;
  case 10:
    uVar2 = 0;
    uVar1 = FUN_004048b8();
    FUN_005f8b00(local_8,local_c,1,DAT_00688630,uVar1,uVar2);
    break;
  case 0xb:
    uVar2 = 0;
    uVar1 = FUN_004048b8();
    FUN_005f8b00(local_8,local_c,0xffffffff,DAT_00688630,uVar1,uVar2);
    break;
  case 0xc:
    uVar2 = 1;
    uVar1 = FUN_004048b8();
    FUN_005f8b00(local_8,local_c,0,DAT_00688630,uVar1,uVar2);
    break;
  case 0xd:
    uVar2 = 0xffffffff;
    uVar1 = FUN_004048b8();
    FUN_005f8b00(local_8,local_c,0,DAT_00688630,uVar1,uVar2);
    break;
  case 0xe:
    FUN_005f8908(local_8,local_c,1,param_4,param_5,0);
    break;
  case 0xf:
    FUN_005f8908(local_8,local_c,0xffffffff,param_4,param_5,0);
    break;
  case 0x10:
    FUN_005f8908(local_8,local_c,0,param_4,param_5,1);
    break;
  case 0x11:
    FUN_005f8908(local_8,local_c,0,param_4,param_5,0xffffffff);
    break;
  case 0x12:
    FUN_005f8d5c(local_8,local_c,0,param_4,param_5);
    break;
  case 0x13:
    FUN_005f8d5c(local_8,local_c,1,param_4,param_5);
    break;
  case 0x14:
    FUN_005f8ecc();
    break;
  case 0x15:
    FUN_005f8f14();
  }
  return;
}
